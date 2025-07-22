#include <stdio.h>
int max_of_four(int a, int b, int c, int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
        int result;

    if (a > b && a>c && a>d)
        result = a;
    if (b>c && b>d && b>a)
    result=b;
    if (c>d && c>a && c>b)
    result=c;
    if (d>a && d>b && d>c)
    result=d;
    return result;
}
