#include <stdio.h>
int main()
{
    // input 153 --->1*1*1+5*5*5+3*3*3=153
    int n, arm = 0, r, c;
    printf("E nter any number:");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    if (c == arm)
        printf("Armstrong number");
    else
        printf("NOT");
    return 0;
}