//
//  main.c
//  exercise_05
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    int numCount = 0;

    printf("문자열을 입력하세요 : ");

    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            numCount++;
        }
    }

    printf("입력된 문자열 내에 숫자의 개수는 %d개 입니다.\n", numCount);

    return 0;
}
