//This file is working on functions.
//Remember that pointers must be initialized before they are used.
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void swapValue(int a, int b);
void swapReference(int *p, int *y);
void print_upper(char *s);
int main12t(){
    //This is to demo passing by reference.
    int a=9, b=10;
    printf("Initial values\na: %d, b: %d\n", a,b);
    swapValue(a,b);
    printf("Initial values\na: %d, b: %d\n", a,b);
    //this is the passing by value.
   int c=133, d=938;
   printf("Initial values\na: %d, b: %d\n", c,d);
   swapReference(&c,&d);
   printf("Initial values\na: %d, b: %d\n", c,d);

   char s[90];
   printf("Enter a string: ");
   gets(s);
   print_upper(s);
   printf("The string is now upper: %s", s);

}
//This function allows passing by reference. This method enables you too change the values.
void swapValue(int p, int y){
   int temp;
   temp = p;
   p =y;
   y= temp;
}
void swapReference(int *p, int *y){
   int temp;
   temp = *p;
   *p =*y;
   *y= temp;
}

void print_upper(char *s){
register int t;
for(t=0; s[t]; ++t){
    s[t]= toupper(s[t]);
    putchar(s[t]);
}

}
