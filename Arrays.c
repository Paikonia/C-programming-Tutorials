#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


#define Grade 30
#define Classes 3
char Named[1000][1000]={"Patrick Aikonia", "Joseph Otim", "Doddo Arnold", "Akena Reagan Peter", "Otim Cosmas"};
int si = sizeof(Named)/sizeof(Named[0]);
void arrayGenerator(int noe);
void SString();
void multiDim();
void displayString();
void addString();
void multiDimPoint(int j);
int main12d(){
   //arrayGenerator(12);

   //SString();
   //multiDim();
   //The String array


   //addString();
   //displayString();
    multiDimPoint(6);


}
//basic array
void arrayGenerator(int noe){
int array[noe];
  int size = sizeof(array)/sizeof(array[0]);
  printf("The size of the array is %d\n", size);

  for(int i=0, y = 3*size; i<size; i++, y-=3){
    array[i] = (i*i+123)/y;
  }
   for(int i=0; i<1002; i++){
        if(i>= size) continue;
       printf("Index: %d, item: %d\n", i, array[i]);
    }
}
//working with strings and there functions.
void SString(){
    char str[1000];
    char working[1000];
    gets(str);
    gets(working);
    if(strcmp(str, working)) return;
    printf("Lengths are, Working: %d, str: %d\n\n", strlen(working), strlen(str));
    printf("The value of str:\t%s\nThe value of working:\t%s\n", str, working);
    strcat(str, working);
    printf("str is now: %s\n", str);
    strcpy(working, str);
    printf("the value of working is now: %s\n", working);
    if(strchr("Hello", 'e')) printf("E is in hello\n");
    if(strstr("Finding hello", "hello")) printf("Found Hello");
    else printf("Couldnt find hello");

}

// multidimensional arrays. Two dimensional arrays


void multiDim(){


   //printf("This is in multiDim\n");
   int i, j, multi[12][120];
    for(i=0; i<12; i++){
        for(j=0;j<120; j++){
            multi[i][j] = (i*3)+j+1;
        }
    }
    for(i=0; i<12; i++){

        for(j=0;j<120; j++){
          printf("Element %d, index i: %d, Index j: %d\n", multi[i] [j],i,j);
                 printf("\n");
        }
    }
}

void displayString(){
  int si = sizeof(Named)/sizeof(Named[0]);
   printf("Size: %d\n", si);
   for(int i=0; i<si; i++){
    if((!*Named[i])) continue;
    printf("Index: %d, Name: %s\n", i, Named[i]);
   }

}
void addString(){

  for(int i = 0; i<=10; i++){

   if(!(!*Named[i])) continue;
   printf("Enter name\n");
   gets(Named[i]);
   printf("Size of array is: %d\n", si);
   if((!*Named[i])) break;
  }
}

//multidimensional array pointers
void multiDimPoint(int j){
 //This is to work on the pointers of multidimensional arrays.
  int *p, dim[][4] ={{12,13,95,87},{56,231,123,97},{24,54,78,98},{67,55,33,45},{12,343,565,57},{237,676,865,56},{16,947,565,456},{12,968,123,45},{977,564,343,54}};
  printf("Value: %d, Index: %d,%d\n", dim[0][2], 0,2); //this is the normal way of accessing elements in arrays.
  //Below by use of pointers.
  p = dim;
  printf("The value of p is: %d\n", *((int*)p+18));//this was just a test.

  p= &dim[j][0];
  for(int i= 0;i<4; i++){
    printf("Value: %d, Index: %d, %d\n", *(p+i), j,i);
  }

}

