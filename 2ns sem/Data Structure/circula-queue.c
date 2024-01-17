#include<stdio.h>\
// double ended circular queue-->deque
/*
*/
int *que,size,rear=-1,front=-1;
void enque_at_rear()
{

}
void enque_at_front(){
    
}
int main()
{
    int i,ch,val;
    scanf("%d",&size);
    que=(int *)calloc(size,sizeof(int));
    scanf("%d",&ch);
    if(ch==1){
        scanf("%d",&val);
        enque_at_rear(val);
    }
    else if(ch==2)
    {
        val=deque_at_rear();
        if(val==-1)
        {
            printf("Queue under flow");
        }
    }
    else if(ch==3){

    }
    else if (ch==4)
    {
        val=deque_at_front();
        if(val==-1)
        {
            printf("Queue under flow");
        }
        else{
            printf("%d",val);
        }
    }
    else if (ch==5)
    {
        display();
    }
    else{
        break;
    }
}   