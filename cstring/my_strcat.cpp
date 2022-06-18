#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Appends a copy of the source string to the destination string. 
// The terminating null character in destination is overwritten by the first character of source, and a null-character is included at the end of the new string formed by the concatenation of both in destination.

// Parameters
// dsetination :
// source :

// Reuturn Value : char*

// source 문자열을 destination 문자열 뒤쪽에 이어 붙이는 함수

char *my_strcat(char *destination, const char *source) {
    
    char *tmp_destination = destination;
    char *tmp_source = (char*)source;
    while (*tmp_destination != '\0')
        tmp_destination++;
    while (*tmp_source != '\0') {
        *tmp_destination = *tmp_source;
        tmp_destination++;
        tmp_source++;
    }
    *tmp_destination = '\0';

    return destination;
}

// 특이 케이스
// 1. destination = NULL 인 경우
// 2. source = NULL 인 경우

int main() {
    // Case1
    char dest[] = "abcde";
    char dest2[] = "abcde";
    char source[] = "hello";
    char source2[] = "hello";
    cout << strcat(dest2, source) << endl;
    cout << my_strcat(dest, source2) << endl;

    // Case2
    char* dest3;
    char* dest4;
    char source3[] = "hello";
    char source4[] = "hello";
    cout << strcat(dest3, source3) << endl;
    cout << my_strcat(dest4, source4) << endl;
    --> segmentation fault 나오므로 주석 처리

    // Case3
    char dest3[] = "abcde";
    char dest4[] = "abcde";
    char* source3;
    char* source4;
    cout << strcat(dest3, source3) << endl;
    cout << my_strcat(dest4, source4) << endl;
}