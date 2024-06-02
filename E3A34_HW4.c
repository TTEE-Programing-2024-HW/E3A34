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

	
	
	style();
	code();

	while(1)
	{
		
		char a,o;
	
		system("CLS");// Clear the screen
		
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
			case 'A'://seting student data
			case 'a':
				fflush(stdin);//Clean data
				system("cls");// Clear the screen
				
				printf("How many students ? (5~10): ");//for how many
    			while (scanf("%d", &student_count) != 1 || student_count < 5 || student_count > 10) 
				{
        				printf("error，Please enter the number between 5~10 : ");
        				fflush(stdin);
    			}

    			for (int i = 0; i < student_count; i++) 
				{
        			printf(" Please enter the name of student %d : ", i + 1);//for name
        			while (scanf("%s", students[i].name) != 1) 
					{
            			printf("error，re-enter the name of student %d : ", i + 1);
            			fflush(stdin);
        			}

        			printf("Please enter the student number of the %d student(6 number): ", i + 1);// for student number
        			while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) //it have to enter from 100000 to 999999
					{
            			printf("error，re-enter the student number of the %d student(6 number): ", i + 1);
            			fflush(stdin);
        			}

        			printf("no. %d's math grade (0~100): ", i + 1);//for math
        			while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) 
					{
            			printf("error,re-enter no. %d's math grade (0~100): ", i + 1);
            			fflush(stdin);
        			}

        			printf("no. %d's physics grade (0~100): ", i + 1);//for phy
        			while (scanf("%d", &students[i].phy) != 1 || students[i].phy < 0 || students[i].phy > 100) 
					{
            			printf("error,re-enter no. %d's physics grade (0~100): ", i + 1);
            			fflush(stdin);
        			}

        			printf(" no. %d's english grade(0~100): ", i + 1);//for eng
        			while (scanf("%d", &students[i].eng) != 1 || students[i].eng < 0 || students[i].eng > 100) 
					{
            			printf("error,re-enter no. %d's english grade (0~100): ", i + 1);
            			fflush(stdin);
        			}

        		
        			students[i].average = (students[i].math + students[i].phy + students[i].eng) / 3.0;	//calculate average
    			}
		    	
		    	
		    	 
				system("pause");//moniter pause
				
				break;
				
			case 'B':
			case 'b':
				fflush(stdin);//Clean data
				system("cls");// Clear the screen
				for (int i = 0; i < student_count; i++) 
				{
        			printf("name: %s, student number: %d, math: %d, physics: %d, english: %d, average: %.1f\n",
               		students[i].name, students[i].id, students[i].math, students[i].phy, students[i].eng, students[i].average);//all student information
    			}
				
				
				system("pause");//moniter pause
				
				break;
				
			case 'C':
			case 'c':
				fflush(stdin);//Clean data
				system("cls");// Clear the screen
				{
					char search_name[50];
				
    				printf("search name: ");
    				scanf("%s", search_name);

				}
				
    			char search_name[50];
    			
    			for (int i = 0; i < student_count; i++) 
				{
        			if (strcmp(students[i].name, search_name) == 0) //if founding student print information of student //from lab 10  
					{
						
            		printf("name: %s, student number: %d, math: %d, physics: %d, english: %d, average: %.1f\n",
                    students[i].name, students[i].id, students[i].math, students[i].phy, students[i].eng, students[i].average);
                   
            		break;
            		
        			}
        			else
        			{
        			printf("It doesn't exist \n");
    				}
        				
    			}

				system("pause");//moniter pause
				
				break;
			
			case 'D':
			case 'd':
				fflush(stdin);//Clean data
				system("cls");// Clear the screen
				
				 for (int i = 0; i < student_count - 1; i++)//Bubble Sort
				{
        			for (int j = 0; j < student_count - 1 - i; j++) 
					{
            			if (students[j].average < students[j + 1].average)
						{
                			struct Student temp = students[j];//ratio size
                			students[j] = students[j + 1];
                			students[j + 1] = temp;
            			}
        			}
    			}

    			for (int i = 0; i < student_count; i++) //Print student information order by average score
				{
				
        		printf("name: %s, student number: %d , average: %.1f\n",
				students[i].name, students[i].id, students[i].average);
        		
    			}
    			
				system("pause");//moniter pause
				
				break;
			case 'E'://Clean data
			case 'e': //jump out system
			fflush(stdin);
				system("cls");// Clear the screen
				
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
				system("pause");//moniter pause
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
/*心得: 
    寫switch時編譯一直出現error，有翻閱講義及實驗講義來查早答案，當然也有查閱遺
    下網路，也有順利的解決，我想最難應該是 c跟d 了，尤其是c隨然不是寫得很完美但也
    盡力完成，寫了很久過程參考了在實驗課有提及的函數，有些意想不到的收穫。
	*/ 
