#include <iostream>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Locate character in block of memory
// Searches within the first num bytes of the block of memory pointed by ptr for the first occurrence of value (interpreted as an unsigned char), and returns a pointer to it.
// Both value and each of the bytes checked on the the ptr array are interpreted as unsigned char for the comparison.

// Parameters
// ptr : Pointer to the block of memory where the search is performed.
// value : Value to be located. The value is passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.
// num : Number of bytes to be analyzed. size_t is an unsigned integral type.

void * my_memchr (void* ptr, int value, size_t num) {
    
}
