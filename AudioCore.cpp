// 
// 
// 

#include "AudioCore.h"


// GUItool: begin automatically generated code
AudioInputI2S            audioInput;     //xy=577.5103530883789,942.9999694824219
AudioPlaySdWav           playSdWavA;     //xy=616.5103988647461,730.0000114440918
AudioPlaySerialflashRaw  playFlashRaw1;  //xy=656.5103759765625,619.9999694824219
AudioSynthSimpleDrum     drum2;          //xy=672.5103759765625,417.9999694824219
AudioFilterBiquad        biquadfreeverbs;        //xy=684.5103492736816,818.0103569030762
AudioSynthSimpleDrum     drum3;          //xy=697.5103759765625,483.9999694824219
AudioSynthSimpleDrum     drum1;          //xy=704.5103759765625,370.9999694824219
AudioSynthSimpleDrum     drum4;          //xy=737.5103759765625,547.9999694824219
AudioFilterBiquad        biquadInputR;   //xy=745.5103530883789,963.9999694824219
AudioFilterBiquad        biquadInputL;   //xy=747.5103530883789,920.9999694824219
AudioFilterBiquad        biquadWavAR;    //xy=786.5103988647461,759.0000114440918
AudioFilterBiquad        biquadWavAL;    //xy=787.5103988647461,724.0000114440918
AudioMixer4              mixer2;         //xy=823.5103530883789,608.0000019073486
AudioEffectFreeverbStereo fxfreeverbs;     //xy=856.5104064941406,818.0104274749756
AudioMixer4              mixer1;         //xy=903.5103759765625,453.9999694824219
AudioAnalyzePeak         peakWavL;       //xy=986.5104217529297,654.9999923706055
AudioAnalyzePeak         peakWavR;       //xy=988.5103988647461,693.0000114440918
AudioAnalyzePeak         peakfreeverbsR;          //xy=1075.510341644287,920.0104260444641
AudioAnalyzePeak         peakAudioInputR; //xy=1076.5103759765625,1016.9999694824219
AudioAnalyzePeak         peakAudioInputL; //xy=1077.5103759765625,975.9999694824219
AudioAnalyzePeak         peakfreeverbsL;          //xy=1087.5103454589844,875.010365486145
AudioAnalyzePeak         peakAudio01;    //xy=1089.5103759765625,391.9999694824219
AudioMixer4              mixerGroupL0;   //xy=1260.5103759765625,494.9999694824219
AudioMixer4              mixerGroupL1;   //xy=1260.5103759765625,561.9999694824219
AudioMixer4              mixerGroupL2;   //xy=1260.5103759765625,628.9999694824219
AudioMixer4              mixerGroupL3;   //xy=1260.5103759765625,697.9999694824219
AudioMixer4              mixerGroupR0;   //xy=1260.5103759765625,768.9999694824219
AudioMixer4              mixerGroupR1;   //xy=1260.5103759765625,836.9999694824219
AudioMixer4              mixerGroupR2;   //xy=1260.5103759765625,905.9999694824219
AudioMixer4              mixerGroupR3;   //xy=1260.5103759765625,972.9999694824219
AudioMixer4              masterMixerL;   //xy=1497.5103759765625,702.9999694824219
AudioMixer4              masterMixerR;   //xy=1497.5103759765625,773.9999694824219
AudioAnalyzePeak         peakAudioOutputR; //xy=1674.5103759765625,951.9999694824219
AudioAnalyzePeak         peakAudioOutputL; //xy=1675.5103759765625,909.9999694824219
AudioOutputI2S           audioOutput;    //xy=1684.5103759765625,735.9999694824219
AudioConnection          patchCord1(audioInput, 0, biquadInputL, 0);
AudioConnection          patchCord2(audioInput, 1, biquadInputR, 0);
AudioConnection          patchCord3(playSdWavA, 0, biquadWavAL, 0);
AudioConnection          patchCord4(playSdWavA, 1, biquadWavAR, 0);
AudioConnection          patchCord5(playFlashRaw1, 0, mixer2, 0);
AudioConnection          patchCord6(drum2, 0, mixer1, 1);
AudioConnection          patchCord7(biquadfreeverbs, fxfreeverbs);
AudioConnection          patchCord8(drum3, 0, mixer1, 2);
AudioConnection          patchCord9(drum1, 0, mixer1, 0);
AudioConnection          patchCord10(drum4, 0, mixer1, 3);
AudioConnection          patchCord11(biquadInputR, peakAudioInputR);
AudioConnection          patchCord12(biquadInputR, 0, mixerGroupL0, 1);
AudioConnection          patchCord13(biquadInputR, 0, mixerGroupR0, 1);
AudioConnection          patchCord14(biquadInputR, biquadfreeverbs);
AudioConnection          patchCord15(biquadInputL, peakAudioInputL);
AudioConnection          patchCord16(biquadInputL, 0, mixerGroupL0, 0);
AudioConnection          patchCord17(biquadInputL, 0, mixerGroupR0, 0);
AudioConnection          patchCord18(biquadWavAR, 0, mixerGroupR0, 3);
AudioConnection          patchCord19(biquadWavAR, peakWavR);
AudioConnection          patchCord20(biquadWavAL, 0, mixerGroupL0, 3);
AudioConnection          patchCord21(biquadWavAL, peakWavL);
AudioConnection          patchCord22(fxfreeverbs, 0, mixerGroupL1, 0);
AudioConnection          patchCord23(fxfreeverbs, 0, peakfreeverbsL, 0);
AudioConnection          patchCord24(fxfreeverbs, 1, mixerGroupR1, 0);
AudioConnection          patchCord25(fxfreeverbs, 1, peakfreeverbsR, 0);
AudioConnection          patchCord26(mixer1, 0, mixerGroupL0, 2);
AudioConnection          patchCord27(mixer1, 0, mixerGroupR0, 2);
AudioConnection          patchCord28(mixer1, peakAudio01);
AudioConnection          patchCord29(mixerGroupL0, 0, masterMixerL, 0);
AudioConnection          patchCord30(mixerGroupL1, 0, masterMixerL, 1);
AudioConnection          patchCord31(mixerGroupL2, 0, masterMixerL, 2);
AudioConnection          patchCord32(mixerGroupL3, 0, masterMixerL, 3);
AudioConnection          patchCord33(mixerGroupR0, 0, masterMixerR, 0);
AudioConnection          patchCord34(mixerGroupR1, 0, masterMixerR, 1);
AudioConnection          patchCord35(mixerGroupR2, 0, masterMixerR, 2);
AudioConnection          patchCord36(mixerGroupR3, 0, masterMixerR, 3);
AudioConnection          patchCord37(masterMixerL, 0, audioOutput, 0);
AudioConnection          patchCord38(masterMixerL, peakAudioOutputL);
AudioConnection          patchCord39(masterMixerR, 0, audioOutput, 1);
AudioConnection          patchCord40(masterMixerR, peakAudioOutputR);
AudioControlSGTL5000     audioShield;    //xy=1680.5103759765625,782.9999694824219
										 // GUItool: end automatically generated code




AudioCoreClass::AudioCoreClass()
{


}

void AudioCoreClass::init()
{
	
	// audio library init
	AudioMemory(60);

	//next = millis() + 1000;

//	AudioNoInterrupts(); //swith off library


	drum1.frequency(60);
	drum1.length(1500);
	drum1.secondMix(0.0);
	drum1.pitchMod(0.55);

	drum2.frequency(60);
	drum2.length(300);
	drum2.secondMix(0.0);
	drum2.pitchMod(1.0);

	drum3.frequency(550);
	drum3.length(400);
	drum3.secondMix(1.0);
	drum3.pitchMod(0.5);

	drum4.frequency(1200);
	drum4.length(150);
	drum4.secondMix(0.0);
	drum4.pitchMod(0.0);

	//mixer3.gain(2, 1.0f);
	//mixer3.gain(3, 1.0f);

	masterMixerL.gain(2, 0);
	masterMixerL.gain(3, 0);
	
	mixerGroupL1.gain(1, 0);
	mixerGroupL1.gain(2, 0);
	mixerGroupL1.gain(3, 0);

	mixerGroupL2.gain(0, 0);
	mixerGroupL2.gain(1, 0);
	mixerGroupL2.gain(2, 0);
	mixerGroupL2.gain(3, 0);

	mixerGroupL3.gain(0, 0);
	mixerGroupL3.gain(1, 0);
	mixerGroupL3.gain(2, 0);
	mixerGroupL3.gain(3, 0);
	
	masterMixerR.gain(2, 0);
	masterMixerR.gain(3, 0);

	mixerGroupR1.gain(1, 0);
	mixerGroupR1.gain(2, 0);
	mixerGroupR1.gain(3, 0);

	mixerGroupR2.gain(0, 0);
	mixerGroupR2.gain(1, 0);
	mixerGroupR2.gain(2, 0);
	mixerGroupR2.gain(3, 0);

	mixerGroupR3.gain(0, 0);
	mixerGroupR3.gain(1, 0);
	mixerGroupR3.gain(2, 0);
	mixerGroupR3.gain(3, 0);


	audioShield.enable();
	audioShield.inputSelect(AUDIO_INPUT_LINEIN);	
	

	biquadInputL.setHighpass(0, 100, 0.707);
	biquadInputR.setHighpass(0, 200, 0.707);

	biquadfreeverbs.setHighpass(0, 300, 0.707);
	fxfreeverbs.damping(1);
	fxfreeverbs.roomsize(0.1);
	fxfreeverbs.update();
	
//	AudioInterrupts(); //swith on library
}


void AudioCoreClass::setWavBiquad(float frequency, float q) {

	biquadWavAL.setLowpass(0, frequency, q);
	biquadWavAR.setLowpass(0, frequency, q);
}

void AudioCoreClass::setLeftInputBiquad(float frequency, float q) {

	biquadInputL.setHighpass(0, frequency, q);	
}

void AudioCoreClass::setRightInputBiquad(float frequency, float q) {

	biquadInputR.setHighpass(0, frequency, q);
}

void AudioCoreClass::setReverbBiquad(float frequency, float q) {

	biquadfreeverbs.setHighpass(0, frequency, q);
}


void AudioCoreClass::drum1On()
{
	drum1.noteOn();
}

void AudioCoreClass::drum2On()
{
	drum2.noteOn();
}

void AudioCoreClass::drum3On()
{
	drum3.noteOn();
}

void AudioCoreClass::drum4On()
{
	drum4.noteOn();
}

 void AudioCoreClass::setMasterVolume(float x)
{
	audioShield.volume(x);
}


 void AudioCoreClass::enhanceBass(bool enable)
 {
	 if (enable)
	 {
		 audioShield.audioPostProcessorEnable();
		 audioShield.enhanceBassEnable();
		 audioShield.enhanceBass(0.5, 0.4, 0, 2);
	 }
	 else
	 {
		 audioShield.enhanceBassDisable();
	 }
 }

 void AudioCoreClass::setWavVolume(float x)
 {	 
	 mixerGroupL0.gain(3, x);
	 mixerGroupR0.gain(3, x);
 }

 void AudioCoreClass::setLeftInputVolume(float x)
 {
	 mixerGroupL0.gain(0, x);
	 mixerGroupR0.gain(0, x);
 }

 void AudioCoreClass::setRightInputVolume(float x)
 {
	 mixerGroupL0.gain(1, x);
	 mixerGroupR0.gain(1, x);
 }

 void AudioCoreClass::setReverbVolume(float x)
 {
	 mixerGroupL1.gain(0, x);
	 mixerGroupR1.gain(0, x);
 }
 

float AudioCoreClass::getPeakL() //to Array
{
	if (peakAudioOutputL.available())
	{
		return peakAudioOutputL.read();
	}
	return 0;
}

float AudioCoreClass::getPeakR()
{
	if (peakAudioOutputR.available())
	{
		return peakAudioOutputR.read();
	}
	return 0;
}

float AudioCoreClass::getWavPeakL() //to Array
{
	if (peakWavL.available())
	{
		return peakWavL.read();
	}
	return 0;
}

float AudioCoreClass::getWavPeakR()
{
	if (peakWavR.available())
	{
		return peakWavR.read();
	}
	return 0;
}

float AudioCoreClass::getReverbFxPeakL() //to Array
{
	if (peakfreeverbsL.available())
	{
		return peakfreeverbsL.read();
	}
	return 0;
}

float AudioCoreClass::getReverbFxPeakR()
{
	if (peakfreeverbsR.available())
	{
		return peakfreeverbsR.read();
	}
	return 0;
}

float AudioCoreClass::getPeakAudioInputL() //to Array
{
	if (peakAudioInputL.available())
	{
		return peakAudioInputL.read();
	}
	return 0;
}

float AudioCoreClass::getPeakAudioInputR()
{
	if (peakAudioInputR.available())
	{
		return peakAudioInputR.read();
	}
	return 0;
}


void AudioCoreClass::playWav(const char * song)
{	
	playSdWavA.play(song);
}

void AudioCoreClass::stopWav()
{
	playSdWavA.stop();
}

bool AudioCoreClass::wavIsPlaying()
{
	return playSdWavA.isPlaying();
}

AudioCoreClass AudioCore;

