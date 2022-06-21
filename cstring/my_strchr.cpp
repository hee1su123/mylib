#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Locate first occurrence of character in string
// Returns a pointer to the first occurrence of character in the C string str.
// The terminating null-character is considered part of the C string. Therefore, it can also be located in order to retrieve a pointer to the end of a string.

// Parameters
// str : C string
// character : Character to be located. It is passed as its int promotion, but it is internally converted back to char for the comparison.

// Return Value : pointer to the first occurence of  character in str

// 문자열 내 일치하는 문자의 위치를 확인 후 반환

char *my_strchr(const char *str, int character) {
    char target;
    char *tmp;

    tmp = (char*)str;
    target = (char)character;

    while (*tmp != '\0') {
        if (*tmp == target)
            return tmp;
        tmp++;
    }
    
    if (target == '\0')
        return tmp;
    
    return NULL; 
}

// 특이 케이스
// 1. character == '\0' 인 경우
// 2. str == NULL 인 경우

int main() {
    // Case1
    const char *str = "HELLO";
    int c =76;
    cout << strchr(str, c) << " " << my_strchr(str, c) << endl;

    // Case2
    c = 0;
    cout << strchr(str, c) << " " << my_strchr(str, c) << endl;

    // Case3
    const char *str2 = NULL;
    c = 2;
    cout << strchr(str2, c) << " " << my_strchr(str2, c) << endl;

    return 0;
}