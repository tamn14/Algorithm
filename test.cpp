#include<stdio.h>

typedef int keytype;
typedef float othertype;
typedef struct {
    keytype key;
    othertype otherfields;
}recordtype ;

void Swap(recordtype &x, recordtype &y)
{
    recordtype temp;
    temp = x;
    x = y;
    y = temp;
}

void SelectionSort (recordtype a[ ], int n){
    int i,j, lowindex;
    keytype lowkey;
    for(i=0; i<=n-2; i++){
        lowkey = a[i].key;
        lowindex = i;
        for(j=i+1; j<=n-1; j++)
            if(a[j].key < lowkey) {
                lowkey = a[j].key;
                lowindex = j;
        }
        Swap(a[i],a[lowindex]);
}
}




int main(){
    int n;
    recordtype A[100];
    freopen("D:\\Data Structure and Algorithm\\a.txt" ,  "r" ,stdin);
    scanf("%d" , &n);
    for(int i =0 ; i<n;i++){
        scanf("%d%f", &A[i].key , &A[i].otherfields);
    }

    for(int i = 0 ; i< n ; i++){
        printf("Gia tri tai vi tri thu[%d] = %d  %.1f\n" ,i+1, A[i].key , A[i].otherfields);
    }
    printf("--------------SAU KHI SAP XEP----------------\n");
    SelectionSort(A , n );
    for(int i = 0 ; i< n ; i++){
       printf("Gia tri tai vi tri thu[%d] =  %d    %.1f\n" ,i+1, A[i].key , A[i].otherfields);
    }
}