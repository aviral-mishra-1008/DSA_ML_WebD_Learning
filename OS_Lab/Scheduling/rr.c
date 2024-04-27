#include <stdio.h>
#include <stdlib.h>

typedef struct Process{
    int name;
    int arrival;
    int bust;
    int wt;
    int tat;
    int ct;
    int reBust;
}process;


int main(){
    int i;
    process* Processes[4];
    for(i=0;i<4;i++){
        process * newP = (process *)malloc(sizeof(process));
        newP->name = i+1;
        int arrival;
        int bust;

        printf("Enter arrival time: ");
        scanf("%d",&arrival);
        printf("Enter bust time: ");
        scanf("%d",&bust);

        newP->arrival = arrival;
        newP->bust = bust;
        newP->wt = 0;
        newP->tat = 0;
        newP->ct = 0;
        newP->reBust = bust;

        Processes[i] = newP;
    }

    // for(i=0;i<4;i++){
    //     int key = Processes[i]->arrival;
    //     for(int j=i;j<4;j++){
    //         if(Processes[j]->arrival<key){
    //             process *temp = Processes[j];
    //             Processes[j] = Processes[i];
    //             Processes[i] = temp;
    //         }
    //     }
    // }

    process *readyQueue[4] = {NULL};
    int done = 0;
    int time = 0;
    int vacancy = 0;
    int q = 2;
    process *temp;
    while(done!=4){
        for(i=0;i<4;i++){
            if(Processes[i]->arrival<=time){
                int there = 0;
                for(int j=0;j<4;j++){
                    if(readyQueue[j]==Processes[i] || Processes[i]==temp){
                        there++;
                    }
                }
                if(there==0){
                    int findNext = 0;
                    for(int i=0;i<4;i++){
                        if(readyQueue[i])
                    }
                    readyQueue[i]=Processes[i];
                    printf("\nProcess P%d going to ReadyQueue\n as time is %d",Processes[i]->name,time);
                    vacancy++;
                }

            }
        }

        if(temp!=NULL){
            readyQueue[vacancy]=temp;
        }

        process *now = readyQueue[0];
        printf("\nRunning process P%d\n",now->name);
        for(i=1;i<=vacancy;i++){
            printf("%d is vacancy!!\n",vacancy);
            readyQueue[i-1] = readyQueue[i];
        }

        vacancy--;

        now->bust = now->bust-q;
        time+=q;
        if(now->bust<=0){
            now->bust = now->reBust;
            done++;
            now->ct = time;
            temp = NULL;
        }
        else{
            temp = now;
        }

        printf("\nReady Queue: ");
        for(i=0;i<4;i++){
            printf("%d , ",readyQueue[i]->name);
        }
    }

   printf("\nAfter processing...\n\n");

    // for(i=0;i<4;i++){
    //     printf("n:P%d a:%d b:%d wt:%d tat:%d  ct:%d\n\n",Processes[i]->name,Processes[i]->arrival,Processes[i]->bust,Processes[i]->wt,Processes[i]->tat,Processes[i]->ct);
    // }

    int netWt = 0;
    int netTat = 0;

    for(int i=0;i<4;i++){
        netWt = netWt+Processes[i]->wt;
        netTat = netTat+Processes[i]->tat;
    }

    printf("Average weighting time: %d\n",netWt/4);
    printf("Average turn around time: %d\n",netTat/4);
    return 0;
}