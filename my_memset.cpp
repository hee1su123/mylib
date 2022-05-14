#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Fill block of memory
// Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).

// Parameters
// ptr : Pointer to the block of memory to fill.
// value : Value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
// num : Number of bytes to be set to the value. size_t is an unsigned integral type.

// Return Value : ptr

void* my_memset(void* ptr, int value, size_t num) {
    char* ret;
    char val = value;

	ret = (char*)ptr;
	for (int i = 0; i < num; i++) {
        ret[i] = val;
    }
	return ret;
}

int main() {
    char str[] = "almost every programmer should know memset!";
    char str2[] = "almost every programmer should know memset!";
    memset(str, '-', 6);
    my_memset(str2, '-', 6);
    puts(str);
    puts(str2);
    return 0;
}