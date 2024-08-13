//Program for Linear Search
//Rifa Basheer
//Roll no:51

#include<stdio.h>
void main()
{
	int a[50],search=0,n,i,count=0;
	printf("Enter the size of Array");
	scanf("%d",&n);
	printf("Enter the Array elements");
  for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Search Element");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
	printf("Search element is found at %dth location",i+1);
	}
	else
	{
		printf("Search element is not found");
	}
}
