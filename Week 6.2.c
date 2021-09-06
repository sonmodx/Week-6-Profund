#include <stdio.h>
#include <string.h>
int main()
{
	int input;
	int a[8] = {1,5,10,20,50,100,500,1000};
	int count[8]= {0};
	scanf("%d", &input);
	int i=7;
	while (input)
	{
		while (input>=a[i])
			{
				input-=a[i];
					count[i]++;
			}
			i--;
	}
	for (int i=7;i>=3;i--)
	{
		if (count[i] != 0)
		{
			printf("%4d baht = %d banknote", a[i], count[i]);
			if (count[i]>=2)
			{
				printf("s");
			}
			printf("\n");
		}
	}
	for (int i=2;i>=0;i--)
	{
		if (count[i] != 0)
		{
			printf("%4d baht = %d coin", a[i], count[i]);
				if (count[i]>=2)
			{
				printf("s");
			}
			printf("\n");
		}
	}
	return 0;
}
