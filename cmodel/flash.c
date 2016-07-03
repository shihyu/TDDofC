#include "flash.h"

static void configFlashForWriting();
static void configFlashForReading();

error write(char *values , long int address) {
	configFlashForWriting();
    printf("successful wirte values\n");
    return 0;
}
error read(char *values , long int address) {
	configFlashForReading();
    printf("successful read values\n");
    return 0;

}

void configFlashForWriting() {
    printf("successful config for writing flash\n");
}

void configFlashForReading() {
    printf("successful config for reading flash\n");
}

