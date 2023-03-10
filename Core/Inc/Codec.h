/*
 * Codec.h
 *
 *  Created on: Jan 6, 2023
 *      Author: fred
 */

#ifndef SRC_CODEC_H_
#define SRC_CODEC_H_

#include <stdio.h>

#define AUDIO_I2C_ADDR 0x94

class Codec {
public:
	Codec();
	virtual ~Codec();

	uint8_t init();
private:
	uint8_t write(uint8_t reg, uint8_t val);
};
#endif /* SRC_CODEC_H_ */
