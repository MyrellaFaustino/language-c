#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    scanf("%d\n%d\n%d", &x, &y, &z);

    if (x > y && y > z)
    {
        printf("%d\n%d\n%d",y ,z ,x);
    }
    if (y > x && x > z)
    {
        printf("%d\n%d\n%d",x ,z ,y);
    }
    if (y > x && y > z)
    {
        printf("%d\n%d\n%d",z ,y ,x);
    }
    if (y > x && z > y)
    {
        printf("%d\n%d\n%d",x ,y ,z);
    }
    if (z > y && x > z)
    {
        printf("%d\n%d\n%d",y ,z ,x);
    }
    if (z > x && x > y)
    {
        printf("%d\n%d\n%d",y ,x ,z);
    }
    if (y == x && y == z)
    {
        printf("%d\n%d\n%d",z ,y ,x);
    }
}