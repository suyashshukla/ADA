#include<stdio.h>
    
    int main(){
       
        int files,optimal_time = 0,i,j,temp;
        
        printf("No. of Files : ");
        scanf("%d",&files);
        
        int record[files];
        
        printf("No. of Records : ");
        
        for (i = 0;i<files;i++){
       printf("File #%d : ",(i+1));
        scanf("%d",&record[i]);
    }
    
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
        
        if(record[i]>record[j]){
        temp = record[i];
        record[i] = record[j];
        record[j] = temp;
        }
        }
        }
    
    
    for (i = 0;i<files;i++)
    optimal_time = optimal_time + record[i];
    
    printf("Optimal Merge Time = %d\n",optimal_time);
    
return 0;
}

