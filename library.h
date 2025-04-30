/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef TYPES_LIBRARY_H
#define TYPES_LIBRARY_H

// Define NULL
#ifndef NULL
#define NULL (void *)0
#endif

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


#endif //TYPES_LIBRARY_H