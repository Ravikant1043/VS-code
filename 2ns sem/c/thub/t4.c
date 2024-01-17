#include<stdio.h>
int main()
{
    int n,i;
    int k=0;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    i=0;
    for(int j=0;j<n;j++)
    {
        if (s[i]%s[i+1]==0||s[i+1]%s[i]==0)
       { i++; 
        s[k]=s[i];
        k++;
       }
    }
    for (int k = 0; k < i; k++)
    {
        printf("%d",s[k]);
    }
    
    
    printf("%d",s[i]);
}