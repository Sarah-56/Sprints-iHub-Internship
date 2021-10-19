/*
 * types.h
 * Created on: Aug 19, 2021
 * Author    : Sarah Mohamed
 */

#ifndef TYPES_H_
#define TYPES_H_

/* Boolean Data Type */
typedef unsigned char bool;

/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define HIGH        (1u)
#define LOW         (0u)

#define NULL_PTR    ((void*)0)

typedef unsigned char         uint8_t;
typedef signed char           sint8_t;
typedef unsigned short        uint16_tt;
typedef signed short          sint16_t;
typedef unsigned long         uint32_t;
typedef signed long           sint32_t;
typedef unsigned long long    uint64_t;
typedef signed long long      sint64_t;
typedef float                 float32_t;
typedef double                float64_t;


#endif /* TYPES_H_ */
