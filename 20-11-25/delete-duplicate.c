#include <stdbool.h>
#include <stdio.h>
int main() {
    int a[30], s1, i=0;
    printf("Enter size of array: ");
    scanf("%d", &s1);
    for (i=0; i<s1; i++) {
        printf("Enter value: ");
        scanf("%d", &a[i]);
    }
    while (i<s1) {
        for (int j=0; j<i; j++) {
            if (a[j]==a[i]) {
                for (int k=j; k<s1; k++) {
                    a[k] = a[k+1];
                    s1--;
                    i++;
                }
            }
        }
    }

    for (i=0; i<s1; i++) {
        printf("%d, ", a[i]);
    }
}