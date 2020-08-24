/*
The void specified in the functions are the right way to declare functions that do not take in parameters.
this helps the compiler to compiler the right programs checking whether there are parameters or not.
This is how I must right all the professional codes in c because it is not Java and the rest of them.
*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

char *dictionary[][80]={
   "Atlas", "List of maps!",
   "Boy", "The opposite to the unknown species",
   "Cup", "Something for holding drinking fluids!",
   "Ball", "Around item for playing."
};

void getCharatcer(void);
void StringReader();
void sampleProgram();
void pFunct(void);
void sfFunc(void);

int maiasn(){
  printf("ConsoleIO%%\n");
 // getCharatcer();
 //StringReader();

 //sampleProgram();
 //pFunct();
 //sfFunc();
}

/*
The getchar(char), getch(), getche();
These are for reading and printing single characters single characters.
*/
void getCharatcer(void){
char ch;
  printf("Enter some text(enter a period to exit).\n");
  do{
    ch= getche();
    if(islower(ch)) ch=toupper(ch);
    else ch=tolower(ch);
    putchar(ch);
    printf("%c", ch);

  }while(ch!='.');
}
/*
The functions for reading strings. gets();
*/
void StringReader(void){
  char arr[100];
  gets(arr);
  puts(arr);
  //printf("The string entered is: %s\nThe length is: %d", arr, strlen(arr));
}

/*
A program for demonstrating non formatted IO.
*/
void sampleProgram(){
   char y_n, word[80];
   char **p;
   do{
        puts("Enter a word to be checked: ");
       scanf("%s", word);
       p=(char **) dictionary;
    do{
        if(!strcmp(*p, word)){
            puts("Meaning:");
            puts(*(p+1));
            break;
        }
        if(strcmp(*p, word)) break;
        p=p+2;

    }while(*p);
    if(!*p) puts("Word not in dictionary!\n");
    puts("\nDo you want to continue: y/n");
    y_n= getch();

   }while(toupper( y_n)!= 'N');

}

void pFunct(void){
/*
 Trying the %n format.
 These are all for the printf() function.
 */
 int b;
 printf("Hello world!%n \n ", &b);
 printf("Characters: %d\n", b);
 /*Trying the minimum character specifier.*/
 printf("%20sHello again.\n","Hello the");
 /*Using the min to create tables.
  This example and many others are from the book though.
  */
 int i;
  printf("%8s %8s %8s\n", "Number", "Square", "Root");
 for(i=0; i<30; i++) printf("%8d %8d %8d\n", i, i*i, i*i*i);
 /*
 Demo for pricision specifier
 first is for integers.
 Second is for floaters
 third is for strings
 */

 printf("%.8d\n", 3673);
 printf("%2.2f\n", 764.565);
 printf("%4.7s\n", "Hello demo");
/*
Justification of the characters in the string and staff.
*/

printf("Justified right:%10d\n", 6321);
printf("Justified left:%-8d\n", 1029);

}

void sfFunc(void){
    /*
    reading with the %o and %x
    */
    int i, j, k;
    char a[90], b[89], c,d,e;
    scanf("%o%x", &i, &j);
    printf("%o %x\n", i, j);
    //scanf("%c%c%c", &c, &d,&e);
    //printf("%c%c%c\n", c,d,e);

    scanf("%s", a);
    printf("%s",  a);



}

