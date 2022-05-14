#include <iostream>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Move block of memory
// Copies the values of num bytes from the location pointed by source to the memory block pointed by destination. Copying takes place as if an intermediate buffer were used, allowing the destination and source to overlap.
// The underlying type of the objects pointed by both the source and destination pointers are irrelevant for this function; The result is a binary copy of the data.
// The function does not check for any terminating null character in source - it always copies exactly num bytes.
// To avoid overflows, the size of the arrays pointed by both the destination and source parameters, shall be at least num bytes.

// Parameters
// destination : Pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
// source : Pointer to the source of data to be copied, type-casted to a pointer of type const void*.
// num : Number of bytes to copy. size_t is an unsigned integral type.

void* my_memmove(void* destination, const void* source, size_t num) {
    
}