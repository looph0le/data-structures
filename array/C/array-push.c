//Program:
void(push){
	int item;
	if(top == MAXSIZE - 1){
		printf("\nThe stack is full!");
	}
	else{
		printf("Enter the element to be inserted:");
		scanf("%d", &item);
		top = top + 1;
		stack[top] = item;
	}
}
