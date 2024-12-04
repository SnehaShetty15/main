// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int *stack,size,top=-1;
void push(int item)
{
    if(top==size-1)
    {
        printf("stack overflow\n");
        return;
    }
    else
    {
        printf("Enter the item to be inserted: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
        return;
    }
    else
    {
        int temp=stack[top];
        printf("Popped element is: %d",temp);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack empty\n");
        return;
    }
    printf("contents of the stack: ");
    for(i=0;i<=top;i++)
        scanf("%d\n",&stack[i]);
}
int main()
{
    int choice,item,n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    size=n;
    stack=(int *)malloc(n*sizeof(int));
    while(1)
    {
        printf("Menu:\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1://printf("Enter the item to be inserted: ");
                   //scanf("%d",&item);
                   push(item);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:printf("exiting");
                   free(stack);
                   exit(0);
            default:printf("invalid choice");       
        }
    }
    return 0;
}