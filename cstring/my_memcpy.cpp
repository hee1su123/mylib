#include <iostream>
#include <cstring>

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

// memory + copy : 메모리의 값을 복사하는 기능
// destination 과 source 가 char* 이라는 가정하에 구현

void* my_memcpy(void* destination, const void* source, size_t num) {
    char* tmp_destination;
    char* tmp_source;

    if (destination == NULL && source == NULL)
        return NULL;
    
    tmp_destination = (char*)destination;
    tmp_source = (char*)source;

    for (size_t i = 0; i < num; i++) {
        tmp_destination[i] = tmp_source[i];
    }

    return destination;
}

// 특수 케이스
// 1. destination = NULL
// 2. source == NULL
// 3. num 값이 source 의 길이보다 긴 경우
// 4. num 값이 destination 의 길이보다 긴 경우

int main() {
    // Case1
    char destination[5];
    char destination2[5];
    char source[] = {'a','b','c','d','e'};
    size_t num = 5;
    memcpy(destination, source, num);
    for (size_t i = 0; i < num; i++)
        cout << destination[i] << " ";
    cout << endl;
    my_memcpy(destination2, source, num);
    for (size_t i = 0; i < num; i++)
        cout << destination2[i] << " ";
    cout << endl;

    // Case2
    char destination3[5];
    char destination4[5];
    char *source2;
    num = 5;
    memcpy(destination3, source2, num);
    for (size_t i = 0; i < num; i++)
        cout << destination3[i] << " ";
    cout << endl;
    my_memcpy(destination4, source2, num);
    for (size_t i = 0; i < num; i++)
        cout << destination4[i] << " ";
    cout << endl;

    // Case3
    char destination5[5];
    char destination6[5];
    char source3[] = {'a','b','c','d','e'};
    num = 10;
    memcpy(destination5, source3, num);
    for (size_t i = 0; i < num; i++)
        cout << destination5[i] << " ";
    cout << endl;
    my_memcpy(destination6, source3, num);
    for (size_t i = 0; i < num; i++)
        cout << destination6[i] << " ";
    cout << endl;


    return 0;
}