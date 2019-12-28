#pragma warning(disable : 4996)

#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<string.h>

//int  fac(int n)
//{
//	int sum = 1;
//	printf("%d! :", n);
//	for (; n > 0; n--)
//	{ 
//		if (n == 1)
//		{
//			printf("%d=",n);
//		}
//		else
//		{
//			printf("%d*",n);
//		}
//
//		sum *= n;
//	}
//	
//	printf("%d\n", sum);
//	return sum;
//}

int main()
{
	int a[] = { 1, 4, 5, 87, 99, 134, 456, 888, 666 };
	int num = sizeof(a) / sizeof(a[0]);
	int left = 0;
	int n = 0;
	int right = num - 1;
	int mid = (left + right) / 2;
	
	printf(" please enter a number  for looking :");
	scanf(" %d\n", &n);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (n > a[mid])
		{
			left = mid + 1;

		}
		else if (n < a[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf(" found  : %d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf(" error ! check the number and try again ");
		return -1;
	}
	system("pause");
	return 0;
} 

	/*///*int i = 0;    ±éÀúµÄ
	for (; i < num; i++)
	{
		if (a[i] == m)
			break;
	}
	if (i == num)
	{
		printf("not found !\n");     
	}
	else
	{
		printf(" found : %d\n", i);
	}*/
	


	

	/*int sum = 0;
	int i = 1*/;
	/*printf("please enter n:");
	scanf("%d", &n);*/
	/*for (; i <11; i++)
	{
		sum += fac(i);
	}
	printf(" %d\n", sum);
	system("pause");*/
	



	

	/*char arr1[] = "weclome to bit.......";
	char  arr2[] = "#####################";
	;
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\r", arr2);
		Sleep(1000);
	}
	printf("\n");*/

	