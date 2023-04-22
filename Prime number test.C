#include<stdio.h>
//hi

int main()
{
	int a,i,flag=0;

	printf("Enter the number you want to test :-");
	scanf("%d",&a);
	

	for (i=2;i<a;i++)
	{

		if (a%i==0){

			
			flag=1;
			printf("The number is not a prime number");
			break;
		}
	}

	if(flag==0){

		printf("The number is a prime number");
	}

	return 0;	
}
