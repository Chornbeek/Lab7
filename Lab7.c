#include <stdio.h>

int sort(int arr[], int count){

    int i, j, temp;
    int swaps = 0;
    for(i = 0; i < count-1; ++i){

        for(j=0; j<count-1-i; ++j){

            if(arr[j] > arr[j+1]){

                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swaps++;
            }
        }
    }

    return swaps;
}

int main(void){

    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72} ;
    int counter = 9;
    int i;

    int totalSwaps = sort(arr, counter);

    printf("Swaps: %d\n", totalSwaps); 

    for (i = 0; i < counter; i++) {
        printf("Values: %d\n", arr[i]); 
    }
    return 0;
}

