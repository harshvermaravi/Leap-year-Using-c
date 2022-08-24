#include<stdio.h>
void main ()
{
  int y;
  clrscr();
  printf("Enter the year: ");
  scanf("%d",&y);
  if(y%400==0)
  {
    printf("%d is leap year",y);
  }
  else if(y%100==0)
  {
    printf("%d is not leap year",y);
  }
  else if(y%4==0)
  {
    printf("%d is the leap year",y);
  }
  else{
   printf("the year is not a leap year",y);
  }
  getch();
  }
