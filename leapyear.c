#include<stdio.h>
 void main()
 {
  int y=1900;
   while(y<=2023)
   		if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
  			printf("%d is a leap year",y);
        y++;
       }
 }
