#include <wiringPi.h>
#include <random>

int main()
{
   ::wiringPiSetup();

   std::mt19937 engine(std::random_device{}());
   std::uniform_int_distribution<uint16_t> dist(1, 500);

   // Set GPIO.0 as output
   ::pinMode(0, OUTPUT);

   // Loop forever and toggle pin
   int output = 1;
   for(;;) {
      uint16_t on_time = dist(engine);
      uint16_t off_time = dist.b() - on_time;

      ::digitalWrite(0, output);
      ::delay(on_time);

      output = not output;

      ::digitalWrite(0, output);
      ::delay(off_time);

      output = not output;
   }
}
