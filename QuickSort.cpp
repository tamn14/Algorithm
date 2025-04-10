#include<stdio.h>

void Swap(int A[] , int x, int y){
    int tmp = A[x];
    A[x] =  A[y];
    A[y] = tmp;
}

int Partition (int A[] , int left , int right){
    int pivot = A[left];
    int count = 0;
    for(int i =left+1 ; i<= right ; i++){
        if(A[i] <= pivot){
            count++;
        }
    }

    int pivotIndex = left+ count;

    Swap(A,left,pivotIndex);

    int i = left;
    int j = right;
    while(i <  pivotIndex && j > pivotIndex){
        while(A[i] <= pivot){
            i++;
        }
        while(A[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            Swap(A ,i ,j);
        }
    }
    return pivotIndex;
}



void QuickSort(int A[] , int left , int right){
    if(left>= right){
        return ;
    }

    int pivot = Partition(A , left , right);

    QuickSort(A, left, pivot-1);
    QuickSort(A, pivot+1 , right);


}

int main(){
    freopen("D:\\Data Structure and Algorithm\\Sort.txt" ,  "r" ,stdin);
    int n;
    int A[100];
    scanf("%d" , &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &A[i]);
    }
   for (int i = 0; i < n; i++){
    printf("%d ", A[i]);
   }

   printf("\n----------------------------------\n");


   QuickSort(A ,  0 , n-1);
   for (int i = 0; i < n; i++){
    printf("%d ", A[i]);
   }


   
    
    

}