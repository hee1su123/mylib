#include <iostream>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Copy block of memory
// Copies the values of num bytes from the location pointed to by source directly to the memory block pointed to by destination.
// The underlying type of the objects pointed to by both the source and destination pointers are irrelevant for this function; The result is a binary copy of the data.
// The function does not check for any terminating null character in source - it always copies exactly num bytes.
// To avoid overflows, the size of the arrays pointed to by both the destination and source parameters, shall be at least num bytes, and should not overlap (for overlapping memory blocks, memmove is a safer approach).

// Parameters
// destination : Pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
// source : Pointer to the source of data to be copied, type-casted to a pointer of type const void*.
// num : Number of bytes to copy. size_t is an unsigned integral type.

void* my_memcpy(void* destination, const void* source, size_t num) {
    
}