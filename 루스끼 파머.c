#include <stdio.h>

main() {
    int A, B, result = 0; //A, B와 result 결과값
    scanf("%d %d", &A, &B); //입력
    while (A >= 1) { //A의 몫이 1일때 까지만반복
        if (A % 2 == 1) //A가 홀수면 
            result += B; //result에 B를 더한다.
        A /= 2; //A는 2로 나눈 몫만 저장
        B *= 2; //B는 2배
    }
    printf("%d \n", result);
}