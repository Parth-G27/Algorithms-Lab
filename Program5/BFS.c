#include<stdio.h>
#define max 10

struct queue{
    int f;
    int r;
    int arr[30];
};

void enqueue(struct queue *q, int val){
    if(q->f==max-1){
        printf("Queue is Full \n");
    }
    else if(q->r==-1){
        q->r++;
        q->f++;
        q->arr[q->r]=val;
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

void dequeue(struct queue *q){
    if(q->f==-1 && q->r==-1){
        printf("Queue is Empty \n");
    }
    else{
        printf("The deleted element is %d \n",q->arr[q->f]);
        q->f++;
    }
}

void print_queue(struct queue *q){
    for(int i=q->f;i<=q->r;i++){
        printf("%d \t",q->arr[i]);
    }
    printf("\n");
}

int main(){

    struct queue q;
    struct queue* ptr = &q;
    q.f=-1;
    q.r=-1;

    enqueue(ptr,9);
    enqueue(ptr,5);
    enqueue(ptr,2);
    print_queue(ptr);
    dequeue(ptr);
    dequeue(ptr);
    print_queue(ptr);
    enqueue(ptr,6);
    enqueue(ptr,8);
    print_queue(ptr);

}