#include<stdio.h>

void SelectionSort(int A[] ,int n){
    for(int i = 0 ; i<= n-1 ; i++){
        int index= i ;
        int min = A[i];
        for(int j =i ; j< n ; j++){
            if(A[j] < min){
                index = j ;
                min = A[j];
            }
        }
        int tmp = A[i];
        A[i] = A[index];
        A[index] = tmp; 
 
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
    SelectionSort(A , n );
    for(int i = 0 ; i< n ; i++){
        printf("Gia tri tai vi tri thu[%d] = %d\n" ,i+1, A[i]);
    }
}
