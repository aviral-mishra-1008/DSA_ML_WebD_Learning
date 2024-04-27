#include <stdio.h>
#include <stdlib.h>

typedef struct Process{
    int name;
    int arrival;
    int bust;
    int wt;
    int tat;
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

        Processes[i] = newP;
    }

    for(i=0;i<4;i++){
        int key = Processes[i]->bust;
        for(int j=i;j<4;j++){
            if(Processes[j]->bust<key){
                process *temp = Processes[j];
                Processes[j] = Processes[i];
                Processes[i] = temp;
            }
        }
    }

    Processes[0]->wt = 0;
    for(i=1; i<4; i++){
        Processes[i]->wt = Processes[i-1]->wt + Processes[i-1]->bust;
    }

    for(i=0; i<4; i++){
        Processes[i]->tat = Processes[i]->bust + Processes[i]->wt;
    }



    for(i=0;i<4;i++){
        printf("n:P%d a:%d b:%d wt:%d tat:%d\n\n",Processes[i]->name,Processes[i]->arrival,Processes[i]->bust,Processes[i]->wt,Processes[i]->tat);
    }

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