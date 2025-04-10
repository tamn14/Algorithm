#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int A[] , int k, int n){
    for (int i = 0; i < n ; i++){
       if(A[i] == k){
            return i;
         
       }
           
    }
    return -1;

}


int main()
{
    int A[100];
    int n,k;
    freopen("D:\\Data Structure and Algorithm\\LinearSearch.txt" ,  "r" ,stdin);
    scanf( "%d" , &n);
    scanf( "%d" , &k);

    for(int i =0 ; i< n ; i++){
        scanf("%d" , &A[i]);
    }
    for(int i =0 ; i< n ; i++){
        printf("Gia Tri Thu %d = %d \n" , i+1 , A[i]);
    }

    
    if(LinearSearch(A , k,n) != -1){
        printf("Tim thay K\n ");
        printf("Vi tri cua K la : %d\n" , LinearSearch(A , k,n) +1 );
    }

    else {
        printf("Khong tim thay k ");
    }
   
    


}
