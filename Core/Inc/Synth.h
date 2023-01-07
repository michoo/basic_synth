/*
 * Synth.h
 *
 *  Created on: Jan 6, 2023
 *      Author: fred
 */

#ifndef SRC_SYNTH_H_
#define SRC_SYNTH_H_

#include <stdio.h>

#define WTB_LEN 1024
#define BUFF_LEN 8192
#define BUFF_LEN_DIV2 BUFF_LEN / 2
#define SAMPLERATE 48000

class Synth {
public:
	Synth();
	virtual ~Synth();

	float osc_wtb_pointer = 0;
	float osc;
	float signal = 0;
	float pitch = 0;

	float calculate_oscilator();
};

#endif /* SRC_SYNTH_H_ */
