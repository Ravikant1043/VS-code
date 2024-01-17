/*
    5 65 62 62 62
    5 62 62 62 65

    8 9 74 54 56
    8 9 74 54 56

    53 9 54 74 56
    8 9 54 56 74
*/

#include <stdio.h>
void sort(int *a,int n)
{
    int i,j,t,k=0; 
    for (i = 0; i < n - 1; i++)  
    {
        k = 0;
        for (j = 0; j < n - 1-i ; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                k = 1;
            }
        }
        if (k == 0)
            break;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, j;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a,n);
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[100],i,j,t;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the no of elements u want to insert");
//     int k,m=0;
//     scanf("%d",&k);

//     for(i=n;i<k;i++)
//     scanf("%d",&a[i]);

//     for(i=0;i<n+k-1;i++)
//     {m=0;
//         for(j=0;j<n+k-1;j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 t = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = t;
//                 m = 1;
//             }
//         }
//         if(m==0)
//         break;
//     }
//     return 0;
// }