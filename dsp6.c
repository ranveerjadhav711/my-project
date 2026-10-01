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
    
	largest = newnode->data;
    smallest = newnode->data;
        
       temp = head;
        do
        { 
	    	if(temp->data > largest)
		         largest = temp->data;
		         
            if (temp->data < smallest)
                smallest =temp->data;
   
	        	temp=temp->next;
		
}
    while(temp != head);
	printf("\nSmallest : %d",smallest);
	printf("\nLargest : %d ",largest);
	return 0;
}
