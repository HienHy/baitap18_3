#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("enter num1,num2,num3 \n ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	printf(" The highest value num1 %d",num1);
	else if(num2>num1 && num2>num3)
	printf("The highest value num2 %d",num2);
	else if(num3>num1 && num3>num2)
	printf("The highest value is num3 %d",num3);
	}
