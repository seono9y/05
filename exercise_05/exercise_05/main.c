//
//  main.c
//  exercise_05
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    char operator;
    int result;

    printf("두 개의 정수와 연산자를 입력하세요 : ");
    scanf("%d %c %d", &num1, &operator, &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        }
    }

    printf("%d %c %d = %d\n", num1, operator, num2, result);

    return 0;
}
