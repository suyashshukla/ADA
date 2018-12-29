#include<stdio.h>
   void multiply(int n,int A[2][2],int B[2][2]);
    
    static int a[2][2];
    static int b[2][2];
    static int c[2][2];
    
    
    
    void multiply(int n,int A[2][2],int B[2][2]){
        
        
        if (n==2){
            
            int p=A[0][0];
            int q=A[0][1];
            int r=A[1][0];
            int s=A[1][1];
            
            int t=B[0][0];
            int u=B[0][1];
            int v=B[1][0];
            int w=B[1][1];
            
            int d1=p*(u-w);
            int d2=(p+q)*w;
            int d3=(r+s)*t;
            int d4=s*(v-t);
            
            int d5=(p+s)*(t+w);
            int d6=(q-s)*(v+w);
            int d7=(p-r)*(t+u);
            
            
            c[0][0]=d5+d4-d2+d6;
            c[0][1]=d1+d2;
            c[1][0]=d3+d4;
            c[1][1]=d1+d5-d3-d7;
            
        }
        
    }
    
   int main(){
        
        int i,j;
        
		printf("First Matrix : ");
        for(i = 0;i<2;i++){
            for(j = 0;j<2;j++){
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        
        
        printf("Second Matrix : ");
        for(i = 0;i<2;i++){
            for(j = 0;j<2;j++){
                scanf("%d",&b[i][j]);
            }
            printf("\n");
        }
        
        
        multiply(2,a,b);
        
        
         for(i = 0;i<2;i++){
            for(j = 0;j<2;j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
        

return 0;
        
    }

        
            
            
                
