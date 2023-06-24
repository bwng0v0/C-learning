#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char haystack[MAX_LENGTH];
    char needle[MAX_LENGTH];

    printf("찾을 문자열을 입력하세요: ");
    fgets(haystack, sizeof(haystack), stdin);

    printf("검색할 부분 문자열을 입력하세요: ");
    fgets(needle, sizeof(needle), stdin);

    // fgets로 입력받은 문자열에 개행 문자 제거
    haystack[strcspn(haystack, "\n")] = '\0';
    needle[strcspn(needle, "\n")] = '\0';

    char *result = strstr(haystack, needle);

    if (result != NULL) {
        printf("부분 문자열 발견: %s\n", result);
    } else {
        printf("부분 문자열을 찾을 수 없습니다.\n");
    }

    return 0;
}
