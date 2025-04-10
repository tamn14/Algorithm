#include<stdio.h>

typedef struct 
{
   int sum;
  int start,end;  
}result;


int Sum(int A[], int start , int end){
    int sum=   0;
    for (int i = start; i <= end; i++)
    {
       sum+= A[i]; 
    }
    return sum;
}


result FindThelargesSumOfSubsequences (result *L,int A[], int n){
    L->sum = A[0];
    L->start = 0;
    L->end = 0;
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j< n ; j++){
            int sum = Sum(A,i,j);
            // printf("%d\n" , sum);
            if(sum > L->sum){
                // printf("%d\n", sum);
                // printf("%d\n" , L->sum);
                L->sum = sum;
                L->start = i;
                L->end = j; 
                // printf("--------------------\n");  
    }
            }
            // printf("--------------------\n");  
         
        }
         
      
}


int main(){
    result L;
    int A[100];
    int n;
    freopen("D:\\Data Structure and Algorithm\\FindTheLargestSumOfSubsequences.txt" ,  "r" ,stdin);
    scanf("%d", &n);
    for(int i =0 ; i < n ; i++){
        scanf("%d" , &A[i]);
    }
    for(int i =0 ; i< n ; i++){
        printf("Gia Tri Thu %d = %d \n" , i+1 , A[i]);
    }
    FindThelargesSumOfSubsequences(&L , A,n);

    printf("The larges sum of subsequences is :  %d\n" , L.sum);
    printf("The subsequences is : ");
    for(int i = L.start  ; i<= L.end ; i++){
        printf("%d ", A[i]);
    }



}    