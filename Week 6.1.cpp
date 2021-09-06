#include <stdio.h>
#include <math.h>
int main() 
{
int input;
int a[8] = {1,5,10,20,50,100,500,1000};
	scanf("%d", &input);	
	if (input>=1000)
	{
		printf("1000 baht = %d banknote",input/a[7]);
		if (input/a[7]>=2)
		{
			printf("s");
		}
		input%=a[7];
		printf("\n");
	}
	 if (input>=500)
	{
		printf(" 500 baht = %d banknote",input/a[6]);
		if (input/a[6]>=2)
		{
			printf("s");
		}
		input%=a[6];
		printf("\n");
	}
	 if (input>=100)
	{
		printf(" 100 baht = %d banknote",input/a[5]);
			if (input/a[5]>=2)
		{
			printf("s");
		}
		input%=a[5];
			printf("\n");
	}
	 if (input>=50)
	{
		printf("  50 baht = %d banknote",input/a[4]);
			if (input/a[4]>=2)
		{
			printf("s");
		}
		input%=a[4];
			printf("\n");
	}
	 if (input>=20)
	{
		printf("  20 baht = %d banknote",input/a[3]);
		if (input/a[3]>=2)
		{
			printf("s");
		}
		input%=a[3];
			printf("\n");
	}
	 if (input>=10)
	{
		printf("  10 baht = %d coin",input/a[2]);
			if (input/a[2]>=2)
		{
			printf("s");
		}
		input%=a[2];
			printf("\n");
	}
	if (input>=5)
	{
		printf("   5 baht = %d coin",input/a[1]);
			if (input/a[1]>=2)
		{
			printf("s");
		}
		input%=a[1];
			printf("\n");
	}
	 if (input>=1)
	{
		printf("   1 baht = %d coin",input/a[0]);
			if (input/a[0]>=2)
		{
			printf("s");
		}
		input%=a[0];
		printf("\n");
	}


 return 0; 
}
		


