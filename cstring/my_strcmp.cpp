#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Compare two strings
// Compares the C string str1 to the C string str2.
// This function starts comparing the first character of each string. If they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null-character is reached.
// This function performs a binary comparison of the characters. For a function that takes into account locale-specific rules, see strcoll.

// Parameters
// str1 : C string to be compared
// str2 : C string to be compared

// Return Value : Returns an integral value indicating the relationship between the strings

// 매개변수로 들어온 두개의 문자열을 비교하여 같으면 0, 처음으로 다른 부분의 character 가 str1 이 더 작으면 음수, 더 크면 양수 반환

int my_strcmp(const char *str1, const char *str2) {
    char *tmp1 = (char*)str1;
    char *tmp2 = (char*)str2;

    while (*tmp1 != '\0' && *tmp2 != '\0') {
        if (*tmp1 != *tmp2)
            break;
        tmp1++;
        tmp2++;
    }
    return *tmp1 - *tmp2;
}

// 특이 케이스
// 1. str1 == NULL
// 2. str2 == NULL
// 3. 둘다 NULL

int main() {
    // Case1
    const char *str1 = "hello";
    const char *str2 = "hello";

    cout << strcmp(str1, str2) << " " << my_strcmp(str1, str2) << endl;

    // Case2
    const char *str3 = "hello";
    const char *str4 = "hi";

    cout << strcmp(str3, str4) << " " << my_strcmp(str3, str4) << endl;

    // Case3
    const char *str5 = "hello";
    const char *str6 = NULL;

    cout << strcmp(str5, str6) << " " << my_strcmp(str5, str6) << endl;

    // Case4
    const char *str7 = NULL;
    const char *str8 = "hello";

    cout << strcmp(str7, str8) << " " << my_strcmp(str7, str8) << endl;

    return 0;
}