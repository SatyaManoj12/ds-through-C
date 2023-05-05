
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
NODE *head = NULL;

void insert_at_head(NODE *nn)
{
	if (head == NULL)
	{
		head = nn;
	}
	else
	{
		nn -> next =head;
		head = nn;
	}
}
void insert_at_tail(NODE *nn)
{
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		NODE *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;//inserting new node at tail
	}
}
void delete_at_head()
{
	if(head==NULL){
		printf("no nodes");
		return;
	}
	printf("deleted element is %d \n",head->data);
	NODE*dn=head;
	head=head->next;
	free(dn);
}
void delete_at_tail()
{
	if(head==NULL){
		printf("no nodes\n");
	}
	else if(head->next==NULL){
		printf("Deleted element is %d\n",head->data);
		head=NULL;
	}
	else{
		NODE*temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		printf("Deleted element is %d\n",temp->next->data);
		NODE*dn=temp->next;
		free(dn);
	}
}
void insert_at_position(NODE* nn,int pos)
{
	if(pos==1){
		insert_at_head(nn);
	}
	else{
		NODE *temp=head;
		int c=1;
		while(c<pos-1){
			c++;
			temp=temp->next;
		}
	nn->next=temp->next;
	temp->next=nn;
	}
}
void display()
{
	if(head == NULL)
	{
		printf("NO NODES\n");
		return;
	}
	NODE *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
	printf("\n");
	
}

int main()
{
	while(1)
	{
		int choice;
		printf("Enter\n 1. INSERT at HEAD \n 2. INSERT at TAIL \n 3. DELETE at HEAD \n 4. DELETE at TAIL\n 5. Insert at position\n 6.Delete at position\n 7.Display and anything else to exit");
		scanf("%d",&choice);
		if(choice == 1)
		{
			//insert_at_head()
			int val;
			printf("Enter value to be Inserted");
			scanf("%d",&val);
			NODE *nn = (NODE *)malloc(sizeof(NODE));
			nn -> data = val;
			nn -> next = NULL;
			insert_at_head(nn);
		}
		else if(choice == 2)
		{
			//insert_at_tail()
			int val;
	 	 printf("enter value to be inserted");
	 	 scanf("%d",&val);
	 	  NODE *nn=(NODE *)malloc(sizeof(NODE));
	 	 nn->data=val;
	 	 nn->next=NULL;
		insert_at_tail(nn);
		}
		else if(choice == 3)
		{
			//delete_at_head()
			delete_at_head();
		}
		else if(choice == 4)
		{
			//delete_at_tail()
			delete_at_tail();
		}
		else if(choice==5)
		{
			//insert_at_position()
			NODE*nn=(NODE*)malloc(sizeof(NODE));
			int val;
			printf("enter a value to be inserted:");
			scanf("%d",&val);
			nn->data=val;
			nn->next=NULL;
			int pos;
			printf("enter the position to insert the node:");
			scanf("%d",&pos);
			insert_at_position(nn,pos);
		}
		else if(choice==6)
		{
			//delete_at_position()
		}
		else if(choice == 7)
		{
			//display()
			display();
		}
		else
		{
			printf("Get The Hell Out Of Here");
			break;
		}
	}
}