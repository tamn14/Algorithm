#include <stdio.h>

typedef struct 
{
    int count;
    int start,end;
}Result;

void findIncreasing(Result *R , int A[], int n){
    R->count = 0;
    R->start=0 ; 
    R->end = 0;
    for(int i = 0 ; i < n ; i++){
        int count = 1;
        int j = i;
        while(j<n && A[j] <= A[j+1]){
            count++;
            j++;
        }
        if(count > R->count){
            R->count = count;
            R->start = i;
        }
        


        

    }

    printf("Do dai day con dai nhat la : %d \n", R->count);
    printf("Cac con trong dai la : ");
    
    for(int i = R->start ;i< R->start+R->count ; i++){
        printf(" %d ", A[i]);
        
    }
    
    




}

int main(){
    Result L;
    int A[100];
    int n;
    freopen("D:\\Data Structure and Algorithm\\FindTheLargestSumOfSubsequences.txt" ,  "r" ,stdin);
    scanf("%d", &n);
    for(int i =0 ; i < n ; i++){
        scanf("%d" , &A[i]);
    }
    for(int i =0 ; i< n ; i++){
        printf("Gia Tri Thu %d = %d \n" , i , A[i]);
    }
    findIncreasing(&L , A,n);

    // printf("The larges sum of subsequences is :  %d\n" , L.sum);
    // printf("The subsequences is : ");
    // for(int i = L.start  ; i<= L.end ; i++){
    //     printf("%d ", A[i]);
    // }



}    
