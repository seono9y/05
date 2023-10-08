//
//  main.c
//  exercise_05
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("입력된 숫자는 양수입니다.\n");
    } else if (num < 0) {
        printf("입력된 숫자는 음수입니다.\n");
    } else {
        printf("입력된 숫자는 0입니다.\n");
    }

    return 0;
}
