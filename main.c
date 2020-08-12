#include <stdio.h>
#include <stdlib.h>

void contains(int i){
 static changable = 1;
 printf("Variable: %d, Number of calles: %d\n", changable, i);
 changable += changable;

}

int Xor(int a, int b){
  return (a||b)&& !(a&&b);
}


int main()
{
    extern int ax, ay;
    int a, b;
    a=4;
    b = a++;
    printf("Value of b %d and value of a %d\n", b, a);
    b= ++a;
    printf("Value of b %d and value of a %d\n", b, a);
    for(int i=ax; i<ay; i++) contains(i-ax);

    printf("a: 1, b: 1, value: %d\n", Xor(1,1));
    printf("a: 1, b: 0, value: %d\n", Xor(1,0));
    printf("a: 0, b: 1, value: %d\n", Xor(0,1));
    printf("a: 0, b: 0, value: %d\n", Xor(0,0));
    printf("%d", a<4);

    float ass = (float)50 / 3;
    printf("%f", ass);



}

int ax = 12, ay= 30;
