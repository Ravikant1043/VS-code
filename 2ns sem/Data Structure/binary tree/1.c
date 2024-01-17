#include<stdio.h>
struct name{
    int val;
    struct name *next;
    struct name *prev;
};
typedef struct name NODE;
NODE *create(){
    int n;
    NODE *nn;
    printf("Enter the element");
    scanf("%d",&n);

}
int main()
{
    int n;
    // scanf("%d",&n);
    printf("Enter the elements in the binary tree and press -1 to exit entering");
    NODE *root;
    root= create();  
}