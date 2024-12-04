#include <stdio.h>
#include<stdlib.h>
int *queue,size,rear=-1,front=0,count=0;
void enqueue(int item)
{
    if(count==size)
    {
        printf("queue overflow\n");
        return;
    }
    else
    {
        printf("Enter the item to be inserted: ");
        scanf("%d",&item);
        rear=(rear+1)%size;
        queue[rear]=item;
        count++;
    }
}
void dequeue()
{
    if(count==0)
    {
        printf("queue underflow\n");
        return;
    }
    else
    {
        int temp=queue[front];
        printf("dequeued element is: %d",temp);
        front=(front+1)%size;
        count--;
    }
}
void display()
{
    int i;
    if(count==0)
    {
        printf("queue empty\n");
        return;
    }
    printf("contents of the queue: ");
    for(i=0;i<=count;i++)
        scanf("%d\n",&queue[i]);
        i=(i+1)%size;
}
int main()
{
    int choice,item,n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    size=n;
    queue=(int *)malloc(n*sizeof(int));
    while(1)
    {
        printf("Menu:\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1://printf("Enter the item to be inserted: ");
                   //scanf("%d",&item);
                   enqueue(item);
                   break;
            case 2:dequeue();
                   break;
            case 3:display();
                   break;
            case 4:printf("exiting");
                   free(queue);
                   exit(0);
            default:printf("invalid choice");       
        }
    }
    return 0;
}