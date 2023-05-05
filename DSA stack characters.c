#include<stdio.h>
char stack[100];
int top=-1,size;
void push(char ele){
	if(top==size-1){
		printf("Stack is full. Insertions are not possible\n");
	}
	else
	{
		top++; 
		stack[top]=ele;
		printf("%c is inserted into stack\n",ele);
	}
}
char pop(){
	if(top==-1){
		return ' ';
	}
	else{ 
		char rm=stack[top];
		top--;
		return rm;
	}
}
void peek(){
	if(top==-1){
		printf("Stack is Empty\n");
	}
	else{
		printf("Element at top is: %c\n",stack[top]);
	}
}
void display(){
	if(top==-1){
	printf("Stack is Empty. No elements to dispaly\n");
}
else
{
printf("Elements in the stack are\n");
int i;
for(i=top;i>=0;i--){
	printf("%c",stack[i]);
}	
printf("\n");
 }
}

int main(){
	printf("Enter size of the stack: ");
	scanf("%d",&size);
	// menu driven program
	int choice;
	while(1){
	printf("press 1. Push 2. pop 3. peek 4. Display and any other to exit: ");
	scanf("%d",&choice);
	if(choice==1){
		//push() operation
		char ele;
		printf("Enter an element to pushed into the stack:");
		scanf("%c",&ele);
		push(ele);
	}
	else if(choice==2){
		//pop() operation
		char removed_element=pop();
		if(removed_element==' '){
			printf("Stack is empty.Cannot delete the element\n");
		}
		else{
			printf("Removed element is:%c\n",removed_element);
		}
			}
	else if(choice==3){
		//peek() operation 
		peek();
	}
	else if(choice==4){
		//display()
		display();
	}
	else{
		printf("Thank You");
		break;
	}
 }
}