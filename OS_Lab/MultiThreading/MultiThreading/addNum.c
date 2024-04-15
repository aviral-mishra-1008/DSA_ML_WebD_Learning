#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *calcAvg(void *arg);
void *calcMin(void *arg);
void *calcMax(void *arg);

int main(){
    int nums[7] = {90,81,78,95,79,72,85};
    pthread_t a_thread;
    pthread_t b_thread;
    pthread_t c_thread;
    void *average;
    void *min;
    void *max;

    printf("Inside Main\n");
    printf("The program reports: \n");

    pthread_create(&a_thread,NULL,calcAvg,(void *)nums);
    pthread_create(&b_thread,NULL,calcMin,(void *)nums);
    pthread_create(&c_thread,NULL,calcMax,(void *)nums);

    pthread_join(a_thread, &average);
    pthread_join(b_thread, &min);
    pthread_join(c_thread, &max);
    

    //this prints wrong values!!!
    //printf("\nStarting to print received vals: \n");
    //printf("Average value is: %d\n",(int *)average);
    //printf("Min value is: %d\n",(int *)min);
    //printf("Max value is: %d\n",(int *)max);


    return 0;
}

void *calcAvg(void *arg){
   int *x = (int *)arg;
   int sum = 0;
   for(int i=0; i<7; i++){
        sum = sum + x[i];
   }
   int avg = sum/7;
   printf("Average value is: %d\n",avg);
}



void *calcMin(void *arg){
   int *x = (int*)arg;
   int mini = 200;
   for(int i=0; i<7; i++){
        if(x[i]<mini){
            mini = x[i];
        }
   }
    printf("Min value is: %d\n",mini);
  
}



void *calcMax(void *arg){
   int *x = (int *)arg;
   int maxi = 0;
   for(int i=0; i<7; i++){
        if(x[i]>maxi){
            maxi = x[i];
        }
   }
    printf("Max value is: %d\n",maxi);
  
}

