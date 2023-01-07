# Basic synth

This project is a simple sinusoïdale wave at 220Hz(A Note) based on a wavetable




Project update working on the stm32cubeide v1.11.0
For STM32F407GT6-DISC with firmware V2J40M27


It's from https://m-w-bochniewicz.medium.com/first-steps-in-music-synthesis-and-stm32-610bb674139
and is github project https://github.com/ytneu/stm32f4-basic-synth

NB: when you follow the tutorial, and don't loose too much time debugging you'll need to:
- for I2S3, to activate MasterClock output
- in System Core\SYS, to activate Timebase Source SysTick

