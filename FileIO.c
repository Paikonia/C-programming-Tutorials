#include <stdio.h>
#include <stdlib.h>

/**Functions prototypes for this file*/
void FileReader(void);
void FileWriter(void);
void read_write(void);
void fPrintScan(void);

/**Main function*/
int main(){
//FileWriter();
//FileReader();
//read_write();
fPrintScan();
}
/**
Function to introduce file I/O.
I am opening a file called dxdiag.txt

*/
void FileWriter(void){
FILE *th;
char ch, ch1[100];


if((th=fopen("DxDiag.txt", "a"))==NULL){
   printf("Unable to open file\n");
   return;
   }
printf("Enter characters!\n");
/**
This is to write to the file that is created.
Enter the $ to finish writing.
Line commented are the basic codes and ones that are not commented are improved version of the previous codes.
*/
//do{
//    ch =getchar();
//    putc(ch, th);
//}while(ch!='$');

/**Working with fputs*/
do{
    gets(ch1);
    strcat(ch1, "\n");
    fputs(ch1, th);
    fflush(th);/**This here save the contents every time that the loop finishes its activities. */
}while(*ch1!='\n');
/**To close the file.*/
fclose(th);
}

/**
File reader
*/
void FileReader(void){

/**
This is to read the file.
Line commented are the basic codes and ones that are not commented are improved version of the previous codes.
*/

FILE *re;
char ch, *ch1;
if ((re= fopen("DxDiag.txt", "r"))==NULL){
    printf("File cannot be opened.");
}
/**
This is while using the EOF
It has issues with it though and a better function is provided.
*/
//ch = getc(re);
//while(ch!=EOF){
//    putchar(ch);
//  ch = getc(re);
//}
/**Improved using feof*/
while(!feof(re)){
        ch = getc(re);
        printf("%c", ch);
}


 fclose(re);
}

/**
The read-write w+
*/
void read_write(void){

FILE *fl;
char ch[100], ch1;

if((fl= fopen("DxDiag1.txt", "w+"))==NULL) {
        printf("Error reading file.");
        exit(1);
    }

    printf("Enter a string that will be read. Press enter to quit\n");

do{
    gets(ch);
    strcat(ch, "\n");
    fputs(ch, fl);
  fflush(fl);
}while(*ch!='\n');
rewind(fl);/**resets the file to initial position for reading*/
while(!feof(fl)){
fgets(ch, 99, fl);
if(ferror(fl)) printf("An error occured");
printf("%s", ch);
}
fclose(fl);
}


/**
To read a file from the beginning, please use the rewind function but the file must be opened in "w+" mode not w.
ferror is used to check errors in file opeations. I mean checking whether an error occured or not.
To delete a file use remove(const char *filename) function.
*/
/**This is to demonstrate fprintf() and fscanf()*/
void fPrintScan(void){
char name[90];
int age;
FILE *file;
if((file=fopen("FreadAndWrite.patrick", "w"))==NULL){
    printf("Failed to open/create file.");
    exit(1);
}
printf("Enter a string and a number.");
fscanf(stdin,"%s%d", name, &age);
fprintf(file, "Name: %s, Age: %d", &name, age);
fclose(file);

if((file=fopen("FreadAndWrite.patrick", "r"))==NULL){
    printf("Failed to open/create file.");
    exit(1);
}
printf("This is to appear\n"); //Debugging where the error is.
fscanf(file,"%s%d", name, &age);
fprintf(stdout, "%s, Age: %d", name, age);


fclose(file);

}
