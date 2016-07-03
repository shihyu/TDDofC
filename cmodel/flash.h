#ifndef _FLASH_H
#define _FLASH_h

typedef char error;

error write(char *values , long int address);
error read(char *values , long int address);

#endif
