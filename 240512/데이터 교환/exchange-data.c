#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp1 = c;
    int temp2 = b;
    b = a;
    c = temp2;
    a = temp1;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}