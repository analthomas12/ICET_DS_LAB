#include<stdio.h>
void main()
{
char operator;
float num1,num2,result;
printf("enter the first number:");
scanf("%f",&num1);
printf("enter the second number:");
scanf("%f",&num2);
printf("enter the operator(+,-,*,/):");
scanf("%c",&operator);

switch(operator)
{
  case'+':result=num1+num2;
          printf("%.2f+%.2f=%.2f\n",num1,num2,result);
          break;
  case'-':result=num1-num2;
          printf("%.2f-%.2f=%.2f\n",num1,num2,result);
          break;
  case'*':result=num1*num2;
          printf("%.2f*%.2f=%.2f\n",num1,num2,result);
          break;        
  case'/':if(num2!=0)
          {
              result=num1/num2;
              printf("%.2f/%.2f=%.2f\n",num1,num2,result);
         
          }
          else
          {
          printf("Error! division by zero.\n");
          }                 
          break;
 default:printf("invalid operator!plese use+,-,*,or/.\n");
         break;
         }
         }
