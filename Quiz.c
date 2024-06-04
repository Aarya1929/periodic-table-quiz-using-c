#include<stdio.h>
#include<stdlib.h>
char name[30];
int userScore=0,countQ=0,countA=0;
void calculateScore()
{   
    printf("\t\t\t\t\t\t--------\n");
    printf("\t\t\t\t\t\t|RESULT|\n");
    printf("\t\t\t\t\t\t--------\n");
    printf("\t\t\t\t\tYou attempted %d questions.\n",countA);
    if (userScore >= 80&&userScore <= 100)
    {
        printf("\t\t\t\t\tYour Total Score = %d Points\n",userScore);
        printf("\t\t\t\t\tYour %d Questions are correct.\n",countQ);
    }
    else if(userScore >= 60&&userScore < 80)
    {
       
        printf("\t\t\t\t\tYour Total Score = %d Points\n",userScore);
        printf("\t\t\t\t\tYour %d Questions are correct.\n",countQ);
    }
    else if(userScore >= 40&&userScore < 60)
    {
        
        printf("\t\t\t\t\tYour Total Score = %d Points\n",userScore);
        printf("\t\t\t\t\tYour %d Questions are correct.\n",countQ);
    }
    else if(userScore >= 0&&userScore < 40)
    {
        
        printf("\t\t\t\t\tYour Total Score = %d Points\n",userScore);
        printf("\t\t\t\t\tYour %d Questions are correct.\n",countQ);
        printf("\nWell Tried! ");
        printf("Revise 'The Periodic Table' here - https://www.britannica.com/science/periodic-table");
    }    
    exit(0);
}
char result(char choose,char correct)
{   
    countA++;
    char next;
    if (choose==correct)
    {
        countQ++;
        userScore=userScore+10;
        printf("\n  Correct Answer!!\n");
        printf("> Enter (Y) to Continue ");
        printf("or Enter (N) to Quit\n");
        printf("> (Y/N) : ");
        fflush(stdin);
        //printf("\n----------------------------------------------------------------------------------------------------------");
        scanf("%c",&next);
        printf("---------------------------------------------------------------------------------------------------------------\n");
        return(next);
    }else
    {
        printf("\n  Oops! Wrong Answer\n");
        printf("> Enter (Y) to Continue ");
        printf("or Enter (N) to Quit\n");
        printf("> (Y/N) : ");
       // printf("\n----------------------------------------------------------------------------------------------------------");
        fflush(stdin);
        //printf("\n----------------------------------------------------------------------------------------------------------");
        scanf("%c",&next); 
		printf("---------------------------------------------------------------------------------------------------------------\n");       
        return(next);
    }
}
void question()
{
    char choose,correct;
    printf("Q1.Which element is in group 2 and period 3 of the periodic table?\n");
    printf("\n(a)Calcium\t(b)Boron\n");
    printf("(c)Magnesium\t(d)Carbon\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='c';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    } 
    printf("Q2.How are the elements of the period arranged in the modern periodic table, from left to right?\n");
    printf("\n(a)In order of increasing atomic number\t(b)In order of increasing atomic mass\n");
    printf("(c)In order of decreasing atomic mass\t(d)In order of decreasing atomic number\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='a';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }   
    printf("Q3.An atom of an element has the electronic structure 2,8,8,1. How many electrons are in the shell nearest the nucleus?\n");
    printf("\n(a)1\t(b)2\n");
    printf("(c)3\t(d)8\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='b';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }   
    printf("Q4.Which element is located in Group 4 and Period 3\n");
    printf("\n(a)Gallium(Ga)\t(b)Germanium(Ge)\n");
    printf("(c)Aluminium(Al)\t(d)Silicon(Si)\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='d';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }   
    printf("Q5.Where is the element with the electron arrangement: 2,8,8,2 found in the periodic table\n");
    printf("\n(a)The element is found in period 2 and group 2\t\t(b)The element is found in period 4 and group 4\n");
    printf("(c)The element is found in period 4 and group 2\t\t(d)The element is found in period 2 and group 6\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='c';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("Q6.The first period of the periodic table contains _____ elements\n");
    printf("\n(a)2\t(b)18\n");
    printf("(c)4\t(d)15\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='a';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("Q7.All the elements in a group in the periodic table have the same\n");
    printf("\n(a)Atomic number\t(b)Same number of valence electrons\n");
    printf("(c)Atomic weight\t(d)None of the above\n");
   printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose); 
    correct='b';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("Q8.Group I elements are called as ________\n");
    printf("\n(a)Noble gases\t(b)Alkali metals\n");
    printf("(c)Chalcogens\t(d)Halogens\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='b';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("Q9.The majority of the elements in the periodic table are:\n");
    printf("\n(a)Noble gases\t(b)Non metals\n");
    printf("(c)Metals\t(d)Metalloids\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("Q10.What is the symbol for potassium in a periodic table?\n");
    printf("\n(a)Po\t(b)Na\n");
    printf("(c)P\t(d)K\n");
    printf("\t\n> Enter Your Answer : ");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    calculateScore();
}
void menu()
{
    char ch;
    printf("\n\t\t\t\t\t          Hello %s!!\n\n",name);
    printf("\t\t\t\t\t          INSTRUCTIONS\n");
    printf("\t\t\t\t  1. Enter the appropriate option to answer.\n");
    printf("\t\t\t\t  2. You need to answer 10 questions.\n");
    printf("\t\t\t\t  3. Every question consists of 10 points.\n");
    printf("\n\t\t\t\t    > Enter (1) To Start Quiz \n");
    printf("\t\t\t\t    > Enter (0) To Quit\n");
    printf("\t\t\t\t    > Enter (1/0) = ");
    //fflush(stdin);
    scanf("%d",&ch);
    if(ch==1)
    {
    	printf("\n\t\t\t\t            ---------------------");
    	printf("\n\t\t\t\t            || The Game Begins ||");
    	printf("\n\t\t\t\t            ---------------------\n\n");
        question();
        calculateScore();
    }
	else
    {
        exit(0);
    }
}
void main()
{
    printf("\n\t\t\t\t\t            WELCOME ");
    printf("\n\t\t\t\t\t              TO ");
    printf("\n\t\t\t\t\t       PERIODIC TABLE QUIZ ");
    printf("\n\t\t\t\t    ----------------------------------------");
    printf("\n\t\t\t\t    ----------------------------------------");
    printf("\n\t\t\t\t        LEARN ABOUT THE PERIODIC TABLE    ");
    printf("\n\t\t\t\t           THROUGH THIS QUIZ GAME    ");
    printf("\n\t\t\t\t    ----------------------------------------");
    printf("\n\t\t\t\t           PRESENTED TO YOU BY L12    ");
    printf("\n\t\t\t\t    ----------------------------------------");
    printf("\n\t\t\t\t    ----------------------------------------");
    printf("\n\t\t\t\t            Enter Your Name - ");
    gets(name);
    
    menu();
}
