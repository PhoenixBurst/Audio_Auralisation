/*******  user\apps\Audio\Audio_Auralisation\inc\Signal_processing.h
*
* Summary:
*		FFT function 
*
* Dependences:
*		dsp.h
*		
*
* Inputs:
*		Audio input (fractional)
*		framesize (int)
*		FFT result array (Complex)
*		Pitch detection result(unsigned long)
*
* Outputs:
*		Detected Pitch of a signal (int)
*		FFT Results (fractcomplex)
*
* Functions:
*		void FFT(int framsize, fractional *audioIN, fractcomplex *compX)		
*		void inverseFFT(int framesize,fractional *frctAudioWorkSpace,fractcomplex *compX)
*		int pitchDetection(fractcomplex *compXFftResults) 
*
* Notes:
*		none
*
* Originator: 
*		S�ren Schreiber, Student Kingston University, DSP Course, soeren.schreiber@arcor.de
*
* Version:
*		1.0		19/04/2016
*
*/
#ifndef FFT_INIT
#define FFT_INIT				//define FFT_INIT

#include <dsp.h>				

#define FFT_FRAME_SIZE 256		// define frame size used in the FFT functions
#define SAMPLING_RATE 8000		// define sampling rate for the FFT functions
#define COEFFS_IN_DATA 0xFF00	// Coefficiants for the Twid factors

void FFT(int framesize, fractional *audioIN, fractcomplex *compX);
void inverseFFT(int framesize,fractional *frctAudioWorkSpace,fractcomplex *compX);
int pitchDetection(fractcomplex *compXFftResults);

#endif
