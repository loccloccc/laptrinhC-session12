#include<stdio.h>


int giaiThua();
int main()
{
	int numb;
	numb = giaiThua();
	
	printf("%d",numb);
	return 0 ; 
}

int giaiThua()
{
	int  num ,tich = 1;
	printf("Moi ban nhap so : ");
	scanf("%d",&num);
	printf("Giai thua cua so %d  la :",num);
	for(int i = 0  ; i < num ; i++)
	{
		tich *= num - i;
	}
	
	
	return tich ;
	
}