#include <wiringPi.h>

int main()
{
   ::wiringPiSetup();

   // Set GPIO.0 as output
   ::pinMode(0, OUTPUT);

   // Loop forever and toggle pin
   int output = 1;
   for(;;) {
      ::digitalWrite(0, output);
      ::delay(1000);

      output = not output;
   }
}
