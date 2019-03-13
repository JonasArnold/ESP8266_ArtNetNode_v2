// H801.h

#ifndef _H801_h
#define _H801_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


// -----------------------------------------------------------------------------
// HUACANXING H801 DEFINITIONS
// -----------------------------------------------------------------------------

#define MANUFACTURER        "HUACANXING"
#define DEVICE              "H801"
#define LED1_PIN            5
#define LED1_PIN_INVERSE    1
#define RELAY_PROVIDER      RELAY_PROVIDER_LIGHT
#define LIGHT_PROVIDER      LIGHT_PROVIDER_RGB2W

#undef RGBW_INVERSE_LOGIC
#undef RGBW_RED_PIN
#undef RGBW_GREEN_PIN
#undef RGBW_BLUE_PIN
#undef RGBW_WHITE_PIN

#define RGBW_INVERSE_LOGIC      1
#define RGBW_RED_PIN            15
#define RGBW_GREEN_PIN          13
#define RGBW_BLUE_PIN           12
#define RGBW_WHITE_PIN          14
#define RGBW_WHITE2_PIN         4


// -----------------------------------------------------------------------------
// CLASS DEFINITION
// -----------------------------------------------------------------------------


class H801 {
public:
	H801();
	~H801();

	void setR(uint8_t brightness);
	void setG(uint8_t brightness);
	void setB(uint8_t brightness);
	void setW1(uint8_t brightness);
	void setW2(uint8_t brightness);

	void setRGB(uint8_t valueR, uint8_t valueG, uint8_t valueB);
	void setRGBW(uint8_t valueR, uint8_t valueG, uint8_t valueB, uint8_t valueW1, uint8_t valueW2);

private:
	
};



#endif

