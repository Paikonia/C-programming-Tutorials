/*
  *Initializing pointers is a risky business. It can crash the operating system is used wrongly.
  An example is when yo try to use a static pointer that hasnt been declared yet, the best case scenerio is that you program crashes.
  Never use uninitialized pointer if you want your program to be safe. That is the best case scenario.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK 40
#define NUM 12
int stack[STACK], *p1, *pC;
void pComparison();
void pArrays();
void pMultiple();
void pInit();

int mai123wn(){
//printf("Hello world!!\n");
//pComparison();
//pArrays();
//pMultiple();
pInit();
}

//pointer comparison
int pop(){
   if(p1==pC){
        printf("Stack overflow!\n");
        exit(1);
     }
     p1--;
     return *(p1+1);
}
void push(int p){
     p1++;
     if(p1==(pC+STACK)){
        printf("Stack overflow!\n");
        exit(1);
     }
     *p1=p;
     printf("The value added is: %d\n", p);
}

void pComparison(){
p1= stack;
pC = stack;
int data;
do{
    printf("Please enter a number: ");
    scanf("%d",&data);
    if(data!=0) push(data);
    else {
    int val= pop();
        printf("\nPopped value: %d\n", val);
    }
}while(data!=-1);
  for(int i=0; i<STACK; i++){
    printf("Value: %d, Index: %d\n", *(pC+i) , i);
    if(!*(pC+i)) continue;

  }
}
//Arrays of pointers.
pArrays(){
    p1=stack;
  int *ab[NUM]={p1, (p1+1),(p1+2), (p1+3), (p1+4),(p1+5)};//initializes an array of integer pointers with a size of 12;
  //the for loop is adding pointers in the initialized array;
  for(int i=0; i<NUM; i++){
    printf("Address: %p, Index: %d\n", ab[i],i);
  }
}

//Multiple indirection or pointer to pointer.
void pMultiple(){
  int ab = 12, *p, **pp;
  p = &ab;
  pp =&p;
  printf("The location of p is: %p\n", pp);
  printf("The value store by pp is: %p\n", *pp);
  printf("The value store by p is: %d\n", **pp);
}
//pointer initialization.
int Search(char *p[], char *name){
  register int t;
  for(t=0; p[t]; ++t)
    if(!strcmp(p[t], name)) return p[t];
  return -1;
}
void pInit(){
char *names[]={"Patrick", "Joseph", "Martin", NULL};
   if(Search(names, "Patrick") != -1) printf("Patrick is in the list");

}
