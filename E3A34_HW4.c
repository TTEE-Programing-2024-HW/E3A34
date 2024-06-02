#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void style(void); 
void code(void);

struct Student 
{
    char name[50];
    int id;
    int math;
    int phy;
    int eng;
    float average;
}; 

struct Student students[10]; // student maximum is 10 
int student_count = 0;




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
		printf("|       b.Display student grades    |\n");
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
				
				printf("How many students ? (5~10): ");
    			while (scanf("%d", &student_count) != 1 || student_count < 5 || student_count > 10) 
				{
        				printf("error，Please enter the number between 5~10 : ");
        				fflush(stdin);
    			}

    			for (int i = 0; i < student_count; i++) 
				{
        			printf(" Please enter the name of student %d : ", i + 1);
        			while (scanf("%s", students[i].name) != 1) 
					{
            			printf("error，re-enter the name of student %d : ", i + 1);
            			fflush(stdin);
        			}

        			printf("Please enter the student number of the %d student(6 number): ", i + 1);
        			while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) //it have to enter from 100000 to 999999
					{
            			printf("error，re-enter the student number of the %d student(6 number): ", i + 1);
            			fflush(stdin);
        			}

        			printf("no. %d's math grade (0~100): ", i + 1);
        			while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) 
					{
            			printf("error,re-enter no. %d's math grade (0~100): ", i + 1);
            			fflush(stdin);
        			}

        			printf("no. %d's physics grade (0~100): ", i + 1);
        			while (scanf("%d", &students[i].phy) != 1 || students[i].phy < 0 || students[i].phy > 100) 
					{
            			printf("error,re-enter no. %d's physics grade (0~100): ", i + 1);
            			fflush(stdin);
        			}

        			printf(" no. %d's english grade(0~100): ", i + 1);
        			while (scanf("%d", &students[i].eng) != 1 || students[i].eng < 0 || students[i].eng > 100) 
					{
            			printf("error,re-enter no. %d's english grade (0~100): ", i + 1);
            			fflush(stdin);
        			}

        		
        			students[i].average = (students[i].math + students[i].phy + students[i].eng) / 3.0;	// average
    			}
		    	
		    	
		    	 
				system("pause");
				
				break;
				
			case 'B':
			case 'b':
				fflush(stdin);
				system("cls");
				for (int i = 0; i < student_count; i++) 
				{
        			printf("name: %s, student number: %d, math: %d, physics: %d, english: %d, average: %.1f\n",
               		students[i].name, students[i].id, students[i].math, students[i].phy, students[i].eng, students[i].average);//all student information
    			}
				
				
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