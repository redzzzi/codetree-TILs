#include <stdio.h>

int main() {
    int add = 0;
    int sum = 0;
    for (int i=0; i<10; i++) {
        scanf("%d", &add);
        sum += add;
    }
    printf("%d", sum);
    return 0;
}