
// // appy and contest
// #include<stdio.h>
// int main()
// {
//     int t,k,n,a,b,i,p;
//     scanf("%d",&t);
//     while(t--)
//     {p=0;
//         scanf("%d%d%d%d",&n,&a,&b,&k);
//         for(i=0;i<n;i++)
//         {
//             if((i%a==0 && i%b!=0) ||(i%a!=0 && i%b==0))
//             p++;
//         }
//         if(p>=k)
//         printf("Win\n");
//         else
//         printf("Lose");
//     }
//     return 0;
// }

#include<stdio.h>
#include <stdlib.h>
void rot(int *p,int n,int r)
{
    int a,i;
    while(r--){
    a=*(p+n);
    for (i=n-2;i>0;i--)
    *(p+i)=*(p+i-1);
    *(p+0)=a;}
}
int main()
{
    int n,a,b,*p,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        p=(int *)malloc(4*a);
        for(i=0;i<a;i++)
        scanf("%d",p+i);
        rot(p,a,b);
        for(i=0;i<a;i++)
        printf("%d ",*(p+i));
        printf("\n");
    }
}