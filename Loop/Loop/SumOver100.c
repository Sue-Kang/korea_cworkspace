#include <stdio.h>

int main()
{
	int n = 1;
	int sum = 0;

	/*for (n = 1; n < 15; n++)
	{
		sum += n;
	}
	printf("N = %d\n", n);
	printf("SUM = %d\n", sum);
	*/

	while (1)
	{
		sum += n;
		if (sum > 100)
			break;
		n++;
	}
	printf("N= %d\n", n);
	printf("SUM= %d\n", sum);

	return 0;
}