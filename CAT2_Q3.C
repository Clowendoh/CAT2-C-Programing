//progam to calculate net pay

/*
Author: Clowen Wendoh
Date: Thursday, 7th November 2024
Aim: Calculate net pay
*/

#include <stdio.h>

int main()
{
	float wage, hours, taxes, gross, net;
	
	//prompts user to enter hours worked for
	printf("Enter hours you worked for this week: ");
	scanf("%f", &hours);
	
	//prompts user to enter hourly wage
	printf("Enter your hourly wage: $");
	scanf("%f", &wage);
	
	//for calculating the gross pay
	if(hours>40)
	{
		gross=(40*wage)+((hours-40)*wage*0.5);
	}
	else
	{
		gross=hours*wage;
	}
	
	//for calculating the taxes
	if(gross<=600)
	{
		taxes=gross*0.15;
	}
	else
	{
		taxes=(600*0.15)+((gross-600)*0.2);
	}
	
	//for calculating the net pay
	net=gross-taxes;
	
	//outputs values for the gross pay, taxes and net pay
	printf("\nGross Pay: $%.2f", gross);
	printf("\nTaxes: $%.2f", taxes);
	printf("\nNet Pay: $%.2f\n", net);
	
	return 0;
}