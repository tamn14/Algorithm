#include<stdio.h>

int check[100];
int permutation[100];


void printPer(int permutation[100] , int n){
    for(int i =1 ; i<= n ;i++){
        printf(" %d " , permutation[i]);
    }
    printf("\n");
}


void Permutation( int k , int n){
    for(int i =1   ; i<= n ; i++){
        if(check[i] == 0){
            permutation[k] = i;
            if(k == n){
                printPer(permutation, n);
            }
            else{
                check[i] = 1;
                Permutation(k+1,n);
                check[i] = 0;
            }
        }
    }
}


int main()
{
    int n ;
    printf("Nhap n: ");
    scanf("%d" , &n);
    for (int i = 1; i <= n; i++)
    {
        check[i] = 0;
    }

    Permutation(1,n);
    printf("yyyyy");
    
}

  