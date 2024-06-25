#include <stdio.h>

void swap(int *ip, int *jp) {
    int temp = *ip;
    *ip = *jp;
    *jp = temp;
}

void bubbleSort(int * array, int n) {
   for(int l = 0; l < n-1; l++) {     
       for(int m = 0; m < n-l-1; m++) {
           if(*(array+m) > *(array+m+1)) {
               swap((array+m), (array+m+1));
           }
       }
   }
}

void printArray(int *array, int size) {
    for (int l = 0; l < size; l++)
        printf("%d ", *(array + l));
    printf("\n");
}

int main() {
    int array[] = {64, 47, 25, 28, 22, 17, 90};
    int n = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, n);
    printf("Sorted array: \n");
    printArray(array, n);
    return 0;
}