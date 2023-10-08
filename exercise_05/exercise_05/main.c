//
//  main.c
//  exercise_05
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;

    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    if (a < 0) {
        a = -a;
    }

    printf("입력된 숫자의 절대값은 %d 입니다.\n", a);

    return 0;
}
