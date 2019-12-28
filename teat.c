#pragma warning(disable : 4996)
#include<stdio.h>
#include<math.h>
#include<Windows.h>
int main()
{
	
	int i = 1; double sum = 0;
	for (i = 1; i < 100; i++)
		sum += 1 / i*(pow(-1, i + 1));
	printf("%lf\n", sum);
		
	

	system("pause");
	return 0;
}