int pop(){
	int item;
	if(top == 1){
		prinf("Stack is empty");
	}
	else{
		item = stack[top];
		top = top - 1;
	}
	return item;
}
