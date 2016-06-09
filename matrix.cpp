// Write code to calculate C = A * B, where A, B and C are matrices of size N * N
// Measure the execution time of your code for various Ns, and plot the relationship between N and the execution time

#include<cstdio>
#include<ctime>

#define n 2

int main(){
    
    int a[n][n],b[n][n],c[n][n] = {0};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    
    clock_t begin = clock();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    clock_t end = clock();
    
     // for(int i = 0; i < n; i++){
     // 	for(int j = 0; j < n; j++){
     // 		printf("c[%d][%d]=%d\n",i,j,c[i][j]);
     // 	}
     // }
    
    double sec = double(end - begin)/CLOCKS_PER_SEC;
    
    printf("%f",sec);
    
    return 0;
    
}