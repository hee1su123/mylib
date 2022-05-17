#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Locate character in block of memory
// Searches within the first num bytes of the block of memory pointed by ptr for the first occurrence of value (interpreted as an unsigned char), and returns a pointer to it.
// Both value and each of the bytes checked on the the ptr array are interpreted as unsigned char for the comparison.

// Parameters
// ptr : Pointer to the block of memory where the search is performed.
// value : Value to be located. The value is passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.
// num : Number of bytes to be analyzed. size_t is an unsigned integral type.

// value 에 해당하는 값이 *ptr 에서 몇번째에 처음 나오는지 확인 후 주소를 반환

void *my_memchr(void *ptr, int value, size_t num)
{
    char *ret;
    ret = (char*)ptr;
    for (int i = 0; i < num; i++) {
        if (*ret == (char)value) {
            return ret;
        }
        else
            ret++;
    }
    return NULL;
}

int main()
{
    char *pch;
    char *pch2;
    char str[] = "Example string";
    pch = (char *)memchr(str, 'p', strlen(str));
    pch2 = (char *)my_memchr(str, 'p', strlen(str));
    printf("'p' found at position %ld.\n", pch - str + 1);
    printf("'p' found at position %ld.\n", pch2 - str + 1);

    return 0;
}