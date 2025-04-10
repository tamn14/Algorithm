#include<stdio.h>


int BinarySearch(int A[] , int k , int n){
    int left = 1 ;
    int right = n;
    int mid;
    while (left <= right)
    {
        mid=  (left + right) / 2;
        if(A[mid] == k){
            return mid;
        }
        else if(A[mid] < k){
            left = mid + 1;
        }
        else if (A[mid] > k )
        {
            right = mid -1;
        }
        


    }
    return -1;
    

}

int BinarySeachUSeRecursive(int A[] , int k , int n, int left , int right){
    // int left = 1;
    // int right = n;
    // int mid =(left+right)/2;
    if(left == right){
        if(A[left] == k)
            return left;
        else return -1;    

    }
    else{
        int mid =(left+right)/2;
        if(A[mid] == k) return mid;
        else{

        
            if(A[mid] < k){
                BinarySeachUSeRecursive(A ,k ,  n , mid +1 ,  right );

            }

            else{
                BinarySeachUSeRecursive(A ,k ,  n ,left ,   mid -1 );

            }
        }    
    }




}



// int BinarySeachUSeRecursive(int A[] , int k , int n, int left , int right){
//     int mid =(left+right)/2;
//     if(left == right){
//         if(A[mid] == k)
//             return mid;
//         else return -1;    

//     }

//     else if(A[mid] < k ){
//         left = mid +1;
//         BinarySeachUSeRecursive(A,k,n,left, right);
//     }
//     else {
//         right =  mid-1;
//         BinarySeachUSeRecursive(A,k,n,left,right);
//     }

// }


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

    
    if(BinarySearch(A , k,n) != -1){
        printf("Tim thay K\n ");
        printf("Vi tri cua K la : %d\n" , BinarySearch(A , k,n) +1 );
    }

    else {
        printf("Khong tim thay k ");
    }


    printf("\n-----------------------------------------------------------\n");

    if(BinarySeachUSeRecursive(A , k,n , 0 , n-1) != -1){
        printf("Tim thay K\n ");
        printf("Vi tri cua K la : %d\n" , BinarySeachUSeRecursive(A , k,n , 0 , n-1) +1 );
    }

    else {
        printf("Khong tim thay k ");
    }

   
    


}