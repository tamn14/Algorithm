#include<stdio.h>

void ThapHN(int n,char A,char C,char B){
    if(n== 1){
        printf("Chuyen %d tu %c sang %c \n" , n,A,C );
    }

    else{
        ThapHN(n-1, A,B,C);
        printf("Chuyen %d tu %c sang %c \n" , n,A,C );
        ThapHN(n-1 , B, C,A);
    }
}

int main(){
    int n; 
    printf("Nhap N : ");
    scanf("%d", &n);
    ThapHN(n,'A','C','B');
}