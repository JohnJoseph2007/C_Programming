#include<stdio.h>
int main() {
    int a1[30], a2[30], a3[60], s1, s2;
    printf("Enter size arrays:\n");
    scanf("%d%d", &s1, &s2);
    for (int i=0; i<s1; i++) {
        printf("Enter value: ");
        scanf("%d", &a1[i]);
    }
    for (int i=0; i<s2; i++) {
        printf("Enter value: ");
        scanf("%d", &a2[i]);
    }
    //MERGE:
    for (int i=0; i<s1; i++) {
        a3[i] = a1[i];
    }
    for (int i=s1; i<s1+s2; i++) {
        a3[i] = a2[i-s1];
    }
    for (int i=0; i<s1+s2; i++) {
        printf("%d ", a3[i]);
    }
}