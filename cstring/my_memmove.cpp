#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Move block of memory
// Copies the values of num bytes from the location pointed by source to the memory block pointed by destination. Copying takes place as if an intermediate buffer were used, allowing the destination and source to overlap.
// The underlying type of the objects pointed by both the source and destination pointers are irrelevant for this function; The result is a binary copy of the data.
// The function does not check for any terminating null character in source - it always copies exactly num bytes.
// To avoid overflows, the size of the arrays pointed by both the destination and source parameters, shall be at least num bytes.

// Parameters
// destination : Pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
// source : Pointer to the source of data to be copied, type-casted to a pointer of type const void*.
// num : Number of bytes to copy. size_t is an unsigned integral type.

// memory + move : source 가 가리키는 메모리로 부터 num 바이트 만큼 destination 이 가리키는 메모리에 옮김.
// destination 과 source 가 char* 이라는 가정하에 구현...

void* my_memmove(void* destination, const void* source, size_t num) {
    char *tmp_destination;
	char *tmp_source;

	if (destination == source || num == 0)
		return (destination);

	if (destination < source) {
		tmp_destination = (char *)destination;
		tmp_source = (char *)source;
		while (num != 0) {
			*tmp_destination = *tmp_source;
            num--;
            tmp_destination++;
            tmp_source++;
        }
	}
	else {
		tmp_destination = (char *)destination + (num - 1);
		tmp_source = (char *)source + (num - 1);
		while (num--)
			*tmp_destination-- = *tmp_source--;
	}
	return (destination);
}

// 특이 케이스
// 1. source 가 가리키는 메모리 위치가 destination 과 같을 경우
// 2. num = 0 인 경우
// 3. num 의 크기가 source 길이보다 긴 경우

int main() {
    // Case1
    char source[] = {'a', 'b', 'c', 'd', 'e'};
    char destination[] = {'0', '0', '0', '0', '0'};
    char destination2[] = {'0', '0', '0', '0', '0'};
    int num = 3;
    memmove(destination, source, num);
    for (int i = 0; i < 5; i++)
        cout << destination[i] << " ";
    cout << endl;
    my_memmove(destination2, source, num);
    for (int i = 0; i < 5; i++)
        cout << destination2[i] << " ";
    cout << endl;

    // Case2
    memmove(source, source, num);
    for (int i = 0; i < 5; i++)
        cout << source[i] << " ";
    cout << endl;
    my_memmove(source, source, num);
    for (int i = 0; i < 5; i++)
        cout << source[i] << " ";
    cout << endl;

    // Case3
    char source2[] = {'1', '2', '3', '4', '5'};
    char destination3[] = {'0', '0', '0', '0', '0'};
    char destination4[] = {'0', '0', '0', '0', '0'};
    memmove(destination3, source2, 0);
    for (int i = 0; i < 5; i++)
        cout << destination3[i] << " ";
    cout << endl;
    my_memmove(destination4, source2, 0);
    for (int i = 0; i < 5; i++)
        cout << destination4[i] << " ";
    cout << endl;

    // Case4 --> num 값이 source의 길이보다 긴 경우 오류메시지 반환
    /*
    char source3[] = {'1', '2', '3', '4', '5'};
    char destination5[] = {'0', '0', '0', '0', '0'};
    char destination6[] = {'0', '0', '0', '0', '0'};
    memmove(destination5, source3, 6);
    for (int i = 0; i < 5; i++)
        cout << destination5[i] << " ";
    cout << endl;
    my_memmove(destination6, source3, 6);
    for (int i = 0; i < 5; i++)
        cout << destination6[i] << " ";
    cout << endl;
    */

    // Case5



    return 0;
}