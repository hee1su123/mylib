#include <iostream>
#include <cstring>

using namespace std;

// cpp : <cstring> / c : (string.h)

// Compare two blocks of memory
// Compares the first num bytes of the block of memory pointed by ptr1 to the first num bytes pointed by ptr2, returning zero if they all match or a value different from zero representing which is greater if they do not.
// Notice that, unlike strcmp, the function does not stop comparing after finding a null character.

// Parameters
// ptr1 : Pointer to block of memory.
// ptr2 : Pointer to block of memory.
// num : Number of bytes to compare.

// 두개의 메모리를 비교. ptr1 가 가리키는 num 바이트의 데이터와 ptr2 가 가리키는 num 바이트의 데이터를 비교해 같으면 0, dest 가 더 크면 양수, src 가 크면 음수를 반환한다.


int my_memcmp (const void* ptr1, const void* ptr2, size_t num) {
    char *comp1 = (char*)ptr1;
    char *comp2 = (char*)ptr2;

    for (int i = 0; i < num; i++) {
        if (comp1[i] != comp2[i]) {
            return comp1[i] - comp2[i];
        }
    }
    return 0;
}

int main()
{
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";

    int n;
    int m;

    n = memcmp ( buffer1, buffer2, sizeof(buffer1) );
    m = my_memcmp ( buffer1, buffer2, sizeof(buffer1) );
    cout << "memcmp: " << n << ", " << "my_memcmp: " << m << endl;

    return 0;
}