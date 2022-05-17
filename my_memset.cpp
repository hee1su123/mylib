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

// *ptr 에서 num개의 바이트를 value 값으로 바꾼다.

void *my_memset(void *ptr, int value, size_t num)
{
    char *ret;
    char val = value;

    ret = (char *)ptr;
    for (int i = 0; i < num; i++)
    {
        ret[i] = val;
    }
    return ret;
}

// 특이 케이스
// 1. num 의 크기가 ptr 의 길이보다 긴 경우
// 2. num = 0 인 경우
// 3. C언어의 경우 문자열 마지막에 들어가야 할 '/0' 고려

int main()
{
    // Case1
    char str[] = "almost every programmer should know memset!";
    char str2[] = "almost every programmer should know memset!";
    memset(str, '-', 6);
    my_memset(str2, '-', 6);
    cout << str << endl;
    cout << str2 << endl;

    // Case2
    char str3[] = "abc";
    char str4[] = "abc";
    memset(str3, '-', 3);
    my_memset(str3, '-', 3);
    cout << str3 << endl;
    cout << str4 << endl;

    // Case3
    char str5[] = "abc";
    char str6[] = "abc";
    memset(str5, '-', 4);
    my_memset(str6, '-', 4);
    cout << str5 << endl;
    cout << str6 << endl;

    // Case4
    char str7[] = "abc";
    char str8[] = "abc";
    memset(str7, '-', 0);
    my_memset(str8, '-', 0);
    cout << str7 << endl;
    cout << str8 << endl;

    return 0;
}