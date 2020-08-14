#include <stdio.h>
#include <string.h>
void pad(char *s, int length);
void menu();
main1234(){
//char str[80];
//strcpy(str, "This is a test");
//pad(str, 60);
//printf("%s has a legth %d", str, strlen(str));
 menu();

}


void pad(char *s, int length){
//This method adds characters starting with a one at the end of the string;
int l;
l = strlen(s);
char spaceCOunt='0';
while(l<length){
    spaceCOunt++;
    s[l]=spaceCOunt;
    l++;
}
s[l]='\0';
}

//improvement to the menu items selector.
void menu(){
    char s1;
printf("\nChoose an option from the list by entering a number.\n1. Edit word. %s",
               "\n2. Input a new word \n3. Delete word. \n");
   do{
    scanf("%c", &s1);
    switch(s1){
case '1':
    printf("Edit word chosen.!! \nA function to be called has not been created. Sorry!!\n");

    break;
case '2':
    printf("Input new word chosen.!! \nA function to be called has not been created. Sorry!!\n");
    break;
case '3':
     printf("Delete word chosen.!! \nA function to be called has not been created. Sorry!!\n");
    break;
default:
        printf("Enter a valid option!!\n");
    break;
    }
    }while(s1!='1'&&s1!='2'&&s1!='3');
}

