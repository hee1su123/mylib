#include <iostream>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Compare two blocks of memory
// Compares the first num bytes of the block of memory pointed by ptr1 to the first num bytes pointed by ptr2, returning zero if they all match or a value different from zero representing which is greater if they do not.
// Notice that, unlike strcmp, the function does not stop comparing after finding a null character.

// Parameters
// ptr1 : Pointer to block of memory.
// ptr2 : Pointer to block of memory.
// num : Number of bytes to compare.

int my_memcmp (const void* ptr1, const void* ptr2, size_t num) {
    
}