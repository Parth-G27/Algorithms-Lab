#include<stdio.h>
#include<stdlib.h>




int main(){
    int* ptr;
    int n, i;
 
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    
    ptr = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; ++i) {
        printf("Enter the %d element \n",i+1);
        scanf("%d",&ptr[i]);
    }

    int key;
    int s=0;
    printf("Enter the key element \n");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(key == ptr[i]){
            printf("Key found at %d position \n",i+1);
            s = 1;
            break ;
        }
    }

    if (s==0){
        printf("Key NOT found at any position \n");
    }


 
    
}