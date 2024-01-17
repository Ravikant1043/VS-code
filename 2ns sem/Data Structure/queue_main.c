#include<stdio.h>
void enque(int value){
    if(rear==size-1){
        printf("Over Flow");
    }
    else{
        que[++rear]=val;
    }
}
int deque()
{
    int val;
    if(front==-1 && rear==-1){
        return -1;
    }
    else if(front == rear){
        val=que[front];
        front=-1;
        rear=-1;
        return val;
    }
    else{
        val=que[front];
        front++;
        return val;
    }
}
void display()
{
    int i;
    if(front==1 && rear==-1){
        printf("Undeer flow");
    }
    else{
        for(i=front;i<=rear;i++)
        {
            printf("%d ",que[i]);
        }
        printf("\n");
    }
}
int main()
{
    int i,ch,val;
    scanf("%d", &size);
    que=(int *)calloc(size, sizeof(int));
    while(1){

    }
}