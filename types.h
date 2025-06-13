/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef FLUENT_LIBC_TYPES_LIBRARY_H
#define FLUENT_LIBC_TYPES_LIBRARY_H

// C++ includes these types in stdlib++
// so we don't need to define them if we're compiling with C++
#if !defined(__cplusplus)

// Ignore if NULL is already defined (most likely implies that stddef.h or stdlib.h is included)
// Some MinGW versions also set _SIZE_T_DEFINED, so we check for that as well
#if !defined(NULL) && !defined(_STDDEF_H) \
    && !defined(_SIZE_T_DEFINED) && !defined(__uintptr_t_defined) \
    && !defined(__intptr_t_defined) && !defined(_SSIZE_T_DEFINED)
// Macros to avoid redefinition
#define _SIZE_T_DEFINED 1
#define __uintptr_t_defined 1
#define __intptr_t_defined 1
#define _SSIZE_T_DEFINED 1
// Define NULL
#define NULL (void *)0

// Define size_t and ssize_t
typedef unsigned long size_t;
typedef long ssize_t;

// uintptr/intptr
typedef unsigned long uintptr_t;
typedef long intptr_t;

// Integer types
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
#endif // NULL

#endif // __cplusplus
#endif //FLUENT_LIBC_TYPES_LIBRARY_H