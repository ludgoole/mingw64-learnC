#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//注意加入的头文件，少了头文件会出错．代码要有自己的风格，我的风格就是声明放在代码上，注释放在代码下方

int main(void)
{
	char SelectKey,CreditMoney,DebitMoney;
	while(1)
	{
		do{
			
			puts("=========================");
			puts("|  Please select key:   |");
			puts("|  1. Quary             |");
			puts("|  2. Credit            |");
			puts("|  3. Debit             |");
			puts("|  4. Return            |");
			puts("=========================");
			SelectKey = getch();system( "cls ");
		}while( SelectKey!='1' && SelectKey!='2' && SelectKey!='3' && SelectKey!='4' );
		switch(SelectKey)
		{
			case '1':
				
				puts("================================");
				puts("|    Your balance is $1000.    |");
				puts("|  Press any key to return...  |");
				puts("================================");
				getch();system( "cls ");
				break;
			case '2':
				do{
					
					puts("==================================");
					puts("|   Please select Credit money:  |");
					puts("|   1. $50                       |");
					puts("|   2. $100                      |");
					puts("|   3. Return                    |");
					puts("==================================");
					CreditMoney = getch();system( "cls ");
				}while( CreditMoney!='1' && CreditMoney!='2' && CreditMoney!='3' );
				switch(CreditMoney)
				{
					case '1':
						
						puts("=========================================");
						puts("|  Your Credit money is $50,Thank you!  |");
						puts("|         Press any key to return...    |");
						puts("=========================================");
						getch();system( "cls ");
						break;
					case '2':
						
						puts("==========================================");
						puts("|  Your Credit money is $100,Thank you!  |");
						puts("|         Press any key to return...     |");
						puts("==========================================");
						getch();
						break;
					case '3':
						break;
				}
				break;
			case '3':
				do{
					
					puts("====================================");
					puts("|   Please select Debit money:     |");
					puts("|   1. $50                         |");
					puts("|   2. $100                        |");
					puts("|   3. $500                        |");
					puts("|   4. $1000                       |");
					puts("|   5. Return                      |");
					puts("====================================");
					DebitMoney = getch();system( "cls ");
				}while(	DebitMoney!='1' && DebitMoney!='2' && DebitMoney!='3' \
				 && DebitMoney!='4' && DebitMoney!='5' );
				switch(DebitMoney)
				{
					case '1':
						
						puts("===========================================");
						puts("|   Your Debit money is $50,Thank you!    |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();system( "cls ");
						break;
					case '2':
						
 						puts("===========================================");
						puts("|   Your Debit money is $100,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();system( "cls ");
						break;
					case '3':
						
						puts("===========================================");
						puts("|   Your Debit money is $500,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();system( "cls ");
						break;
					case '4':
						
						puts("===========================================");
						puts("|   Your Debit money is $1000,Thank you!  |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();system( "cls ");
						break;
					case '5':
						break;
				}
				break;
			case '4':
				
				puts("================================");
				puts("|   Thank you for your using!  |");
				puts("|            Good bye!         |");
				puts("================================");
				return(1-1);
		}
	}
}