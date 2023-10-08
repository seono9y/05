//
//  main.c
//  exercise_05
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int sum = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);

    return 0;
}
