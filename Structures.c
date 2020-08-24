//This file is used to discuss structures and union.
#include <stdlib.h>
#include <stdio.h>

/*Creating a template for a data type for mailing details. */
struct Address {
char name[80];
char street[60];
char city[50];
char state[50];
long int zip;
};


/*declaring an address data to be stored in memory. This could have been done when the struct was being declared. */
struct Address att;
struct Address address[40];
void sBasic(struct Address* ab);
void sBasicVariable(struct Address ab);
void sBasicDisplay(struct Address ab);
void sIndivVar(char as[]);
void sIndivPointer(char* p[]);

int main4(){

//printf("This is an intro to structues\n");
struct Address ad;
sBasic(&ad);
sBasicDisplay(ad);
/*When any information is passed into the following function, changes will that are made to the ad variable are discarded when the function exits.*/
//sBasicVariable(ad);
//sBasicDisplay(ad);

//Passing by variable to a function.
//sIndivVar(ad.name);
//sIndivPointer(&ad.street);

}



/*Basic structure declaring. We pass a pointer as a parameter to enable the structure to be changed by this function.*/
/*if I pass a variable instead of a pointer, the changes will not be made to the structure so it will not display the correct infor in sBasicDisplay.*/
void sBasic(struct Address *ad){
  printf("Enter name: ");
  gets(ad->name);
  printf("Enter state: ");
  gets(ad->state);
  printf("Enter city: ");
  gets(ad->city);
  printf("Enter street: ");
  gets(ad->street);
  printf("Enter zip code without decimals or negative: ");
  scanf("%ld",ad->zip);//This is like to print an error.
}
void sBasicVariable(struct Address ad){
  printf("Enter name: ");
  gets(ad.name);
  printf("Enter state: ");
  gets(ad.state);
  printf("Enter city: ");
  gets(ad.city);
  printf("Enter street: ");
  gets(ad.street);
  printf("Enter zip code without decimals or negative: ");
  scanf("%ld",ad.zip);//This is like to print an error.
}
void sBasicDisplay(struct Address ad){
   printf("Your name is %s\n",ad.name);
   printf("You live in %s \n",ad.state);
   printf("You live in %s city\n",ad.city);
   printf("You live in %s \n",ad.street);
   printf("This is your zip: %ld",ad.zip);

}

/*Passing structures to functions. The above were just basics*/
void sIndivVar(char an[]){
  printf("\nThe name passed is %s\n", an);
}
void sIndivPointer(char *an[]){
  printf("\nThe street passed is %s\n", an);
}

