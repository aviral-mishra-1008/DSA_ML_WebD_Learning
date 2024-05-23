#include <stdio.h>
#include <stdlib.h>
#define procNum 10
int choice;
int finish[procNum], at[procNum],bt[procNum],wt[procNum],tat[procNum],name[procNum];
int avg_wt, avg_tat;
int n, time, count;

void input(){
    printf("\nnumber of processes: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        int a,b;
        printf("\nFor process P%d enter the arrival time: ",i);
        scanf("%d",&a);
        printf("\nFor process P%d enter the bust time: ",i);
        scanf("%d",&b);
        at[i] = a;
        bt[i] = b;
        name[i] = i;
    }
}

void fcfs(){
    for(int i=0;i<n;i++){
        finish[i] = 0;
        wt[i] = 0;
        tat[i] = 0;
    }
    int pending = n;
    for(time=0,count=0;pending>0;){
        for(count=0;count<n;count++){
            if(finish[count]!=1 && at[count]<=time){
                printf(" P%d ",name[count]);
                time+=bt[count];
                for(int i=0;i<n;i++){
                    if(i==count || finish[i]==1){
                        continue;
                    }
                    wt[i]+=bt[count];
                }
                pending--;
                wt[count]-=at[count];
                tat[count] = wt[count]+bt[count];
                finish[count]=1;
                break;
            }
        }
    }
}


int main(){
    input();
    fcfs();

    int sumWt=0;
    int sumTat=0;
    for(int i=0;i<n;i++){
        sumWt+=wt[i];
        sumTat+=tat[i];
        printf("\nfor process P%d, the waiting time was: %d, the turn around time was %d\n",name[i],wt[i],tat[i]);
    }
    avg_tat = sumTat/n;
    avg_wt = sumWt/n;
    printf("\n\naverage weighting time: %d, average turn-around-time: %d",avg_wt,avg_tat);
    return 0;
}


