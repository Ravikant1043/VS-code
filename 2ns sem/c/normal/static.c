#include <stdio.h>
// int f2=38;
int ravi()
{
    int f=19;
    return f * 10;
    f+=1;
}
int main()
{

    int a;
    a = ravi();
    printf("%d\n", a);
    a = ravi();
    printf("%d", a);
    return 0;
}