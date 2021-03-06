#ifndef TOLAKO5V
#define TOLAKO5V

#include <string>
#include <wiringPi.h>

class Tolako5V
{
public:
	Tolako5V(void); 		    //Initialize sensor on default pin
        void setPin(int pinNumber);            //Sets the pin the sensor will read from by default
	float readCurrent(int pinNumber);	//Performs an analog read on the sensor wire
	float readCurrent(void);            //Read from the pin the sensor was initialized on
	std::string print(void);			//Prints the current as a string

private:
	int pinNum;							//The number of the pin the sensor is connected to
	float current;				//The current measurement data from the last read
};

#endif
