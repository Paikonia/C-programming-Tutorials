
/**The #include directives.*/
#include <stdio.h>
#include <stdlib.h>

/**The #define directives.*/
#define Mainn(a,b) a*b
#define hello "Hello world!!!\n"
#define number 1000

/**Structures and global variables*/

/**Function prototypes*/
void condition(void);

/**The main method*/
//int main(){
  //  printf(hello);
  //  printf("The product of %d and %d is: %d\n", 12, 23, Mainn(12,23));
   // condition();
//}
/**Functions for testing the other properties of the chapter*/
/*The conditional compile directives*/

void condition(void){
printf("This is in condition function\n");
#if number > 600
int count = 0;
for(int i = number; i>400; ){
     count++;
     printf("I: %d, Index: %d\n", i, count);
     i-=5;
  }
 #elif number > 400
 int count = 0;
for(int i = number; i>200; ){
     count++;
     printf("I: %d, Index: %d\n", i, count);
     i-=5;
  }

 #endif // number
}

/*other conditional directives*/

void conditonTwo(void){
    int a;
    printf("Hello there. Enter a number");
    scanf("%d",&a);

#ifdef Mainn(a, 13)>144
printf("The value is right!");

#endif // Mainn

}

