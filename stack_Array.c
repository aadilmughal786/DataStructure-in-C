#include <stdio.h>
#include <stdbool.h>

#define SIZE 5
#define EMPTY (-1)
#define FULL SIZE-1

int my_stack[SIZE],top = EMPTY;

bool isEmpty(){
	if(top==EMPTY)
		return true;
	return false;
}

bool isFull(){
	if(top==FULL)
		return true;
	return false;
}

bool push(int data){
	if(isFull())
		return false;
	my_stack[++top] = data;
	return true;
}

int pop(){
	if(isEmpty())
		return false;
	return my_stack[top--];
}

int peek(){
	if(isEmpty())
		return EMPTY;
	return my_stack[top];
}

bool show(){
	if(isEmpty())
		return false;
	for(int i = top;i>EMPTY;--i){
		printf("%d\n",my_stack[i]);
	}
	return true;
}

int main(){
	push(1);
	push(11);
	push(134);
	pop();
	show();
	return(0);
}
