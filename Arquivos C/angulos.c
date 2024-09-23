#include <stdio.h>

int main()
{
    int d, h, m, s;
    scanf("%d", &s);

    d = s / 664000;
    h = s / 3600;
    m = s / 60;

    printf("%d\n%d\n%d\n%d", &d,&h,&m,&s);

}