#include<stdio.h>

    int main(){
        
              
        double weight[] ={10,5,15,8};
        double profit[] = {30,20,40,36};
        double perkg[4];
        double sol[4];
        int index[] = {0,1,2,3};
        int i,j;
        
        for(i = 0;i<4;i++){
            perkg[i] = profit[i]/weight[i];        
    }
    
    
    
    double temp;
    double temp1;
    double temp2;
    int temp3;
    
    for(i = 0;i<4;i++){
        for(j = i+1;j<4;j++){
            if(perkg[j]>perkg[i]){
            temp = perkg[i];
            temp1 = profit[i];
            temp2 = weight[i];
            temp3 = index[i];
            
            perkg[i] = perkg[j];
            profit[i] = profit[j];
            weight[i] = weight[j];
            index[i] = index[j];
            
            perkg[j] = temp;
            profit[j] = temp1;
            weight[j] = temp2;  
            index[j] = temp3;
        }
        
    }
}


double M = 15;

for (i = 0 ; i<4;i++){
    
    if(weight[i]<M){
        sol[i] = 1.0;
        M = M - weight[i];
    }
    else
    break;
}

if(i<4){
    sol[i] = M/weight[i];
}

for(i = 0;i<4;i++)
printf("%.2lf\n",sol[index[i]]);


    
    return 0;

}    
