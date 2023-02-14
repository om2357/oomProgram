#include<stdio.h>

int main()
{
    int grade;
    printf("enter your grade ");
    scanf("%d",&grade);
    switch (grade/10)
    {
    case 9:
        grade>=90;
        printf("your grade is A \n");
        break;
    case 8:
        grade<=80 || grade>=89;
        printf("your grade is B\n");
        break;
    case 7:
        grade<=70 || grade>=79;
        printf("your grade is C\n");
        break;
    case 6:
        grade<=60 || grade>=69;
        printf("your grade is D\n");
        break;
    case 5:
        grade<50;
        printf("your are fail F\n");
        break;
    default:
        grade>100;
        printf("invalid input !\n");
        break;
    }
    return 0;
}