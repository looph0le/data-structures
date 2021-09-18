#include<stdio.h>
#define MAXSIZE 10
void push();
int pop();
void traverse();
int stack[MAXSIZE];
int top = -1;
int main(){
	int choice;
	char ch;
	do{
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. Traverse");
		printf("\nEnter your choice:");
		scanf("%d", &choice);
		switch(choice){
		case 1 : push();
		break;
		case 2 : printf("\nThe deleted element is %d", pop);
		break;
		case 3 : traverse();
		break;
		default : printf("You entered wrong choice!");
		}
		printf("Do you wish to continue");
		scanf("%c", &ch);
	}
	while(ch == 'Y' || ch == 'y');
}
void push(){
	int item;
	if(top == MAXSIZE - 1){
		printf("\nThe stack is Full");
	}	
	else{
		printf("Enter the element to be inserted;");
		scanf("%d", &item);
		top = top + 1;
		stack[top] = item;
	}
}
int pop(){
	int item;
	if(top == -1){
			printf("The stack is empty");		
		}
		else{
			item = stack[top];
			top = top - 1;
		}
		return item;
	}
void traverse(){
	int i;
	if(top == -1){
		printf("the stack is empty");
	}
	else{
		for(i = top; i >= 0; i--){
			printf("traverse the element");
			printf("\n %d", stack[i]);
		}
	}
}

