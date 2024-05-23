#include <stdio.h>
#include <stdlib.h>
#define procNum 10
int choice;
int finish[procNum], at[procNum],bt[procNum],wt[procNum],tat[procNum],name[procNum],priority[procNum];
int avg_wt, avg_tat;
int n, remainingBT[procNum], time, count;

void input(){
    printf("\nnumber of processes: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        int a,b,p;
        printf("\nFor process P%d enter the arrival time: ",i);
        scanf("%d",&a);
        printf("\nFor process P%d enter the bust time: ",i);
        scanf("%d",&b);
        printf("\nFor process P%d enter the priority: ",i);
        scanf("%d",&p);
        at[i] = a;
        bt[i] = b;
        remainingBT[i] = b;
        name[i] = i;
        priority[i] = p;
    }
}

void sort(){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(priority[i]<priority[j]){
                temp = remainingBT[i];
                remainingBT[i] = remainingBT[j];
                remainingBT[j] = temp;

                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = wt[i];
                wt[i] = wt[j];
                wt[j] = temp;

                temp = tat[i];
                tat[i] = tat[j];
                tat[j] = temp;

                temp = name[i];
                name[i] = name[j];
                name[j] = temp;

                temp = finish[i];
                finish[i] = finish[j];
                finish[j] = temp;

                temp = at[i];
                at[i] = at[j];
                at[j] = temp;
            }
        }
    }
}

void prior(){
    for(int i=0;i<n;i++){
        finish[i] = 0;
        wt[i] = 0;
        tat[i] = 0;
    }
    int pending = n;
    
    for(time=0,count=0;pending>0;){
        sort();
        for(count=0;count<n;count++){
            if(finish[count]!=1 && at[count]<=time){
                printf(" P%d ",name[count]);
                remainingBT[count]-=1;
                time+=1;
                for(int i=0;i<n;i++){
                    if(i==count || finish[i]==1){
                        continue;
                    }
                    wt[i]+=1;
                }
            
            if(remainingBT[count]==0){
                pending--;
                wt[count]-=at[count];
                tat[count] = wt[count]+bt[count];
                finish[count]=1;
            }

            break;
        }
 }
}
}

int main(){
    input();
    prior();

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


