
#include <iostream>
#include <time.h>

#include<stdio.h>
#include<stdlib.h>

void game()
{
	int num1 = 0;
	int num3 = 0;
	num3 = rand()%100;
	/*printf("%d\n", num3);*/
	printf("猜数字\n");

	while (1)
	{

		scanf_s("%d", &num1);
			if(num1 >num3)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
				
				printf("\t\t\t\t\t\t\t猜大了\n");

			}
			else if(num1  < num3) 
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("\t\t\t\t\t\t\t猜小了\n");
			
			}
			else
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("\t\t\t\t\t\t\t恭喜猜对了\n");
				printf("\t\t\t\t\t\t\t按 “1” 继续游戏\n");
				printf("\t\t\t\t\t\t\t按 “2” 退出游戏\n");
				break;
			}

	}

}



int main()
{
   int num = 0;
   
   srand((unsigned int)time(NULL));
again:
   printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t*******************************\n");
    printf("\t\t\t\t\t\t*******************************\n");
    printf("\t\t\t\t\t\t********* 1.开始游戏 **********\n");
    printf("\t\t\t\t\t\t********* 2.退出游戏 **********\n");
    printf("\t\t\t\t\t\t*******************************\n");
    printf("\t\t\t\t\t\t*******************************\n");
	
	do
	{
				
		scanf_s("%d", &num);
		switch(num)
		{ 
		
		case 1:

			game();

			break ;
		case 2:
			printf("退出游戏\n");
		
			break ;
		
		default:
			printf("输入错误\n");
			
			goto again;
		
		}		


	} while (num == 1);
	

}


