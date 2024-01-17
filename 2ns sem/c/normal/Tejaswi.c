#include<stdio.h>
#include<string.h>
struct student
{
    int a;
    char v[10];
};
typedef struct student tt;
int main()
{
tt ravi;
ravi.a=19;
printf("\n%d",ravi.a);
return 0;
}
