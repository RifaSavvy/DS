//Program for BubbleSort
//Rifa Basheer
//Roll no- 51

#include<stdio.h>
int main()
{
	int a[10],n,i,j,temp;
		printf("Enter the array limit");
		scanf("%d",&n);
		printf("Enter the array elements");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			}
		for(i=0;i<n;i++){
			for(j=0;j<n-i-1;j++)
			{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
		}
		printf("The array sorted after bubble sort is");
		for(i=0;i<n;i++)
		{
		printf("%d",a[i]);
		}
		return 0;
}
