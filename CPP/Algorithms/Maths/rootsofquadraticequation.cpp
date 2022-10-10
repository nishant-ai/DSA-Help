// How to find roots of a quadratic equation//
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(){clrscr();
float a,b,c,d,e,f,g;
printf("Enter Variable Co-efficients \n");
scanf("%f %f %f",&a,&b,&c);
d=(b*b)-(4*a*c);
if (d<0)
printf("Roots are Imiginary \n");
else
 if(d>0)
 {printf("Roots are real and Unequal \n");
  e=(-b+sqrt(d))/(2*a);
  f=(-b-sqrt(d))/(2*a);
  printf("Roots are : %f %f",e,f);}
  else
  {printf("Roots are Real and Equal \n");
  g=-(b/(2*a));
  printf("Roots are :  %f",g);}
  getch();}
