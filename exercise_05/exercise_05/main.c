//
//  main.c
//  exercise_05
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int answer = 59;
    int guess;
    int attempts = 1;
    
    printf("정답을 추측하세요: ");
    scanf("%d", &guess);
    
    while (guess != answer) {
        attempts++;
        
        if (guess > answer) {
            printf("정답보다 큽니다.\n");
        } else {
            printf("정답보다 작습니다.\n");
        }
        
        printf("정답을 추측하세요: ");
        scanf("%d", &guess);
    }
    
    printf("정답을 맞췄습니다! 시도 횟수: %d\n", attempts);
    
    return 0;
}
