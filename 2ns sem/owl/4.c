#include<stdio.h>
void binary(int *p,int l,int u,int s)
{
    int m,i,j;
    i=l;
    j=u;
    m=(i+j)/2;
    if(i>j)
    {
        printf("-1");
        return ;
    }
    else if(p[m]>s)
    {
        j=m-1;
        printf("%d ",p[m]);
        binary(p,i,j,s);
    }
    else if(p[m]<s){
        i=m+1;
        printf("%d ",p[m]);
        binary(p,i,j,s);
    }
    else if(p[m]==s)
    {
        printf("%d",p[m]);
        return ;
    }
}
int main()
{
    int i, se,n;
    scanf("%d%d",&n,&se);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }i=0;
    binary(a,i,n,se);
    return 0;
}