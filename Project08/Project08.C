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
int print_chart(int precint[], int a[], int b[], int c[], int d[], double totala, double totalb, double totalc, double totald, int suma, int sumb, int sumc, int sumd);
int winner(double totala, double totalb, double totalc, double totald);
void order(double *smp, double *lgp);
void printCandidate(int candidate, int origA, int origB, int origC, int origD);

int main()
{
  
	// ------------------------- First Execution -------------------------
	/*intializes the arrays*/
	int a[] = { 192, 147,186,114,267 };
	int b[] = { 48, 90, 12, 21, 13 };
	int c[] = { 206, 312, 121, 408, 382 };
	int d[] = { 37, 21, 38, 39, 29 };
	int c2[] = { 206, 312, 121, 108, 382 };
	int precint[] = { 1,2,3,4,5 };
	
	/*sums the candidates total votes by precint*/
	int suma = total_votesa(a);
	int sumb = total_votesb(b);
	int sumc = total_votesc(c);
	int sumd = total_votesd(d);
	double total = suma + sumb + sumc + sumd; //gets the total votes for all candidates

	/*gets percentages of the candidates votes*/
	double totala = (100 * suma) / total;
	double totalb = (100 * sumb) / total;
	double totalc = (100 * sumc)/ total;
	double totald = (100 * sumd) / total;

	/*calls the method and prints the chart*/
	print_chart(precint,a,b,c,d,totala,totalb,totalc,totald,suma,sumb,sumc,sumd);
	
	/*calls the method and prints the winner of the election*/
	winner(totala,totalb,totalc,totald);
	
	/*orders the percentages*/
	order(&totala, &totalb);
	order(&totala, &totalc);
	order(&totala, &totald);
	order(&totalb, &totalc);
	order(&totalb, &totald);
	order(&totalc, &totald);

	printf("The numbers are: %.1f %.1f\n", totalc, totald);
	// -------------------------------------------------------------------

	// ------------------------- Second Exeution -------------------------
	/*sums the candidates total votes by precint*/
	suma = total_votesa(a);
	sumb = total_votesb(b);
	sumc = total_votesc(c2);
	sumd = total_votesd(d);
	total = suma + sumb + sumc + sumd; //gets the total votes for all candidates

											  /*gets percentages of the candidates votes*/
	totala = (100 * suma) / total;
	totalb = (100 * sumb) / total;
	totalc = (100 * sumc) / total;
	totald = (100 * sumd) / total;

	double origA = totala;
	double origB = totalb;
	double origC = totalc;
	double origD = totald;

	/*calls the method and prints the chart*/
	print_chart(precint, a, b, c, d, totala, totalb, totalc, totald, suma, sumb, sumc, sumd);

	/*calls the method and prints the winner of the election*/
	winner(totala, totalb, totalc, totald);

	/*orders the percentages*/
	order(&totala, &totalb);
	order(&totala, &totalc);
	order(&totala, &totald);
	order(&totalb, &totalc);
	order(&totalb, &totald);
	order(&totalc, &totald);

	//printf("The numbers are: %.1f %.1f\n", totalc, totald);
	// -------------------------------------------------------------------
	
	printCandidate(totalc, origA, origB, origC, origD);
	printCandidate(totald, origA, origB, origC, origD);

	return;
}

void printCandidate(int candidate, int origA, int origB, int origC, int origD) {
	if (candidate == origA) {
		printf("Candidate A\n");
	}
	else if (candidate == origB) {
		printf("Candidate B\n");
	}
	else if (candidate == origC) {
		printf("Candidate C\n");
	}
	else if (candidate == origD) {
		printf("Candidate D\n");
	}
}

int total_votesa(int a[]) //sums up Candidate A
{
	int suma = 0;
	int i = 0;
	
	for (i = 0; i < 5; i++)
	{
		suma += a[i];	
	}
	return suma;
}

int total_votesb(int b[]) //sums up candidate B
{
	int i = 0;
	int sumb = 0;

	for (i = 0; i < 5; i++)
	{
		sumb += b[i];
	}
	return sumb;
}

int total_votesc(int c[])  //sums up candidate C
{
	int i = 0;
	int sumc = 0;

	for (i = 0; i < 5; i++)
	{
		sumc += c[i];
	}
	return sumc;
}
int total_votesd(int d[]) //sums up candidate D
{
	int i = 0;
	int sumd = 0;

	for (i = 0; i < 5; i++)
	{
		sumd += d[i];
	}
	return sumd;
}

int print_chart(int precint[], int a[], int b[], int c[], int d[], double totala, double totalb, double totalc, double totald,int suma, int sumb,int sumc, int sumd)  //formats and prints the chart to the scren
{
	int i = 0;

	printf("Precint\t Candidate A\t Candidate B\t Candidate C\t Candidate D\n");
	printf("____________________________________________________________________\n");
	for (i = 0; i < 5; i++)
	{
		printf("   %d|\t %6d\t\t %6d\t\t %6d\t\t %6d\t\n", precint[i], a[i], b[i], c[i], d[i]);

	}
	printf("____________________________________________________________________\n");
	printf("Total\t %6d\t\t %6d\t\t %6d\t\t %6d \n",suma,sumb,sumc,sumd);
	printf("Percentage| %.1f%%\t   %.1f%%\t\t   %.1f%%\t   %.1f%% \n\n", totala, totalb, totalc, totald);

} 

int winner(double totala, double totalb, double totalc, double totald)
{
	
	if (totala > 50)
	{
		printf("The winner is Candidate A!\n\n");
	}
	else if (totalb > 50)
	{
		printf("The winner is Candidate B!\n\n");
	}
	else if (totalc > 50)
	{
		printf("The winner is Candidate C!\n\n");
	}
	else if (totald > 50)
	{
		printf("The winner is Candidate D!\n\n");
	}
			
	else
	{
		printf("There will be a runoff between the two highest !\n");
		//printf("The numbers are: %.1f %.1f\n", totalc, totald);
	}
}

void order(double *smp, double *lgp)
{
	
	double temp;

	if (*smp > *lgp) {
		temp = *smp;

		*smp = *lgp;
		*lgp = temp;

	}

}
