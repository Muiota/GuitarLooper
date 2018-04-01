// DisplayCore.h

#ifndef _DISPLAYCORE_h
#define _DISPLAYCORE_h

#include <ILI9341_t3.h>
#include <font_Arial.h>

class DisplayCoreClass
{
 protected:


 public:
	static void init();
	static void drawSequenceButton(uint8_t pin, bool value);
	static void drawEncoder(uint8_t encoder, uint32_t value, uint32_t max);
	static void drawEncoderTitle(uint8_t encoder, String title, bool isActive);
	static uint8_t countDigits(int num);
	static void drawMeterSide(float l, uint16_t x, uint16_t y);
	static void drawMeter(uint16_t channel, float l, float r);
	static void drawMeterTitle(uint8_t channel, bool isActive);
	static void printLn(const char* msg, bool isError);
	static void drawUsage(double usage, double memory);
	static void drawSongName(const String& song);
	static void drawSongStatus(bool wav_is_playing);
	static void drawMuteMaster(bool b);
};

extern DisplayCoreClass DisplayCore;

#endif

