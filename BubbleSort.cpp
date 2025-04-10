#include<stdio.h>


void BubbleSort(int A[] , int n){
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j< n ; j++){
            if(A[j] > A[i]){
                int tmp = A[j] ;
                A[j] =A[i];
                A[i] = tmp;
            }
        }
    }
}

int main(){
    int n;
    int A[100];
    freopen("D:\\Data Structure and Algorithm\\Sort.txt" ,  "r" ,stdin);
    scanf("%d" , &n);
    for(int i =0 ; i<n;i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0 ; i< n ; i++){
        printf("Gia tri tai vi tri thu[%d] = %d\n" ,i+1, A[i]);
    }
    printf("--------------SAU KHI SAP XEP----------------\n");
    BubbleSort(A , n );
    for(int i = 0 ; i< n ; i++){
        printf("Gia tri tai vi tri thu[%d] = %d\n" ,i+1, A[i]);
    }
}