// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i
//     char s[100];
//     scanf("%[^\n]s",s);
//     reverse(t);
//     printf("%s",s);
//     return 0;
// }


// void reverse(char *t[200])
// {
//     int k,i;
//     char p[100],j;
//     k=strlen(t);
//     for(i=k;i>=0;i--)
//     {
//         j=t[k];
//         p[i]=j;
//         k--;
//     }
//     // return *p;
// }



#include <stdio.h>  
#include <string.h>  
void revstr(char *str1)  
{  
    int i, len, temp;  
    len = strlen(str1);
         
    for (i = 0; i < len/2; i++)  
    {  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50]; // size of char string  
        printf (" Enter the string: ");  
        gets(str); // use gets() function to take string  
          
        printf (" \n Before reversing the string: %s \n", str);  
          
        // call revstr() function   
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }