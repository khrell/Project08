/*

Name: Program08

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 10-22-16

*/

#include <stdio.h>


total_votes(int a[], int b[], int c[], int d[]);

int main()
{
	int a[] = { 192, 147,186,114,267 };
	int b[] = { 48, 90, 12, 21, 13 };
	int c[] = { 206, 312, 121, 408, 382 };
	int d[] = { 37, 21, 38, 39, 29 };
	int precint[] = { 1,2,3,4,5 };

	
	int sum = total_votes(a,b,c,d);
	printf("The sum is: %d\n", sum);
	

	return;
}

int total_votes(int a[], int b[], int c[], int d[])
{
	int suma = 0;
	int i = 0;
	
	for (i = 0; i < 5; i++)
	{
		suma += a[i];	
	}
	return suma;
}
