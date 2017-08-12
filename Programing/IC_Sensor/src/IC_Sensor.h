#include "Arduino.h"

class SensorArray{
	public:
		SensorArray(unsigned char *sensor_pin_array, unsigned char array_size);
		unsigned char *getValueArray();
		float getAnalogValue();
		unsigned char getLineWidth();
		unsigned char getLeftSize();
		unsigned char getRightSize();
	
	private:
		unsigned char *sensor_array;
		unsigned char number_of_sensors;
		unsigned char *value_array;
		unsigned char **value_array_left;
		unsigned char **value_array_right;
		unsigned char middle;
};


