#include<stdio.h>
#include<time.h>

void binary_search(){
    int arr[50], n,key;
    printf("Enter the no. of elements in the array \n");
    scanf("%d",&n);

    printf("Enter the elements in acsending order \n");
    for(int i=0;i<n;i++){
        printf("Enter %d element \n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the key \n");
    scanf("%d",&key);

    int min = 0;
    int max = n-1;
    int mid = (max+min)/2;

    while(1){
        if(key == arr[max]){
            printf("Found in %d position \n",max+1);
            return ;
        }
        if(key == arr[min]){
            printf("Found in %d position \n",min+1);
            return ;
        }
        if(key == arr[mid]){
            printf("Found in %d position \n",mid+1);
            return ;
        }
        if (key>arr[mid]){
            min = mid;
            mid = (max+min)/2;
        }
        else if(key<arr[mid]){
            max = mid;
            mid = (max+min)/2;
        }
    }
}


int main () {
    clock_t t;
    t=clock();

    binary_search();

    t=clock()-t;
    printf("Time take in milliseconds : %f \n",((float)t)/CLOCKS_PER_SEC);

    return 0;
}