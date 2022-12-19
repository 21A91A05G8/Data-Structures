#include<stdio.h>
int max(int *arr,int n)
{
	int i,ind=0,maxi=arr[0];
	for(i=0;i<=n;i++)
	{
		if(maxi<arr[i])
		{
		
		  maxi=arr[i];
		  ind=i;
	    }
	}
	return ind;
}
void selection_sort(int *arr,int size)
{
	int i,maxi,temp;
	for(i=size-1;i>=0;i--)
	{
		maxi=max(arr,i);//find max value ind & store to maxi-fun call
		temp=arr[i];
		arr[i]=arr[maxi];
		arr[maxi]=temp;
	}
	
}
int main()
{
	int n,i,j,max=0,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);//funtion call
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
