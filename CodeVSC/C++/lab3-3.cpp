#include <stdio.h>

float circle(int r);

int main() {
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Circle area is %.2f\n", circle(r));
    return 0;
}

float circle(int r) {
    return 3.14159 * r * r;
}
