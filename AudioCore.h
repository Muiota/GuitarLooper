// AudioCore.h

#ifndef _AUDIOCORE_h
#define _AUDIOCORE_h

#include <Audio.h>
#include <i2c_t3.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

//#include <OpenAudio_ArduinoLibrary.h> 
//#include <synth_simple_drum.h>



class AudioCoreClass
{
 protected:

 public:	
	AudioCoreClass();
	void init();
	static void setWavBiquad(float frequency, float q);
	static void setLeftInputBiquad(float frequency, float q);
	static void setRightInputBiquad(float frequency, float q);
	static void setReverbBiquad(float frequency, float q);
	static void drum1On();
	static void drum2On();
	static void drum3On();
	static void drum4On();
	static void setMasterVolume(float x);
	void enhanceBass(bool enable);
	static void setWavVolume(float x);
	static void setLeftInputVolume(float x);
	static void setRightInputVolume(float x);
	static void setReverbVolume(float x);	
	static float getPeakL();
	static float getPeakR();
	static float getWavPeakL();
	static float getWavPeakR();
	static float getReverbFxPeakL();
	static float getReverbFxPeakR();
	static float getPeakAudioInputL();
	static float getPeakAudioInputR();
	static bool wavIsPlaying();

	static void playWav(const char * song);
	static void stopWav();
};
extern AudioCoreClass AudioCore;

#endif

