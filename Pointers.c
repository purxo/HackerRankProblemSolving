#include <stdio.h>

void update(int *a,int *b) {
int add, sub;
    add = *a + *b;
    if (*a > *b) {
        sub = *a - *b;
    }
    else sub = *b - *a;
    *a = add;
    *b = sub;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
