#include<stdio.h>
#include<math.h>

void  naturalSort(int A[] , int n){
    for(int i = 0 ; i< n-1 ; i++){
        for(int j = 0 ; j< n-1 ; j++){
            if(A[i] < A[j]){
                int  tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }

    }
}

int pow(int a, int b){
    if(b==0) return 1;
    else{
        return a*pow(a,b-1);
    }
}



typedef struct{
    int a,x,y;
}Coordinates;

typedef struct 
{
   Coordinates A[100];
   int n;
}List;


void init(List *L, int n){
    L->n = 0 ;

}

void add_Coor(List *L , int a,int x, int y){
    L->A[L->n].a = a;
    L->A[L->n].x = x;
    L->A[L->n].y = y;
   
    L->n++;
}

float distance( int x1 , int x2 , int y1 , int y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void distancMIN(List *L){
    float dis;
    float min = 9999.0;
    for (int i = 0; i < L->n; i++)
         for (int j = 1; j < L->n; j++)
            if(i!=j){
                if(distance(L->A[j].x, L->A[i].x , L->A[j].y, L->A[i].y) < min)
                    min = distance(L->A[j].x, L->A[i].x , L->A[j].y, L->A[i].y);
                    
            }



    for (int i = 0; i < L->n; i++)
         for (int j = 1; j < L->n; j++)
            if(i!=j && distance(L->A[j].x, L->A[i].x , L->A[j].y, L->A[i].y) == min){
                printf("Hai diem co khoang cach gan nhat la : (%d,%d) va (%d,%d)\n" , L->A[i].x, L->A[i].y , L->A[j].x, L->A[j].y);

            }      
    
    
}




int main(){
    int n,m;
    int A[100];
    freopen("D:\\Data Structure and Algorithm\\Sort.txt" ,  "r" ,stdin);
    scanf("%d", &n);
    for(int i = 0 ; i< n ; i++ ){
        scanf("%d" , &A[i]);
    }

    for(int i = 0 ; i< n ; i++){
        printf("%d ", A[i]);
    }

    naturalSort(A,n);

    printf("\nAfter sort: \n");

    for(int i = 0 ; i< n ; i++){
        printf("%d ", A[i]);
    }
    printf("\n---------------------------\n");
    freopen("D:\\Data Structure and Algorithm\\pow.txt" ,  "r" ,stdin);
     scanf("%d", &m);
     int B[100];
    for(int i = 0 ; i< m*2 ; i+=2 ){
        scanf("%d %d" , &B[i], &B[i+1]);
    }
    for(int i = 0 ; i< m*2 ; i++){
        printf("%d \n", B[i]);
    }

    for(int i = 0 ; i< m*2 ; i+=2){
        printf("Pow(%d,%d) = %d \n" , B[i] , B[i+1],pow(B[i] , B[i+1]));
    }

    printf("\n---------------------------\n");
    freopen("D:\\Data Structure and Algorithm\\Coordinate.txt" ,  "r" ,stdin);
    int p,x,y,e,a;
    List L;
    scanf("%d", &p);
    init(&L ,  p);
    for(int  i =  0; i< p ; i++){
        scanf("%d%d%d", &a,&x,&y);
        add_Coor(&L ,a, x,y);
    }

    distancMIN(&L);

    





    








    
    
}


