#include<stdio.h>

int  JumpSearch(int A[] , int k  , int n){
    int d = 2;
    int i = 0 ;
    int j = i+d;
    while(j<n && A[j] < k){
        j += d;
        i +=d;

    }
    if( j  >= n) {
        j = n - 1;
    }
    while (A[i] < k){
        i = i+1;
        if( (i > n) || (i >j)){
            return -1;
        }



    }

    if(A[i]== k) return i;
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

    
    if(JumpSearch(A , k,n) != -1){
        printf("Tim thay K\n ");
        printf("Vi tri cua K la : %d\n" , JumpSearch(A , k,n) +1 );
    }

    else {
        printf("Khong tim thay k ");
    }
   
    


}