/**include directive for the standard library and other libraries declared by c.*/
#include <stdlib.h>
#include <stdio.h>

/**Other directives.*/
#define sort 13

/**global variables and structures*/

char sorted[sort];

/**Function prototypes*/
void bubbleSort(char *arr, int co);
void selector(char *ab, int co);
void insert(char *it, int num);
/**The main method.*/
/*int main(){

printf("Here we are sorting. Clear!!!!\n");
gets(sorted);
//bubbleSort(sorted, strlen(sorted));
//selector(sorted, strlen(sorted));
insert(sorted, strlen(sorted));
printf("Here we are sorting. Clear!!!!\n");
printf("%s\n", sorted);

}

/**Function declarations*/
/*Worst sorting ever. This is the most infamous algorithm for sorting.*/
void bubbleSort(char *arr, int count){
int a, b;
char t;

for(a=1;a<count; a++){
    printf("Count: ");
    for(b=count-1; b>=a; --b){

    if((arr[b-1])>arr[b]){

        t= arr[b-1];
        arr[b-1] =arr[b];
        arr[b] = t;
        printf("%c", arr[b]);
    }
  }

    printf("\n");
 }
}

/*Selector function*/
void selector(char *se, int count){
register int a,b,c;
int exchange;
char t;

for(a =0; a<count-1; ++a){
    exchange =0;
    c=a;
    t = se[a];

    for(b= a+1; b< count; ++b){
        if(se[b]<t){
            c=b;
            t = se[b];
            exchange =1;
       }
    }
    if(exchange){
        se[c] =se[a];
        se[a]=t;
    }
}
}
/*Insertion.*/
void insert(char *item, int num){
register int a, b;
char t;

for(a=1; a< num; a++){
    t= item[a];
  for(b = a-1; (b >= 0) && (t < item[b]) ; b--)
        item[(b+1)] = item[b];

    item[(b+1)]=t;

  }
}

