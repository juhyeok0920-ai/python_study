#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    char* start = str;                 // 시작 주소
    char* end = str + strlen(str) - 1; // 끝 주소
    char temp;

    // 시작과 끝이 교차할 때까지
    while (start < end) {
        // 교환
        temp = *start;
        *start = *end;
        *end = temp;

        start++; // 오른쪽으로 한 칸 이동
        end--;   // 왼쪽으로 한 칸 이동
    }
}

int main() {
    // 배열 형태로 문자열 선언
    char text[] = "IAMHANDSOME"; 
    
    printf("입력받은 문자열: %s\n", text);
    
    // 배열의 시작주소를 넘김
    reverseString(text); 
    
    printf("뒤집힌 문자열: %s\n", text);
    
    return 0;
}