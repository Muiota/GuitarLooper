// DisplayCore.h

#ifndef _DISPLAYCORE_h
#define _DISPLAYCORE_h

#include <ILI9341_t3.h>
#include <font_Arial.h>

class DisplayCoreClass
{
 protected:


 public:
	void init();
	void drawSequenceButton(uint8_t pin, bool value);
	void drawEncoder(uint8_t encoder, int value, String title);
	void drawMeterSide(float l, uint16_t x, uint16_t y);
	void drawMeter(uint8_t channel, float l, float r);
	void printLn(const char* msg, bool isError);
	void drawUsage(double usage, double memory);
	void drawSongName(const String& song);
	void drawSongStatus(bool wav_is_playing);
};

extern DisplayCoreClass DisplayCore;

#endif

