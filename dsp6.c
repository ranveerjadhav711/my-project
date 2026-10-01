#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
int main()
{
	struct node *head, *newnode, *temp;
	int n,i,largest,smallest;
	
	head = NULL;
	
	printf("\nEnter Number of nodes : ");
	scanf("%d",&n);
	
	for(i=1; i<=n ; i++)
	{
		
		newnode=(struct node*)malloc(sizeof(struct node));
		
		printf("\nEnter data :");
		scanf("%d",&newnode->data);
		
		newnode->next = NULL;
    
	
		
		if(head == NULL)
		{
		   head =newnode;
		   temp = newnode;	
		}
	   	else
	   	{
	   		temp->next = newnode;
	   		temp = newnode;
		   }
		  
}
         temp->next=head;
        printf("\nCircular linked list : ");
        temp = head;
        
    do
	{
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	
	
	while(temp != head);
	
		printf("(Back to head)");
		
		 if (i == 1)
        {
            largest = newnode->data;
            smallest = newnode->data;
        }
        else
        {
            if (newnode->data > largest)
                largest = newnode->data;

            if (newnode->data < smallest)
                smallest = newnode->data;
        }
		
	printf("\nSmallest : %d",smallest);
	printf("\nLargest : %d ",largest);
	return 0;
}
