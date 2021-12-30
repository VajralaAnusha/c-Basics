#include<stdio.h>
void main()
{
	int costprice,sellprice;
	printf("enter a cost price,sell price");
	scanf("%d%d",&costprice,&sellprice);
	if(costprice<sellprice)
	{
		printf("profit");
		
	}
	
	
	else if(costprice>sellprice)
    {
    	printf("profit");
	}

	else
	{
		printf("no profit no loss");
	}
	
	
}
