#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Compare characters of two strings
// Compares up to num characters of the C string str1 to those of the C string str2.
// This function starts comparing the first character of each string. If they are equal to each other, it continues with the following pairs until the characters differ, until a terminating null-character is reached, or until num characters match in both strings, whichever happens first.

// Parameters
// str1 : C string to be compared
// str2 : C string to be compared
// num : Maximum number of characters to compare.

// Return Value : Returns an integral value indicating the relationship between the strings

// 매개변수로 들어온 두개의 문자열을 num 만큼 비교하여 같으면 0, 처음으로 다른 부분의 character 가 str1 이 더 작으면 음수, 더 크면 양수 반환

int my_strncmp(const char *str1, const char *str2, size_t num) {
    char *tmp1 = (char*)str1;
    char *tmp2 = (char*)str2;

    while (num-- && *tmp1 != '\0' && *tmp2 != '\0') {
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
// 4. num 이 str1, str2 길이 보다 큰 경우

int main() {
    // Case1
    const char *str1 = "hello";
    const char *str2 = "hello";

    cout << strncmp(str1, str2, 5) << " " << my_strncmp(str1, str2, 5) << endl;

    // Case2
    const char *str3 = "hello";
    const char *str4 = "hi";

    cout << strncmp(str3, str4, 2) << " " << my_strncmp(str3, str4, 2) << endl;

    // // Case3
    // const char *str5 = "hello";
    // const char *str6 = NULL;

    // cout << strncmp(str5, str6, 2) << " " << my_strncmp(str5, str6, 2) << endl;

    // // Case4
    // const char *str7 = NULL;
    // const char *str8 = "hello";

    // cout << strncmp(str7, str8, 2) << " " << my_strncmp(str7, str8, 2) << endl;

    // Case5
    const char *str9 = "hello";
    const char *str10 = "hi";

    cout << strncmp(str9, str10, 4) << " " << my_strncmp(str9, str10, 4) << endl;

    // Case6
    const char *str11 = "hello";
    const char *str12 = "he";

    cout << strncmp(str11, str12, 4) << " " << my_strncmp(str11, str12, 4) << endl;

    return 0;
}