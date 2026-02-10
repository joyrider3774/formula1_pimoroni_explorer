#include <cstdint>
#include <cstring>
#include "sound.h"
#include "commonvars.h"
#include "mixedtones.h"

#define PAUSE 0.235f
#define PAUSE2 0.120f

#define MAX_VOL 20

static int vol = 3;
void initSound(void)
{
    setupAudio(SAMPLERATE,PIEZEOPIN,PIEZEOENABLEPIN);
}

void incVolumeSound(void)
{
    vol++;
    if(vol > MAX_VOL)
        vol = MAX_VOL;
}

void decVolumeSound(void)
{
    vol--;
    if(vol < 0)
        vol = 0;
}

void playTickSound(void)
{
    playToneOnChannel(0,750, vol*255/MAX_VOL, 0.100f, 0);  
}

void playCrashSound(void)
{ 
    playToneOnChannel(1,850, vol*255/MAX_VOL, PAUSE*2,0);
    playToneOnChannel(2,850, vol*255/MAX_VOL, PAUSE, PAUSE*3);
    playToneOnChannel(3,850, vol*255/MAX_VOL, PAUSE, PAUSE*5);
    playToneOnChannel(4,850, vol*255/MAX_VOL, PAUSE*2, PAUSE*7);
}

void playGameOverSound(void)
{
    playToneOnChannel(1,1400, vol*255/MAX_VOL, PAUSE2,0);
    playToneOnChannel(2,1100, vol*255/MAX_VOL, PAUSE2, PAUSE2*2);
    playToneOnChannel(3,1100, vol*255/MAX_VOL, PAUSE2, PAUSE2*4);
    playToneOnChannel(4,1200, vol*255/MAX_VOL, PAUSE2, PAUSE2*5);
    playToneOnChannel(5,1200, vol*255/MAX_VOL, PAUSE2, PAUSE2*6);
    playToneOnChannel(6,1100, vol*255/MAX_VOL, PAUSE2, PAUSE2*7);
    playToneOnChannel(7,1100, vol*255/MAX_VOL, PAUSE2, PAUSE2*8);
    playToneOnChannel(8,1000, vol*255/MAX_VOL, PAUSE2, PAUSE2*11);
    playToneOnChannel(9,1000, vol*255/MAX_VOL, PAUSE2, PAUSE2*12);
    playToneOnChannel(10,1000, vol*255/MAX_VOL, PAUSE2, PAUSE2*13);
    playToneOnChannel(11,1000, vol*255/MAX_VOL, PAUSE2, PAUSE2*14);
    playToneOnChannel(12,1000, vol*255/MAX_VOL, PAUSE2, PAUSE2*15);
}
