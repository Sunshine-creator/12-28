#include<stdio.h>
#include<windows.h>
#pragma waring(diaable :4996)

void main()
{
	int score;
	scanf("%d\n", &score);
	switch (score / 10)
	{
	case 10:
	case 9: printf("%d:A\n", score); break;
	case 8:
	case 7: printf("%d:B\n", score); break;
	case 6:  printf("%d:C\n", score); break;
	default: printf("%d:D\n", score);
		system("pause");


	}



}