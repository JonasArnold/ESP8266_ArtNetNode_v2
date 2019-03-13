// 
// H801 is an ESP8266 powered RGB LED Driver component
// 

#include "H801.h"


H801::H801()
{
	// set analog Write Range
	analogWriteRange(255);

	// Write 0 to all pins (ensure no values are set before setting the port to output)
	analogWrite(RGBW_RED_PIN, 0);
	analogWrite(RGBW_GREEN_PIN, 0);
	analogWrite(RGBW_BLUE_PIN, 0);
	analogWrite(RGBW_WHITE_PIN, 0);
	analogWrite(RGBW_WHITE2_PIN, 0);

	// setting all ports to output mode
	pinMode(RGBW_RED_PIN, OUTPUT);
	pinMode(RGBW_GREEN_PIN, OUTPUT);
	pinMode(RGBW_BLUE_PIN, OUTPUT);
	pinMode(RGBW_WHITE_PIN, OUTPUT);
	pinMode(RGBW_WHITE2_PIN, OUTPUT);
}

H801::~H801()
{
	//NOP
}

void H801::setR(uint8_t brightness)
{
	analogWrite(RGBW_RED_PIN, brightness);
}

void H801::setG(uint8_t brightness)
{
	analogWrite(RGBW_GREEN_PIN, brightness);
}

void H801::setB(uint8_t brightness)
{
	analogWrite(RGBW_BLUE_PIN, brightness);
}

void H801::setW1(uint8_t brightness)
{
	analogWrite(RGBW_WHITE_PIN, brightness);
}

void H801::setW2(uint8_t brightness)
{
	analogWrite(RGBW_WHITE2_PIN, brightness);
}

void H801::setRGB(uint8_t valueR, uint8_t valueG, uint8_t valueB)
{
	setR(valueR);
	setG(valueG);
	setB(valueB);
}

void H801::setRGBW(uint8_t valueR, uint8_t valueG, uint8_t valueB, uint8_t valueW1, uint8_t valueW2)
{
	setR(valueR);
	setG(valueG);
	setB(valueB);
	setW1(valueW1);
	setW2(valueW2);
}
