#include "Robot.h"

SensorArray::SensorArray(unsigned char *sensor_pin_array, unsigned char array_size){
	this->sensor_array = sensor_pin_array;
	this->number_of_sensors = array_size;
	
	for(int i=0; i<array_size; i++){
		pinMode(i, INPUT);
	}
	
	this->value_array = new unsigned char[array_size];
	this->middle = (unsigned char)(array_size/2);
	
	if(array_size%2 != 0){
		this->middle++;
	}
	
	this->value_array_left = new unsigned char*[this->middle];
	this->value_array_right = new unsigned char*[this->middle];
	
	for(int i=0; i<this->middle; i++){
		this->value_array_left[i] = &this->value_array[i];
		this->value_array_right[i] = &this->value_array[(i+this->middle)];
	}
}


unsigned char *SensorArray::getValueArray(){
	for(int i=0; i<this->number_of_sensors; i++){
		this->value_array[i] = digitalRead(this->sensor_array[i]);
	}
	
	return value_array;
}


float SensorArray::getAnalogValue(){
	float counter = 0;
	float summ = 0;
	
	this->getValueArray();
	
	for(int i=0; i<this->number_of_sensors; i++){
		if(this->value_array[i] == 0){
			counter++;
			summ+=(float)(i+1);
		}
	}
	
	float ret = summ/counter;
	if(counter == 0){
		return 0;
		}
	return ret;
	
}
	

unsigned char SensorArray::getLineWidth(){
	unsigned char counter = 0;
	
	this->getValueArray();
	
	for(int i=0; i<this->number_of_sensors; i++){
		if(this->value_array[i] == 0){
			counter++;
		}
	}
	
	return counter;	
}


unsigned char SensorArray::getLeftSize(){
	unsigned char counter = 0;
	
	this->getValueArray();
	
	for(int i=0; i<this->middle; i++){
		if(*this->value_array_left[i] == 0){
			counter++;
		}
	}
	
	return counter;
}


unsigned char SensorArray::getRightSize(){
	unsigned char counter = 0;
	
	this->getValueArray();
	
	for(int i=0; i<this->middle; i++){
		if(*this->value_array_right[i] == 0){
			counter++;
		}
	}
	
	return counter;
}


