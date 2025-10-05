// stack operations
#include<stdio.h>
#define size 5

int e1;
int stack[size];
int top = -1;


void push (int n);
void pop();
void display();


void main()
{
	int ch, e; 
	while(1) 
	{
		printf("\nStack Operations");
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Display");
		printf("\n 4. Exit\n");
		printf("Choose your operation : ");
		scanf("%d", &ch);
		
	
    switch(ch)
	{
    case 1 : printf("\nenter a number to insert : \n");
             scanf("%d",&e);
             push(e);
             break;
            
    case 2 : pop();
            break ;
            
    case 3 : display();
            break;
            
    default : printf("\ninvalid option\n");
	}
	}
}   
void push(int a) 
{
    if(top == size-1)
	{
        printf("Stack is overflwow\n");
    }
	else
	{
       top = top + 1 ;
        stack[top] = a ;
    }
} 
void pop()
 {
	if(top<0)
 	{ 
 		printf("stack is underflowed\n");
	}
	else
 	{
 	e1 = stack[top];
 	top = top - 1;
	printf("%d is removed\n",e1);
 	}
 }
 
 void display()
 {
 	int i;
	if(top == -1)
	{
		printf("stack is underflow\n");
	}
 	else
	{
 		for (i=top;i>-1;i--)
 		{
 			printf("\n%d",stack[i]);
 		}
	}
}
