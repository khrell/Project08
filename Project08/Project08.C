/*

Name: Program08

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 10-22-16

*/

#include <stdio.h>


int total_votesa(int a[]);
int total_votesb(int b[]);
int total_votesc(int c[]);
int total_votesd(int d[]);

int main()
{
	int a[] = { 192, 147,186,114,267 };
	int b[] = { 48, 90, 12, 21, 13 };
	int c[] = { 206, 312, 121, 408, 382 };
	int d[] = { 37, 21, 38, 39, 29 };
	int precint[] = { 1,2,3,4,5 };

	
	int suma = total_votesa(a);
	int sumb = total_votesb(b);
	int sumc = total_votesc(c);
	int sumd = total_votesd(d);
	
	printf("The sum is: %d\n",suma);
	printf("The sum is: %d\n", sumb);
	printf("The sum is: %d\n", sumc);
	printf("The sum is: %d\n", sumd);


	

	return;
}

int total_votesa(int a[])
{
	int suma = 0;
	int i = 0;
	
	for (i = 0; i < 5; i++)
	{
		suma += a[i];	
	}
	
	return suma;
}

int total_votesb(int b[])
{
	int i = 0;
	int sumb = 0;

	for (i = 0; i < 5; i++)
	{
		sumb += b[i];
	}
	return sumb;
}

int total_votesc(int c[])
{
	int i = 0;
	int sumc = 0;

	for (i = 0; i < 5; i++)
	{
		sumc += c[i];
	}
	return sumc;
}
int total_votesd(int d[])
{
	int i = 0;
	int sumd = 0;

	for (i = 0; i < 5; i++)
	{
		sumd += d[i];
	}
	return sumd;
}

