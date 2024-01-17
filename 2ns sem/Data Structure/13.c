#include<stdio.h>
#include<stdlib.h>
void post_eval(char * str)
{

}
int main()
{
    int y=40;
    int *k,*t;
    // k=&y;
    // t=&y;
    t=k=&y;
    free(t);
    free(k);
    printf("%d\n",y);
    printf("%d\n",*k);
    printf("%d",*t);
// push_back()
    return 0;
}



/*
a+b-c*d
os=ab+cd*-

(a*b-c)-(d-e-f)+(g+h)
os=ab*c-de-f--gh++
*/