#include <stdio.h>

int Find(int* arr, int len, int target){
    int start = 0;
    int end = len - 1;
    int mid;
    while(start <= end){
        mid = (start + end)  / 2;
        if(mid < target){
            end = mid - 1;
        }
        else if(mid > target){
            start = mid + 1;
        }
        else{
            return 1;
        }
    }

    return 0;
    
}


int main(void){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;
    scanf("%d", &num);

    if(Find(arr, 10, num)){
        printf("있다\n");
    }
    else{
        printf("없다\n");
    }

    return 0;
}