#include <stdio.h>//將stdio.h這個檔案含括進來 
#include <stdlib.h>
#include <time.h>

#define ROWS 10 
#define COLS 9 

void style(void); 
void code(void);


void initialize_seating_chart(char chart[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            chart[i][j] = '_';
        }
    }
}


void display_seating_chart(char chart[ROWS][COLS]) {
    printf("座位表\n");/******/
    printf("\\ 1 2 3 4 5 6 7 8 9\n");
    for (int i = 9; i>0; i--) {
        printf("%d ", i);
        for (int j = 0; j < COLS; j++) {
            printf("%c ", chart[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int reserve_seat(char chart[ROWS][COLS], int row, int col) {
    if (chart[row][col] == '_') {
        chart[row][col] = '*';
        return 1;
    } else {
        return 0;
    }
}

void random_reserve_seats(char chart[ROWS][COLS], int num_seats) {
    int total_seats = ROWS * COLS;
    if (num_seats > total_seats) {
        printf("佔位數量超過可用座位數\n");
        return;
    }

    int reserved = 0;
    while (reserved < num_seats) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (reserve_seat(chart, row, col)) {
            reserved++;
        }
    }
}




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
		
		printf("Please enter the menu number\n");	
		fflush(stdin); 
		scanf("%c",&a);
		
		switch(a)//choose the menu number
		{
			case 'A':
			case 'a':
				fflush(stdin);
				system("cls");
				
		    	char seating_chart[ROWS][COLS];
    			int row, col;
				//chart [row][col];
    			srand(time(NULL));

    			initialize_seating_chart(seating_chart);
    			random_reserve_seats(seating_chart, 10);

    			printf("初始座位表 (隨機佔位10個)\n");
    			display_seating_chart(seating_chart);//呼叫 case_a副程式 
		    	
				system("pause");
				
				break;
				
			case 'B':
			case 'b':
				fflush(stdin);
				system("cls");
				
				
				
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
						printf("error range\n");
						printf("Please re-enter\n\a");
					} 
				}
				system("pause");
				break;
				
			default:
				printf("Please re-enter the menu number\n\a");
				
				system("pause");
				
				break;		
		
				
		}
			
			
		}
		
	

	system("pause"); 
	
	return 0;//return 0
	
} 

void code(void)//password loop
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
			
			system("pause"); //moniter pause
			
			break;
		}
		
		else
		{
			printf("error!\n");
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
void style(void)//personal picture 
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


