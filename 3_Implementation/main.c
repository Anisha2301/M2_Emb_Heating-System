#include <avr/io.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

int main(void)
{
    uint16_t temp;

    while(1)
    {
        if(Activity1_LED()==1) //Check if both the switches are pressed
        {

            TurnLED_ON();//Turn LED ON
            temp=Activity2_GetADC(); //Get the ADC value
            Activity3_PWM(temp); //PWM output based on temperature
		    Activity4_USARTWrite(temp); //To Serial monitor to print Temperature


        }
        else  //in all other cases
        {
            TurnLED_OFF();//Turn LED OFF
		    _delay_ms(200);
        }

    }
    return 0;
}