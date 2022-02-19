// SET C //
// C PROGRAM TO CREATE A TEXT-BASED MENU DRIVEN PROGRAM SO TO PERFORM MATHEMATICAL OPERATIONS  //




// TASK 2 //




#include<stdio.h>
#include<string.h>
int main()
{
void addition(double number1, double number2); 
void subtraction(double number1, double number2);
void division(double number1, double number2);
void multiplication(double number1, double number2);
int inputfunc=1;
double inputnum1=0;
double inputnum2=0;

while (inputfunc >= 1 && inputfunc <= 4) 
{
printf("Press 1 to add two numbers.\n");
printf("Press 2 to subtract two numbers.\n");
printf("Press 3 to multiply two numbers.\n");
printf("Press 4 to divide two numbers.\n");
printf("Press 5 to exit.\n");
printf("Enter your choice\n");
scanf("%d",&inputfunc);

if( inputfunc == 5) 
return(0);

printf("Enter both numbers with a space in between.");
scanf("%lf %lf", &inputnum1, &inputnum2);

void(*func[4])(double, double)={&addition, &subtraction, &division, &multiplication};
(*func[inputfunc-1])(inputnum1, inputnum2);
return(0);
}
}
void addition(double number1, double number2)
{
double answer;
answer=number1+number2;
printf("Addition of the two numbers = %lf + %lf = %lf\n", number1, number2, answer);
return ;
}

void subtraction(double number1, double number2)
{
double answer;
answer=number1-number2;
printf("By subtracting the two numbers results are %lf - %lf = %lf\n", number1, number2, answer);
return ;
}

void multiplication(double number1, double number2)

{
double answer;
answer=number1*number2;
printf("By multiplying the two numbers results are %lf * %lf = %lf\n", number1, number2, answer);
return ;
}



void division(double number1, double number2)

{
double answer;
answer=number1/number2;
printf("By dividing the two numbers results are %lf / %lf = %lf\n", number1, number2, answer);
return ;
}
