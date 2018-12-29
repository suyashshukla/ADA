#include<stdio.h>
    
    void QuickSort(int a[],int p,int q);
    int partition(int a[],int f, int l);
    
    
    void QuickSort(int a[],int p,int q){
        
        if(p<q){
        int j = partition(a,p,q+1);
     
        QuickSort(a,p,j-1);
        QuickSort(a,j+1,q);
            
    }
    
}
    
    int partition(int a[],int f, int l){
        
        int pivot = a[f];
        int i = f;
        int j = l;
        int temp;
        
        while(i<=j){
            
            while(a[i]<=pivot && i<=j)
            i=i+1;
            
            while(a[j]>=pivot && i<=j)
            j=j-1;
            
            if(i<=j){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
                temp = a[j];
                a[j] = pivot;
                a[f] = temp;
                
                return j;
            }
            
            int main(){
                                
                int A[11],i;
                
                for(i = 0;i<10;i++)
                scanf("%d",&A[i]);
                
                A[10] = 100000;
                                
				QuickSort(A,0,9);
                
                for(i = 0;i<10;i++)
                printf("%d : %d\n",(i+1),A[i]);
                
                
                return 0;
            }
        
                
                
                
            
                
                
            
            
            
            
            
        
