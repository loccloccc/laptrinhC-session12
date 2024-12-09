#include<stdio.h>

float tinhTong(float num1 , float num2);


int main()
{
	float number1 , number2 ; 
	float total ;
	printf("Moi ban nhap so thu nhat : " );
	scanf("%f",&number1);
	printf("Moi ban nhap so thu hai : " );
	scanf("%f",&number2);
	total = tinhTong(number1, number2);
	printf("Tong hai so la : %.1f",total);
	
	return 0 ; 
 } 
 float tinhTong(float num1 , float num2 )
 {
	float sum = num1 + num2 ;
	return sum ; 
 }