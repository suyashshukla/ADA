#include<stdio.h>
    
    int Arr[10];
        
    void MergeSort(int arr[],int low, int high);
		void Merge(int l, int mid, int hi);
    
    
    void MergeSort(int arr[],int low, int high){        
        if(low<high){
        int MP = (low+high)/2;
        
        MergeSort(arr,low,MP);
        MergeSort(arr,MP+1,high);
        Merge(low,MP,high);        
    }
    }
    
		
		
		void Merge(int l, int mid, int hi){
        int h = l;
        int l1 = mid+1-l;
        int l2 = hi-mid;
        int i =0;
        int j =0;
        int k,x;
        int R[l2];
        int L[l1];
        
        for(x=0;x<l1;x++)
        L[x]=Arr[l+x];
        
        for(x=0;x<l2;x++)
        R[x]=Arr[mid+1+x];
        
        
        
        while(i<l1 && j<l2){
            
            if(L[i]<=R[j]){
            Arr[h++]=L[i++];
        }
            else{
            Arr[h++]=R[j++];
        }
            
        }
        
        
         
        
            for(k = i;k<l1;k++){                
            Arr[h++]=L[k];
        }
       
            for(k = j;k<l2;k++){
            Arr[h++]=R[k];
        }            
        
       
       
    }
    
   int main(){
        int i; 
        for(i = 0;i<10;i++)
        scanf("%d",&Arr[i]);
        
        
        
        
        MergeSort(Arr,0,9);
        
            for(i = 0;i<10;i++){
            printf("%d : %d\n",(i+1),Arr[i]); 
        }
        return 0;
    }

        
        
        
        
        
    
