#include<stdio.h>

void Merge(int A[] , int left , int mid , int right ){
    int len_left = mid  - left +1;
    int len_right = right - mid ;
    int ALeft[len_left];
    int ARight[len_right];
    for(int i = 0 ; i< len_left ; i++){
        ALeft[i] = A[left+i];
    }
    for(int i = 0 ; i< len_right ; i++){
        ARight[i] = A[mid+i + 1];
    }
    int i = 0;
    int j =0;
    int k =left;
    while(i< len_left && j< len_right){
        if(ALeft[i] <= ARight[j]){
            A[k] = ALeft[i];
            i++;
        }
        else if(ALeft[i] >  ARight[j]){
            A[k] = ARight[j];
            j++;
        }
        k++;
    }

    while(i < len_left){
        A[k] = ALeft[i];
        i++;
        k++;
    }


    while(j < len_right){
        A[k] = ARight[j];
        j++;
        k++;
    }

    
    

}



void MergeSort (int A[] , int left , int  right){
    if(left < right){
        int  mid = (left+right)/2;
        MergeSort(A,left,mid);
        MergeSort(A,mid+1 ,right);
        Merge(A,left,mid,right);

        
    
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

    printf("-------------------------------------\n");

    MergeSort(A,0,n-1);

     for(int i =0 ; i< n ; i++){
        printf("Gia Tri Thu %d = %d \n" , i+1 , A[i]);
    }

}
