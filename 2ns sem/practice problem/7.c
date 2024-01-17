// // monk teaches pallindrome in string
// #include<stdio.h>
// #include<string.h>
// int strrev(char *s,int t)
// {
//     char b[t];
//     int i=0,n;
//     n=t;
//     for(i=0;i<t;i++)
//     {b[i]=s[n-1];n--;}
//     if(strcmp(s,b)==0)
//     return 1;
//     else
//     return 0;
// }
// int main()
// {
//     int n;
//     char s[100];
//     scanf("%d",&n);
//     while(n--)
//     {
//         scanf(" %[^\n]s",s);
//         if(strrev(s,strlen(s))==1 && strlen(s)%2==0)
//         printf("YES EVEN\n");
//         else if(strrev(s,strlen(s))==1 && strlen(s)%2!=0)
//         printf("YES ODD\n");
//         else
//         printf("NO\n");
//     }
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, k = 0, c = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = n - 1; i <= 0; i--)
    {
        c = c + a[i] * pow(2, k);
        k++;
    }
    printf("%d", k);
}