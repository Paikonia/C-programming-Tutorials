#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int *tos, *pL, STACK[SIZE];

void pArithemtics();
void pDeclare();
void pComparison();
int main(){

//pDeclare();
pArithemtics();
//pComparison();
}

//Pointer declaration and assignment to different data types.
void pDeclare(){

double a, b;
a= 12.98;
int *p, getValue;
printf("The value of a: %f and the address of a: %p\n ", a, &a);
p= (int *) &a;
printf("The location of p in memory is: %p\n", p);
b = *p;
getValue =*p;
//The values printed below are unpredictable to me and it isnt a good idea to assign a pointer of a different type to another type.
//Pointers perform to there base data type not the actual data in the memory location.
printf("The value of b is: %f\n", b);
printf("The value of get value: %d\n", getValue);

}

//Pointer arithmetics.
void pArithemtics(){
  //Pointer increment and decrement. The value after the operation is printed for comparison.
  int a = 12, *p, *p2;
  p = &a;
  printf("The pointers initially point to the value: %d\n",a);
  printf("p before: %p. Value of p: %d\n", p,*p);
  p++;
  printf("p after: %p. The Value of p: %d\n", p, *p);//On my pc, the last figures are increased by 4 since integers are four bytes.
  p2 =&a;
  printf("p2 before: %p, Value of p2: %d\n", p2, *p2);
  p2--;
  printf("p2 after: %p, The value of p2: %d\n", p2, *p2);//This prints a value that is four times lower that the initial value.

  //Further pointer arithmetics.
  double b=495.321, *p3, *p4;
  p3= &b;
  printf("Value of p3: %f, Memory address of p3: %p\n", *p3, p3);
  //The following arithmetic prints the 4th value of double after the initial in memory.
  p3=p3+3;
  printf("Value of p3: %f, Memory address of p3: %p\n", *p3, p3);
  p4= &b;
  printf("Value of p3: %f, Memory address of p3: %p\n", *p4, p4);
  //The following arithmetic prints the 4th value of double after the initial in memory.
  p4=p4-3;
  printf("Value of p3: %f, Memory address of p3: %p\n", *p4, p4);
  //to get how many items of that type are between two pointer, subtract

  int num = p3-p4;
  //printf("Number: %d", num);

}

