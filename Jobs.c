#include<stdio.h>

int main(){


int profit[] = {50,40,20,30,10};
int deadline[] = {5,4,2,2,1};

int i,j,temp,temp1;

int max_dead=0;

for(i = 0;i<5;i++)
if(deadline[i]>max_dead)
max_dead = deadline[i];

int jobs[max_dead];

for(i = 0;i<max_dead;i++)
jobs[i] = 0;


    for(i = 0;i<4;i++){
        for(j = i+1;j<5;j++){
            if(profit[j]>profit[i]){
            temp = profit[i];
            temp1 = deadline[i];
            
            
            profit[i] = profit[j];
            deadline[i] = deadline[j];
            
            profit[j] = temp;
            deadline[j] = temp1; 
        }
        
    }
}

for(i = 0;i<5;i++)
printf("%d : %d\t%d\n",(i+1),profit[i],deadline[i]);
    
    
    for(i=0;i<5;i++){
    if(jobs[deadline[i]]==0)
    jobs[deadline[i]]=(i+1);
    }
    
    
    printf("The Sequence of Jobs : ");
    
    for(i = 0;i<max_dead;i++)
    if(jobs[i]!=0)
    printf("%d ",jobs[i]);
    
    return 0;
    
    
    }
    
 
    
