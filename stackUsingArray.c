#include <stdio.h>
#include <stdlib.h>
# define CAPACITY 5
void push(int);
void delet();
void display();
void peek();
void pop();
int isFull();
int isEmpty();

int stack[CAPACITY];
int top=-1;
int main()
{
    int ch,item;
        while(1){
            printf("Stack Implementation Using Array\n");
            printf("\n1.ADD\n");
            printf("2.pop\n");
            printf("3.Display\n");
            printf("4.peek\n");
            printf("5.Exit\n");
            printf("\n");
            printf("Enter your Choise=");
            scanf("%d",&ch);

            switch (ch){
                case 1: printf("Enter the Element=");
                        scanf("%d",&item);
                        push(item);
                    break;
                case 2: pop();
                    break;
                case 3: display();
                    break;
                case 4:peek();
                    break;
                case 5:exit(0);
                    default:printf("Enter a valid option");
            }

        }
    return 0;
}
void push(ele){
    if(isFull()){
        printf("Stack is Full");
    }
    else{
            top++;
        stack[top]=ele;
    }

}

void pop()
{
    if(isEmpty()){
        printf("Stack is Empty");
    }
    else{
        printf("%d is pop from the Stack",stack[top]);
        top--;
    }

}

void peek()
{
    if(isEmpty())
        printf("Stack is Empty Nothing to show");
    else
        printf("%d is on the Top ",stack[top]);

}
void display(){
     if(isEmpty())
        printf("Stack is Empty Nothing to show");
    else{
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}

int isFull(){
    if(top==CAPACITY-1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;

}
