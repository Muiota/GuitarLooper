#ifndef _DRUMPATTERN_H
#define _DRUMPATTERN_H

#include "AudioCore.h"
#include "Engine.h"


class DrumChannelClass
{
private:
	static uint8_t currentLine;
	static void seqPressedHandler(bool pressed, int button);
public:
	static void onShow();
	static void handle();
	static void midiUpdate();
	static void refreshSeqLeds();
	static void setCurrentLine(int encoder, int value);
};

extern DrumChannelClass DrumChannel;

#endif
