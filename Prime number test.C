#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,d;
	// clrscr();

	printf("\nEnter the value:-");
	scanf("%d",&a);
	d=a%2;

	if(a==2){
		printf("\nThe number is a prime number");

		}

	else if(d!=0)
		{

		printf("\nThe number is prime number");
			  }


	else{
		printf("The number is not prime number");

	}
    
	getch();
	return 0;
}
