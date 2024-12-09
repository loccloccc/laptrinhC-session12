#include<stdio.h>


void inputArr(int length , int arr[]);
void printfArr(int length , int arr[]);
int main()
{
	int length , arr[100];
	printf("Moi ban nhap so luong phan tu trong mang :");
	scanf("%d",&length);
	arr[length];
	
	inputArr(length,arr);
	printf("\n");
	printfArr(length,arr);
	
	return 0 ; 
}
void inputArr(int length , int arr[])
{
	printf("Moi ban nhap %d so luong phan tu :\n",length);
	printf("Moi ban nhap gia tri cac phan tu : \n");
	for(int i = 0 ; i < length ; i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}
void printfArr(int length , int arr[])
{
	printf("In ra tri cac phan tu :");
	for(int j = 0 ; j < length ; j++)
	{
		printf("%d ",arr[j]);
	}
}
