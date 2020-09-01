/**include directive for the standard library and other libraries declared by c.*/
#include <stdlib.h>
#include <stdio.h>

/**global variables and structures*/


/**Function prototypes*/
void allocator(int ab);
void caller(void);

/**The main method.*\/
int main(){
//printf("Main method!!!");
//allocator(25);
caller();
}

/**Function declaration*/
void allocator(int ab){
   int *p = (int*) calloc(ab ,sizeof(int));

   for(int i =0; i<ab; i++){
    p[i] = ((i+2)*4);
   }

   for(int i=0; i<ab; i++){
    printf("Index: %d, Value: %d, Location: %p\n", i, p[i]);
   }

}

/**Function pointers*/
int add(int a, int b){
  return a+b;
}

void caller(){
  int c;
  int (*p)(int, int);
  p=add;
  c= p(17,20);
  printf("%d", c);
}
