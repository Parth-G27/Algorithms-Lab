#include<stdio.h>
#include<time.h>
#define max 10

struct queue{
    int f;
    int r;
    int arr[30];
};

int isfull(struct queue *q){
    if(q->r==max-1){
        return 1;
    }
    return 0;
    
}

int isEmpty(struct queue *q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(q->r==max-1){
        printf("Queue is Full \n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue *q){
    int a=-1;
    if(q->f == q->r){
        printf("Queue is Empty \n");
    }
    else{
        //printf("The deleted element is %d \n",q->arr[q->f]);
        q->f++;
        a = q->arr[q->f];
        
    }
    return a;
}

void print_queue(struct queue *q){
    for(int i=q->f;i<=q->r;i++){
        printf("%d \t",q->arr[i]);
    }
    printf("\n");
}

int main(){
    clock_t t;
    t=clock();

    struct queue q;
    struct queue* ptr = &q;
    q.f=0;
    q.r=0;

    int node ;
    int i = 5 ;
    printf("%d",i);
    int visited[7]={0,0,0,0,0,0,0};
    int a [7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
    };

    visited [i] = 1;
    enqueue(&q,i);



    while (!isEmpty(&q)){
        int node = dequeue(&q);
        
        for (int j = 0; j < 7; j++)
        {
           
            if(a[node][j] ==1 && visited[j] == 0){
                printf("%d", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    t=clock()-t;
    printf(" Time taken : %f \n",((float)t)/CLOCKS_PER_SEC);


    return 0;
}