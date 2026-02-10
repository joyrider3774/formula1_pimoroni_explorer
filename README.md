# Formula 1 Game & Watch Pimoroni's Explorer Version
![DownloadCountTotal](https://img.shields.io/github/downloads/joyrider3774/formula1_pimoroni_explorer/total?label=total%20downloads&style=plastic) ![DownloadCountLatest](https://img.shields.io/github/downloads/joyrider3774/formula1_pimoroni_explorer/latest/total?style=plastic) ![LatestVersion](https://img.shields.io/github/v/tag/joyrider3774/formula1_pimoroni_explorer?label=Latest%20version&style=plastic) ![License](https://img.shields.io/github/license/joyrider3774/formula1_pimoroni_explorer?style=plastic)

Formula 1 Game & Watch is a small, fictive formula 1 game & watch style lcd game with high score keeping. The Game was initially created over a decade ago for a small retrogame competition, after which it got ported to the gp2x. This version is based on the gp2x version but with added high scoring.

## Playing the Game
The aim of the game, is to avoid hitting other traffic coming down the screen, you do this by moving your car on the bottom left or right. 

## Controls 
- C: Move Player left
- Z: Move Player right
- C or Z: Start a new game at the boot or gameover screen
- X: Increase Volume
- Y: Decrease Volume

## Credits
- mixedtones.cpp: piezo tones library mainly made with the help of [claude.ai](https://claude.ai)
- framebuffer.cpp: rgb565 framebuffer library made with the help of [claude.ai](https://claude.ai)
- glcdfont.h: Adafruit_GFX font mainly used internally to display debug information on an internal buffer
- pimoroni_explorer.h board setup comes from pimoroni and arduino-pico repo related to the explorer board
- Graphcis are made by me willems davy aka joyrider3774 using gimp

## Notes 
- Unlike the tufty2350 version, this version has sound implemented
- this repo uses a fork of pimoroni-pico where a change has been made to not build the examples but also a change to the old st7789 driver to make it work with overlocking. Unlike the tufty2350, there is however no overclocking defined for the pimoroni explorer, so you could still use the original pimoroni-pico repo as well