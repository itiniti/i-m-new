#include <stdio.h>

main() {
    int A, B, result = 0; //A, B�� result �����
    scanf("%d %d", &A, &B); //�Է�
    while (A >= 1) { //A�� ���� 1�϶� �������ݺ�
        if (A % 2 == 1) //A�� Ȧ���� 
            result += B; //result�� B�� ���Ѵ�.
        A /= 2; //A�� 2�� ���� �� ����
        B *= 2; //B�� 2��
    }
    printf("%d \n", result);
}