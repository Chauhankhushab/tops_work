//28. 1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
    int term = 1;
    int a = 1;
    int b = 2;
    int n;
    printf("enter number :");
    scanf("%d",&n);
       printf("%d %d",a,b);

    printf("Sequence:\n");
    for (int i = 3; i < n; i++) {
        printf("%d ", term);
        int c = term + a;
        a = term;
        term = c;
    }

    return 0;
}
