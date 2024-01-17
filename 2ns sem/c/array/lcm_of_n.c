// #include <stdio.h>
// int lcm(int a, int b)
// {
//     int i;
//     i = a > b ? a : b;
//     while (1)
//     {
//         if (i % a == 0 && i % b == 0)
//         {
//             return i;
//         }
//         i++;
//     }
// }
// int main()
// {
//     int n, k = 1,i;
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         k = lcm(k, a[i]);
//     }
//     printf("%d",k);
//     return 0;
// }


#include <stdio.h>    
     
int main()    
{      
    int arr[10];
    int min = arr[0];    
    int length = sizeof(arr)/sizeof(arr[0]);    
    for (int i = 0; i < length; i++) {     
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("Smallest element present in given array: %d\n", min);    
    return 0;    
}    