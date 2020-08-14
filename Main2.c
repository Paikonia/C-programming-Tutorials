#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void convergence(char *targ, char *src){
int i,j;
printf("%s\n", targ);
for(i=0, j=strlen(src);i<=j; i++, j--){
    targ[i] =src[i];
    targ[j] = src[j];
    printf("%s\n", targ);
}}
void login(){
  char th[30];
  for(int i =0;i<3 &&strcmp(th, "Password"); i++){
      printf("Enter password\n");
      scanf("%s", &th);
  }
  printf("You entered a correct password.");
}
void DemoFor(){
//this is a demo of basic for loop.
int z;
for(int i=100; i >= 50; i-=3){
    //When iterating through for loops, the control variable must be set to the new value.
    //Forexample in this for loop, something like (x-3) in place of i-=3 doesnt work.
    z= i*i;
    printf("The square of %d is %d\n", i, z);
}
//Application of comma for variation.
int x, y;
for(x=0,y=0; x+y<10; x+=2){
    --y;
    printf("The value for y is %d\nThe value of X is %d\n", y, x);
}
printf("\n");
//further variations.
for(x=100, y=0; y<=x; x--, y++){
    printf("X: %d, Y: %d\n", x,y);
}

}



void ifStatements();
void switchStatements();

int main21(){//name changed to avoid this main from being called.
     //if statement and ternary operator funtions.
      //ifStatements();
     //The switch statements function.
     //switchStatements();
     // DemoFor();
     // A cool example that I got from the book.
     //char targ[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
     //convergence(targ, "This is a cool example.");
     //printf("The final string is: %s\n", targ);
     //login();
     //infinite loop.
     int i = 0;//keeps track of the number of times the for loop has been called.
     for(;i<61;){
            i++;
        printf("This will run forever. Number of times so far: %d\n", i);
        sleep(1);
     }
}

void switchStatements(){
   char s1= 0;
   printf("\nChoose an option from the list by entering a number.\n1. Edit word. %s",
               "\n2. Input a new word \n3. Delete word. \n");
    scanf("%c", &s1);
    switch(s1){
case '1':
    printf("Edit word chosen.!! \nA function to be called has not been created. Sorry!!\n");

    break;
case '2':
    printf("Input new word chosen.!! \nA function to be called has not been created. Sorry!!\n");
    break;
case '3':
case '4':
     printf("Delete word chosen.!! \nA function to be called has not been created. Sorry!!\n");
    break;
default:
        printf("Wrong option chosen.!! \nA function to be called has not been created. Sorry!!\n");
    break;
    }
}

void ifStatements(){


    //if  statements
    int num, guess;
    printf("Enter a number!!\n");
    scanf("%d", &guess);
    num = rand();
    if(guess==num) printf("You have guessed right\n");
    else {

      if(num<guess) printf("Too high\n");
      else printf("Too low\n");
    }
    //ternary operator demonstrated below.

     printf("\nRight or wrong: %s",(num == guess) ? "Right" : "Wrong");
     int x=32,y=23;
     y = x>y? 132:123;
     printf("\n%d", y);

}
