#include<stdio.h>
#include<time.h>
int visited[10]={0,0,0,0,0,0,0,0,0,0};
    int a [10][10] = {
        {0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 1},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 0}
    };

void DFS(int i){
    printf("%d",i);
    visited[i] = 1;
    for(int j=0;j<10;j++){
        if(a[i][j]==1 && visited[j]==0){
            DFS(j);
        }
    }  
}


int main(){
    clock_t t;
    t=clock();
    DFS(0);
    t=clock()-t;
    printf(" Time taken : %f \n",((float)t)/CLOCKS_PER_SEC);
    return 0;
}