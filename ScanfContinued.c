#include <stdio.h>
#include <stdlib.h>
void sIO(void);
int main54(){
    sIO();
}

void sIO(void){
    /**
    if you enter the address of the variable t, you will get the value of t.
    Inputting memory addresses. When professional programming, this kind should be avoided whenever possible.
    */
    //int t=67, *u;
    //printf("The address of t: %p\n", &t);
    //printf("Please input address: ");
    //scanf("%p", &u);
    //printf("Value at address: %d\n",*u);
  /**
  Scanset in scanf();
  */
  char ab[80];

   printf("Make a words with the letters abcdefghijk\n");
   scanf("%[abcdefghijk]",ab);
   printf("Word %d is %s\n", ab);

}
