#include<stdio.h>
#include<time.h>

void bubble_sort(int* ptr,int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(ptr[j]>ptr[j+1]){
                temp=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d \t",ptr[i]);
    }
}

int main(){
    int arr[20],a;
    printf("Enter the number of elements in the unsorted array \n");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("Enter the %d element for the unsorted array\n",i+1);
        scanf("%d",&arr[i]);
    }
    
    int* ptr = & arr[0];

    clock_t t;
    t=clock();
    bubble_sort(ptr,a);
    t=clock()-t;
    printf("The time taken : %f \n",((float)t)/CLOCKS_PER_SEC);


    return 0;
}