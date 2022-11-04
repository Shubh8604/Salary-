#include<stdio.h>
int main()
{
	int m,f;
	printf("Enter salary for male and female:");
	scanf("%d %d",&m,&f);
	if(m>150000|| f>180000){
		printf("The salary of male and female is taxable.");
	}
	else (m>150000 || f<180000)
	{
		printf("The salary of male is taxable and female is not taxable.");
	}
	elseif (m<150000 || f>180000)
	{
		printf("The salary of male is not taxable and female is taxable.");
	}
}