#include<stdio.h> 
#include<stdlib.h>

int i,u;
char z;
char x,d;


void star(void);
int main(void)
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
	printf("    eeeee                ee      \n");//個人畫面 
	
	system("pause");
	system("CLS");               //清除畫面
	
	int pass,i=0;//密碼變數宣告
	
	printf("password:11034\n");
	printf("請輸入5位數字密碼:");
	for(i=1;i<4;i++)
	{
		scanf("%d",&pass);
		if(pass==11034)
		{
			printf("correct!\n");
			printf("wellcome!\n");
			break;
		}
		else
		{
			printf("wrong!\n");
			printf("密碼已錯誤%d次\n",i);
		}
		if(i==3)
		{
			printf("waring! 密碼錯誤已達上限\n",i);
				system("pause");
				return 0;
		}
	}
	
	
	system("CLS");
	fflush(stdin);
	

	
    
	while(1)
	{
		system("CLS");
		if(d=='n'||d=='N')
		break;
		
		printf("-----------------------------\n");
		printf("| 主選單 |\n");
		printf("-----------------------------\n");
		printf("| a. 畫出直角三角形 |\n");
		printf("| b. 顯示乘法表     |\n");
		printf("| c. 結束           |\n");
		printf("-----------------------------\n");    //主選單 
		
		printf("請輸入選單編號\n");
		scanf("%c",&x);
		
		star();
		i++;
	} 
	
	system("pause");
	return 0;
} 
/**********************************************************************/

void star(void)
{
	switch(x)
	{
		case 'A':
		case 'a':
			printf("請輸入一個a到n的字元");
			fflush(stdin);
	        	scanf("%c",&z) ;
	        	
			while(1)
			{
				if(z>='a'&&z<='n')
				{
					for(char i=0;i<=z;i++)
					{
						for(char j=1;j<=z-i;j++)
						{
							printf(" ");
						}
						
						for(char n=1;n<=i;n++)
						{
							printf("%c",n);
						} 
						printf("\n");
				
					}
					
					system("pause");
					fflush(stdin);
					return;	
				}
				
				else
				{
					printf("error range\n");
					printf("請輸入一個a到n的字元");
				}
			}
			
			
			
			break;
		
		case 'B':
		case 'b':
			while(1)    //乘法迴圈 
			{
				printf("請輸入 1 到 9 之間的整數：");
				scanf("%d", &u);
			
				if(u >= 1 && u <= 9) 
				{
        	
            		for(int i = 1; i <= u; ++i) 
					{
        				for(int j = 1; j <= u; ++j) 
						{
            			printf("%3d ", i * j);
        				}
        				printf("\n");	
    				}
    				system("pause");
    				system("CLS");
    				fflush(stdin);
            		return;
        		} 
				else 
				{
            		printf("警告：輸入數字不在範圍內！\n");
        		}
			}
			
			
			break;
		case'C':
		case'c':
			printf("Continue? (y/n)\n");//結束迴圈 
			scanf("%c",&d);
			while(scanf("%c",&d))
			{
				if (d == 'Y' || d == 'y') 
				{
					fflush(stdin);
    				return;
				} 
				else 
				{
   					 if (d == 'N' || d == 'n') 
					{
        				break;
    				} 
					else 
					{
        				printf("error range !\n");
        				printf("please enter y/n !\n");
    				}
				}
			}
			
			
			
			break;
		
		default:
			fflush(stdin);
			printf("無法執行\n請輸入選單編碼\n");
			
			system("pause");
			system("CLS"); 
			return;
	}
	
	return;
}

/*心得: 
這學期的交作業方式很不一樣，這也讓我也學習到了更深一層的理解，
有許多的路徑要去設定，也促使著我去問同學問題
git hub 的設置以軟體工程師來說真的蠻重要的，
也不再侷限一定樣坐在辦公室才能合作，打破地域的限制 ，
程式作業的第一題沒能做到像老師所要求，做完此次作業還會向老師問問題，
至於第二個B的部分並沒有照傳統排序，是以方格方式呈現 。 
*/ 