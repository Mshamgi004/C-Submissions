// SET C //
// C PROGRAM TO CREATE A TELEPHONE NUMBER WORD GENERATOR //




// TASK 1 //

#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<string.h>
#include<ctype.h>

void mapPrint(char * number)
{
int i=0;
while(number[i] != '\0')
{
if(strchr("abc",tolower(number[i])) != NULL)
{
   printf("%d",2);
}
else if(strchr("def",tolower(number[i])) != NULL)
{
   printf("%d",3);
}
else if(strchr("ghi",tolower(number[i])) != NULL)
{
   printf("%d",4);
}
else if(strchr("jkl",tolower(number[i])) != NULL)
{
   printf("%d",5);
}
else if(strchr("mno",tolower(number[i])) != NULL)
{
   printf("%d",6);
}
else if(strchr("pqrs",tolower(number[i])) != NULL)
{
   printf("%d",7);
}
else if(strchr("tuv",tolower(number[i])) != NULL)
{
   printf("%d",8);
}
else if(strchr("wxyz",tolower(number[i])) != NULL)
{
   printf("%d",9);
}
if(i == 2)
{
   printf("-");
}
i++;
}
   printf("\n");
}
char* getNumber(char * number, char * parsed)
{
int i=0,j=0;
while(number[i] != '\0' && j<7)
{
if(isalpha(number[i]) != 0)
{
parsed[j] = number[i];
j++;
}
i++;
}
}

int getRandomInRange(int lower, int higher)
{
return (rand() % (higher - lower + 1)) + lower;
}

void printPhoneNumber()
{

for(int i=0;i<8;i++)
{
if(i!=3)
{ 
   printf("%d", getRandomInRange(0,9));
}
else
{
   printf("-"); 
}
  
}
   printf("\n");
}
int main()
{
int n;

srand(time(0)); 
   printf("Enter telephone number using letters :"); 
char userneed[25];


gets(userneed); 
char parsedNumber[8];
getNumber(userneed, parsedNumber);
   printf("%s",parsedNumber);
while(strcmp(parsedNumber,"EXIT") != 0)
{ 
   printf(" Corresponding telephone number is :\n");
mapPrint(parsedNumber); 
   printf("Enter telephone number using letters :");
gets(userneed);
getNumber(userneed, parsedNumber);
}
return 0;
}
