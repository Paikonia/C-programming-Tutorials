#include <stdlib.h>
//goto statements are omitted. exit() in the standard library is not discussed as well since it exits out of the program.
double sqrt(double ab);
void Breaker(int num);
void Continued();
int main(){
    //double tobe = 2.3;
    //double re =sqrt(tobe);
    //printf("The square root of %f is %f", tobe, re);
    //Breaker(100);
    Continued();
}
//function to demo return.
double sqrt(double a){
    return a*a;
  printf("This will not be printed");
}
//demo for break using switch has been shown. Now time for loops.
void Breaker(int num){
    //num of loops if the number of time the for loop is supposed to loop for.
    int half = (num/2);
    for(int i=0; i< num; i++){
        printf("The current value for i is %d\n", i);
        //breaking after half the value.
        if(i==half) break;
    }

    //for nested inner loops, break terminates the inner loop as seen below. The values of j will be printed upto a maximun of 10.
    for(int i=0; i<=20; i++){
        int hf= (i+1)/2;
        for(int j=0; j<i; j++){
            printf("The value of j is %d\n", j);
            if(j==hf) break;
        }
    //just to summarize exit.
    for(int i= 0; i<10; i++){
        if(i>5) exit(1);
    }

    }

}
//function for the continue statement.
void Continued(){
   for(int i = 0; i< 20; i++){

    if(i<6 || i>=15) continue;
    printf("The value for i is %d\n", i+1);
   }
}

