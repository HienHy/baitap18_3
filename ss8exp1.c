#include<stdio.h>
int main (){w
	float sales_amt;
	float com=0;
	printf("enter the sales amount :");
	scanf("%f",&sales_amt);
	if(sales_amt >= 10000)
	com = sales_amt*0.1;
	printf("\nCommission = %.2f",com);
	}
	
