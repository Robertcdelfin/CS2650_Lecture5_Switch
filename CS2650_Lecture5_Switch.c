/*
 ============================================================================
 Name        : CS2650_Lecture5_Switch.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/**********************************************/
//Switch -- Can use in place of if/else or turnery
#include <stdio.h>

int main () {
   /* local variable definition */
   char grade = 'B';
   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   printf("Your grade is  %c\n", grade );
   return 0;
}
