/**include directive for the standard library and other libraries declared by c.*/
#include <stdlib.h>
#include <stdio.h>

/**Other directives.*/
#define sort 90

/**global variables and structures*/

char sorted[sort];

/**Function prototypes*/
void shell(char *st, int y);

/**The main method.*/
int main(){

printf("Here we are sorting. Clear!!!!\n");
gets(sorted);

shell(sorted, strlen(sorted));

printf("%s", sorted);


}

/**Function declarations*/
void shell(char *items, int count){
register int i, j, gap, k;
char x, a[5];

a[0]=9; a[1]=5; a[2]=3; a[3]=2; a[4]=1;

 for(k=0; k<5; k++){
    gap = a[k];
    for(i=gap; i< count; ++i){
        x= items[i];
        printf("%c", x);
       for(j=i-gap; (x<items[j])&& (j>=0); j=j-gap){
        items[j+gap] = gap;
       }
       items[j+gap]=x;
    }
 }

}



