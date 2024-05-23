#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct Process{
    int name;
    int allocated[3];
    int max[3];
    int need[3];
    int done;
}process;

int main(){
    process *processes[5];
    printf("Firstly we'll seek allocated and max for each process\n\n");
    for(int j=0;j<5;j++){
        process *newP = (process *)malloc(sizeof(process));
        newP->name = j;
        newP->done = 0;
        for(int i=0;i<2;i++){
                int a;
                int b;
                int c;
                printf("Enter the resource allocated for A: ");
                scanf("%d",&a);
                printf("Enter the resource allocated for B: ");
                scanf("%d",&b);
                printf("Enter the resource allocated for C: ");
                scanf("%d",&c);

                if(i==0){
                    printf("\nThis was for Allocation\n");
                    newP->allocated[0] = a;
                    newP->allocated[1] = b;
                    newP->allocated[2] = c;
                }

                if(i==1){
                    printf("\nThis was for Max\n");
                    newP->max[0] = a;
                    newP->max[1] = b;
                    newP->max[2] = c;
                }
        }


        newP->need[0] = newP->max[0]-newP->allocated[0];
        newP->need[1] = newP->max[1]-newP->allocated[1];
        newP->need[2] = newP->max[2]-newP->allocated[2];

        processes[j] = newP;
        printf("\nThe need for this is: A:%d B:%d C:%d\n",newP->need[0],newP->need[1],newP->need[2]);
    }

    int available[3];

    for(int i=0;i<3;i++){
        printf("Enter available resource: ");
        scanf("%d",&available[i]);
    }

    int ProcessList[5];
    int done = 0;
    while(done<5){
        int count = 0;
        for(int i=0;i<5;i++){
            process *now = processes[i];
            if(now->done==0){
                int check = 0;
                for(int j=0;j<3;j++){
                    if(now->need[j]>available[j]){
                        check++;
                        break;
                    }
                }
                if(check==0){
                    count++;
                    now->done = 1;
                    for(int j=0;j<3;j++){
                        available[j] = available[j]+now->allocated[j];
                    }
                    ProcessList[done]=now->name;
                    done++;
                }
            }
        }
        if(count==0){
            printf("\n\nNo safe config possible system bound for deadlock\n\n");
            done=6;
        }
    }

    if(done==5){
        printf("The order of execution: P%d->P%d->P%d->P%d->P%d",ProcessList[0],ProcessList[1],ProcessList[2],ProcessList[3],ProcessList[4]);
    }
}