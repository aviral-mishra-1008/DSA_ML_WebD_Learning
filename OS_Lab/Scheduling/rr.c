#include <stdio.h>
#include <stdlib.h>
#define procNum 10
int choice;
int finish[procNum], at[procNum],bt[procNum],wt[procNum],tat[procNum];
int avg_wt, avg_tat;
int n, remainingBT[procNum], time, count;

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
        remainingBT[i] = b;
    }
}

void rr(){
    for(int i=0;i<n;i++){
        finish[i] = 0;
        wt[i] = 0;
        tat[i] = 0;
    }
    int pending = n;
    int q;
    printf("\nenter quantum time: ");
    scanf("%d",&q);

    for(time=0,count=0;pending>0;){
        if(finish[count]!=1 && remainingBT[count]<=q && at[count]<=time){
            time+=remainingBT[count];
            finish[count]=1;
            wt[count]-=at[count];
            if(wt[count]<0){
                wt[count] = 0;
            }
            pending--;
            tat[count] = wt[count]+bt[count];

            for(int i=0;i<n;i++){
                if(i==count || finish[i]==1){
                    continue;
                }
                wt[i]+=remainingBT[count];
            }
            printf(" P%d ",count);
            remainingBT[count] = 0;
        }

        if(finish[count]!=1 && remainingBT[count]>q && at[count]<=time){
            time+=q;
            remainingBT[count]-=q;
            for(int i=0;i<n;i++){
                if(i==count || finish[i]==1){
                    continue;
                }
                wt[i]+=q;
            }

            printf(" P%d ",count);
        }

        count = (count+1)%n;
    }
}

int main(){
    input();
    rr();

    int sumWt=0;
    int sumTat=0;
    for(int i=0;i<n;i++){
        sumWt+=wt[i];
        sumTat+=tat[i];
        printf("\nfor process P%d, the waiting time was: %d, the turn around time was %d\n",i,wt[i],tat[i]);
    }
    avg_tat = sumTat/n;
    avg_wt = sumWt/n;
    printf("\n\naverage weighting time: %d, average turn-around-time: %d",avg_wt,avg_tat);
    return 0;
}


