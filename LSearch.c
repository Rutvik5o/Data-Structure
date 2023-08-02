//Liner Search
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,item,j;
	
	for(j=0;j<5;j++)
	{
		printf("Enter %d Element on Array:-> ",i+1);
		scanf("%d",&a[j]);
	}
	
	printf("Enter Searching Item:-> ");
	scanf("%d",&item);
	
	
	while(i<5)
	{
		if(a[i]==item)
		{
			printf("Item Found Location On => %d",i+1);
			break;
		}
		i++;
	}
	
	if(i>=5)
	printf("Item Will Not Found");
	
	return 0;
}


