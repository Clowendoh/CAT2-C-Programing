//program for showing structures

/*
Author: Clowen Wendoh
Date: Thursday, 7th November 2024
Aim: show how you can implement a structure
*/

#include <stdio.h>//for printf() and scanf()
#include <string.h>//for strcpy()

//user defined structure with the desired data types for the program
struct employee
{
	//"[]"-for the maximum amount of characters allowed to be inputed
	char name[25], department[20], email[50];
	int id;
	float salary;
}info;//"info"-for linking the structure with the main 

int main()
{
	//"strcpy()"-for copying strings
	strcpy(info.name, "John Doe");
	info.id=12345;
	strcpy(info.department, "Human Resources");
	info.salary=55000.50;
	strcpy(info.email, "john.doe@company.com");
	
	//for outputting the values in the respective fields
	printf("Name: %s", info.name);
	printf("\nID: %d", info.id);
	printf("\nDepartment: %s", info.department);
	printf("\nSalary: %f", info.salary);
	printf("\nemail: %s", info.email);
	
	return 0;
}