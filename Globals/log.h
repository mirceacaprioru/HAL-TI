#ifndef _LOG_H_
#define _LOG_H_

#define Log printf

#include "typedefs.h"

void printf(char *format, ...);

void puts(uint8 * p_ucBuff);

void putc(uint8 ucChar); 

void Log_Init(void);

#endif /* _LOG_H_ */