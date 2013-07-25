/*
        Title : Stoplight.c
        Author : Andrew Struve
        Date : 7/20/2013
        Description: Stoplight is a simple project using a red, green, and yellow
        led (Stoplight colors).

        input keys :
        a - red
        s - yellow
        d - green
        Press enter after typing a key.
*/

#include <stdio.h>
#include <wiringPi.h>

#define RED_LIGHT 4
#define YELLOW_LIGHT 5
#define GREEN_LIGHT 6

int setup()
{
        int ret = 0;
        printf ("Raspberry Pi Stoplight Test\n") ;
        wiringPiSetup ();

        pinMode (RED_LIGHT, OUTPUT) ;
        pinMode (YELLOW_LIGHT, OUTPUT);
        pinMode (GREEN_LIGHT, OUTPUT);


        return ret;
}
int setRedLight()
{
        int ret = 0;

        digitalWrite(RED_LIGHT, HIGH);
        digitalWrite(YELLOW_LIGHT,LOW);
        digitalWrite(GREEN_LIGHT, LOW);

        return ret;
}
int setYellowLight()
{
        int ret = 0;

        digitalWrite(RED_LIGHT, LOW);
        digitalWrite(YELLOW_LIGHT, HIGH);
        digitalWrite(GREEN_LIGHT, LOW);

        return ret;
}
int setGreenLight()
{
        int ret;

        digitalWrite(RED_LIGHT, LOW);
        digitalWrite(YELLOW_LIGHT, LOW);
        digitalWrite(GREEN_LIGHT, HIGH);
        return ret;
}

int main()
{
	setup();

	while(1)
	{
		setRedLight();
		delay(500);
		setYellowLight();
		delay(500);
		setGreenLight();
		delay(500);		
	}
	return 0;
}
