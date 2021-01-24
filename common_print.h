#ifndef COMMON_PRINT_H
#define COMMON_PRINT_H

#include <stdio.h>

#define PERR(param, ...) printf("[%s %d][ERROR]"param, __func__, __LINE__, ##__VA_ARGS__)
#define PWARN(param, ...) printf("[%s %d][WARNING]"param, __func__, __LINE__, ##__VA_ARGS__)
#define PINFO(param, ...) printf("[%s %d][INFO]"param, __func__, __LINE__, ##__VA_ARGS__)
#define PDEBUG(param, ...) printf("[%s %d][DEBUG]"param, __func__, __LINE__, ##__VA_ARGS__)

#endif
