/*stack implemetation in c*/
//STACK
#include<stdio.h>
#define MAXSIZE 5

struct stack
{
	int stk[MAXSIZE];
	int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int pop(void);
void display(void);

void main()
{
	int choice;
	s.top=-1;
	int option=1;


	printf("stack operations\n");
	while(option)
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.dislay\n");
		printf("4.exit\n");

	printf("enter the choice");
	scanf("%d",&choice);

	switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: return;

			default: printf("wrong choice");
		}
		printf("do you want to continue- Type 0 or 1\n");
		scanf("%d",&option);
	}
}

void push()
{
	int num;
	
	if(s.top==MAXSIZE -1)
	{
		printf("stack is full\n");
		return;
	}
	else 
	{
		printf("enter the number to be pushed ");
		scanf("%d",&num);
		s.top=s.top + 1;
		s.stk[s.top] = num;
	}
	return;
}

int pop()
{
	int num;

	if(s.top==-1)
	{
		printf("stack is empty");
		return(s.top);
	}
	else 
	{
		num=s.stk[s.top];
		printf("poped element is %d\n",s.stk[s.top]);
		s.top=s.top -1;
	}
	return(num);
}

void display()
{
	int i;
	if(s.top==-1)
	{
		printf("stack is empty\n");
		return;
	}

	else
	{
		for(i=s.top;i>=0;i--)
		{
			printf("stack elements are-\n");
			printf("%d\n",s.stk[i]);
		}
	}
	printf("\n");
}



























