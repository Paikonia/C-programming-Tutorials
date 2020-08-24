/*
Working on struct arrays.
It is advisable to use pointers to pass structures to function or passing by reference since it is easier.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100
struct Points{
double x, y, z;
};

struct Points points[SIZE];

double distance(struct Points *p1, struct Points *p2);
void addPoints(double x, double y, double z, struct Points *points);
void getPoints(struct Points *p, struct Points *arr);
void displayPoints(struct Points *p);
int mainioas(){
/*
struct Points po;
po.x =12;
po.y =12;
po.z = 12;

struct Points p2;
p2.x =1;
p2.y =1;
p2.z =1;
printf("%f",distance(&p2, &po));
*/
struct Points ad;
//struct Points *arr = ;
for(;;){
    int choice;
    printf("1. Enter new point\n");
    printf("2. Display point\n");
    printf("3. Quite\n");
    printf("Enter choice.\n");
    scanf("%d", &choice);
   switch(choice){
 case 1:
    getPoints(&ad, points);
    break;
 case 2:
     displayPoints(points);
    break;
 case 3:
     exit(1);
    break;
 default:
    continue;
    break;
   }
 }
}

double distance(struct Points *p1,struct Points* p2)
{
    double x= (p1->x-p2->x)*(p1->x-p2->x);
    double y= (p1->y-p2->y)*(p1->y-p2->y);
    double z= (p1->z-p2->z)*(p1->z-p2->z);
    double sum = z+y+x;
    double re =sqrt(sum);
    return re;
}

void addPoints(double x, double y, double z, struct Points *points){
        struct Points poo;
        poo.x= x;
        poo.y= y;
        poo.z =z;

}
void getPoints(struct Points *p, struct Points *arr){
    double x, y, z;
     printf("enter X: ");
     scanf("%lf",&x);
     printf("enter Y: ");
     scanf("%lf",&y);
     printf("enter Z: ");
     scanf("%lf", &z);
     p->x = x;
     p->y = y;
     p->z = z;
     for(int i =0; i< SIZE; i++){
            if(!points+i) {
                    *(points+i) = *p;
                    break;
            }
        }

}
void displayPoints(struct Points *arr){

     for(int i =0; i< SIZE; i++){
            if(!points+i) {
          printf("enter X: %f\n", (arr+i)->x);
          printf("enter Y: %f\n", (arr+i)->y);
          printf("enter Z: %f\n", (arr+i)->z);

            }
        }

}

