#include <stdio.h> 
#include <stdlib.h>
#include <string.h>



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
		printf("|---------[Grade System]------------|\n");
		printf("|       a.Enter student grades      |\n");
		printf("|       b.Display student grade s   |\n");
		printf("|       c.Search for student grades |\n");
		printf("|       d.Grade ranking             |\n");
		printf("|       e.Exit system               |\n");
		printf("|-----------------------------------|\n");//menu
	
		printf("Please enter the menu number\n");	
		fflush(stdin); 
		scanf("%c",&a);
		
		switch(a)//choose the menu number
		{
			case 'A':
			case 'a':
				fflush(stdin);
				system("cls");
				
		    	
		    	
		    	
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
				
				
				
				system("pause");
				
				break;
			
			case 'D':
			case 'd':
				fflush(stdin);
				system("cls");
				
				
				
				system("pause");
				
				break;
			case 'E':
			case 'e':
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
/********************************************/ 
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
			printf("The password is incorrect %d time\n",i);
		}
		if(i==3)
		{ 
			printf("The password error limit has been reached\n");
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