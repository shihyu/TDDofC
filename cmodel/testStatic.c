/*
 * testStatic.c
 *
 *  Created on: 2016��7��3��
 *      Author: HaoWin
 */


#include "flash.h"

static void configFlashForWriting();
static void configFlashForReading();

void configFlashForWriting() {
    printf("successful config for writing flash\n");
}

void configFlashForReading() {
    printf("successful config for reading flash\n");
}

