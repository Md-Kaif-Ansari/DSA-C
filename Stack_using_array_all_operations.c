#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack* ptr)
{
	if(ptr->top == -1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int isFull(struct stack* ptr)
{
	if(ptr->top == ptr->size-1)
	{
		return 1;
	}
	else
	return 0;
}

void push(struct stack * ptr, int value)
{
	if(isFull(ptr))
	{
		printf("Stack over flow ");
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top]==value;
	}
}

int pop(struct stack * ptr)
{
	if(isEmpty(ptr))
	{
		printf("stack under flow ");
		return -1;
	}
	else
	{
		int value = ptr->arr[ptr->top];
		ptr->top--;
		return value;
	}
}

int peek(struct stack * ptr, int i)
{
	if(ptr->top-i+1<0)
	{
		printf("invalid position");
	}
	else
	{
		return ptr->arr[ptr->top-i-1];
	}
}
int stackTop(struct stack * ptr)
{
	return ptr->arr[ptr->top];
}
int stackBottom(struct stack * ptr)
{
	return ptr->arr[0];
}
int main()
{
	struct stack *s= (struct stack*)malloc(sizeof(struct stack));
	
	s->arr = (int*)malloc(s->size * (sizeof(int)));
	s->size = 10;
	s->top = -1;
	
	printf("%d \n", isEmpty(s));
	printf("%d \n", isFull(s));
	
	push(s,3);
	
	printf("%d \n", isEmpty(s));
	printf("%d \n", isFull(s));
	
	int value = pop(s);

	printf("%d \n", isEmpty(s));
	printf("%d \n", isFull(s));
	
	return 0;
}
