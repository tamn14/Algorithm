#include<stdio.h>

void InsertionSort (int A[] , int n){
    int key;
    for(int i = 1 ; i< n ; i++){
        key = A[i];
        int j =  i-1;
        while(j>=0 and A[j] > key){
            A[j+1] = A[j];
            j--;
        }

        A[j+1] = key;
    }
}

int main(){
    int A[100];
    int n;
    freopen("D:\\Data Structure and Algorithm\\Sort.txt" ,  "r" ,stdin);
    scanf("%d", &n);
    for(int i =0 ; i < n ; i++){
        scanf("%d" , &A[i]);
    }
    for(int i =0 ; i< n ; i++){
        printf("Gia Tri Thu %d = %d \n" , i+1 , A[i]);
    }

    InsertionSort(A, n);
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
   

    
  
}