//  bubble sorting
#include<stdio.h>
void sort(int *a,int n)
{
    int p,i,j,temp;
    for(p=1;p<=n;p++)
    {
        for(i=0,j=1;j<n;i++,j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}