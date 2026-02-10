#ifndef COMMONVARS_H
#define COMMONVARS_H

#include <cstdint>
#include "framebuffer.h"

#define PROGMEM


#define gsGame 0
#define gsIntro 1
#define gsGameIntro 2
#define gsGameOver 3

#define gsInitDiff 50

#define gsInitGame (gsInitDiff + gsGame)
#define gsInitIntro (gsInitDiff + gsIntro)
#define gsInitGameIntro (gsInitDiff + gsGameIntro)
#define gsInitGameOver (gsInitDiff + gsGameOver)

// window size
#define WINDOW_WIDTH 320
#define WINDOW_HEIGHT 240
#define SAMPLERATE 11025 //higher sounds a bit better but affects performance
#define PIEZEOPIN 12
#define PIEZEOENABLEPIN 13
#define COLOR_SWAP(c) ((uint16_t)((((c) >> 8) | (c) << 8)))
#define COLOR(r,g,b) COLOR_SWAP(((r & 0xF8) << 8) | ((g & 0xFC) << 3) | (b >> 3))

#define BUTTON_A_MASK (1<<0)
#define BUTTON_B_MASK (1<<1)
#define BUTTON_C_MASK (1<<2)
#define BUTTON_X_MASK (1<<3)
#define BUTTON_Y_MASK (1<<4)
#define BUTTON_Z_MASK (1<<5)

#define FPS 30

extern char* verifyCode;
extern uint8_t gameState, debugMode;
extern bool EnemyStates[3][3];
extern bool PlayerStates[3];
extern uint8_t HitPosition, LivesLost;
extern uint32_t Teller, FlashesDelay, Flashes, Delay;
extern bool CanMove, CrashSoundPlayed;
extern uint32_t frames;
extern uint8_t alternateSource;
extern uint32_t Score;
extern uint8_t buttons,prevbuttons;
extern Framebuffer fb;
#endif