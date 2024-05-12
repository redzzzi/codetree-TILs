#include <stdio.h>
#define SIZE 100

int main() {
    char a[SIZE], b[SIZE];
    scanf("%s\n%s", &a, &b);
    printf("%s\n%s", b, a);
    return 0;
}