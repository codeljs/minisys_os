#ifndef INC_TYPES_H
#define INC_TYPES_H

#ifndef NULL
#define NULL 0
#endif

#ifndef TRUE
#define TRUE  1
#endif

#ifndef FALSE
#define FALSE 0
#endif

typedef enum {
    false = 0,
    true = 1
} bool;

typedef unsigned long long uint64_t;
typedef          long long int64_t;
typedef unsigned long      uint32_t;
typedef          long      int32_t;
typedef unsigned short     uint16_t;
typedef          short     int16_t;
typedef unsigned char      uint8_t;
typedef          char      int8_t;
// int is defined as long as 32 bits
typedef unsigned int       size_t;
typedef          int       ssize_t;