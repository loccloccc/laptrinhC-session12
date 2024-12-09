#include<stdio.h>


int maX(int arr[],int length);

int main()
{
	int length , arr[100],max;
	printf("Moi ban nhap so luong phan tu trong mang :");
	scanf("%d",&length);
	arr[length];
	printf("Moi ban nhap %d so luong phan tu :\n",length);
	printf("Moi ban nhap gia tri cac phan tu : \n");
	for(int i = 0 ; i < length ; i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("In ra tri cac phan tu :");
	for(int j = 0 ; j < length ; j++)
	{
		printf("%d ",arr[j]);
	}
	
	printf("\nPhan tu lon nhat trong mang :  \n");
	max = maX(arr,length);
	printf("%d",max);
	return 0 ; 
}
int maX(int arr[],int length)
{
	
	for(int i = 0 ; i < length ; i++)
	{
		for(int j = 0 ; j < length -1 ; j++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	
	int max = arr[length-1];
	return max;
}
