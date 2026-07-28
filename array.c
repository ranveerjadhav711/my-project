#include<stdio.h>
void main()
{
	int i[10],a;
	printf("Input any 10 numbers");
	for(a=0;a<10;a++)
	{
	scanf("%d",&i[a]);
}

 printf("Numbers are :");
    for(a=0;a<10;a++)
    { 
    printf("\n%d",i[a]);
    
	}
	getch();
}