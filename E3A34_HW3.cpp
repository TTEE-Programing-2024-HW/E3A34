#include <stdio.h>//將stdio.h這個檔案含括進來 
#include <stdlib.h>
#include <time.h>
void style(void); 
void code(void);
int main(void)
{
	//srand(time(NULL));
	
	
	style();
	code();

	while(1)
	{
		
		char a,o;
	
		system("CLS");
		
		printf(" ___________________________________\n");
		printf("|---------[Booking System]----------|\n");
		printf("|         a.Available seats         |\n");
		printf("|         b.Arrange for you         |\n");
		printf("|         c.Choose by yourself      |\n");
		printf("|         d.exit                    |\n");
		printf("|-----------------------------------|\n");//主選單
		
		printf("請輸入選單編號\n");	
		fflush(stdin);
		scanf("%c",&a);
		
		switch(a)//選擇程式 
		{
			case 'A':
			case 'a':
				fflush(stdin);
				system("cls");
				
		    	//case_a();//呼叫 case_a副程式 
		    	
				system("pause");
				
				break;
				
			case 'B':
			case 'b':
				fflush(stdin);
				system("cls");
				
				//case_b(n);//呼叫 case_b副程式 
				
				system("pause");
				
				break;
				
			case 'C':
			case 'c':
				fflush(stdin);
				system("cls");
				
				//case_c(n);
				
				system("pause");
				
				break;
				
			case 'D':
			case 'd':
			fflush(stdin);
				system("cls");
				
				printf("Continue? (Y/N)\n start again\n");
				while(scanf("%c",&o))
				{
					if(o=='Y'||o=='y')
						break;
					else if(o=='n'||o=='N')
					{
						printf("thanks!\n");
						
						system("pause");
						
						return 0;
					}
					else
					{ 
						printf("錯誤範圍\n");
						printf("請重新輸入\n\a");
					} 
				}
				system("pause");
				break;
				
			default:
				printf("請重新輸入選單編號\n\a");
				
				system("pause");
				
				break;		
		
				
		}
			
			
		}
		
	

	system("pause"); //螢幕畫面暫停，並等待使用者按任意鍵
	
	return 0;//回傳整數0
	
} 

void code(void)//密碼迴圈 
{
	int code,i;
	
	printf("2024\n");
	printf("enter the password\n");
	while(scanf("%d",&code))
	{
		
		if(code==2024)
		{
			printf("correct!\n");
			printf("wellcome!\n");
			
			system("pause"); //螢幕畫面暫停，並等待使用者按任意鍵
			
			break;
		}
		
		else
		{
			printf("密碼錯誤!\n");
			i++;
			printf("密碼已錯誤%d次\n",i);
		}
		if(i==3)
		{ 
			printf("密碼錯誤已達上限\n");
			abort();
			
			break;
		} 
		
		
	}
} 
void style(void)//個人畫面 
{
	
		printf("eeeeeeeee\n");
	printf("ee\n");
	printf("eeeeeeeee\n");
	printf("ee\n");
	printf("eeeeeeeee\n");
	printf("\n");
	printf("   eeeee\n");
	printf(" eeeeeeeee\n");
	printf("eee     eee\n");
	printf("     eeee\n");
	printf("     eeee\n");
	printf("eee     eee\n");
	printf(" eeeeeeeee\n");
	printf("    eeeee\n");
	printf("\n");
	printf("    e    \n");
	printf("   e e   \n");
	printf("  e   e  \n");
	printf(" eeeeeee \n");
	printf("e       e\n");
	printf("\n");
	printf("   eeeee             eeeeee      \n");
	printf(" eeeeeeeee          eeeeeee      \n");
	printf("eee     eee        ee    ee      \n");
	printf("     eeee         ee     ee      \n");
	printf("     eeee        eeeeeeeeeeeee   \n");
	printf("eee     eee     eeeeeeeeeeeeee   \n");
	printf(" eeeeeeeee               ee      \n");
	printf("    eeeee                ee      \n");
		
			
}