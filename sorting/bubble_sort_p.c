#include <stdio.h>
#include <stdbool.h>

void swap( int *p1, int *p2 ) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void bubbleSort_p( int *first, int *last, int size ) {
    if (size <= 1) return;
    last = first + (size-1);
    int curr;
    _Bool swapped = false;
    for (curr=0 ; curr < *last; curr++) {
        if (*(first + curr) > *(first + (curr + 1))) {
            swap(&first[curr], &first[curr+1]);
            swapped = true;
    }
    if (swapped) 
        bubbleSort_p(first, last-1,  size-1);
  }
}

void bubbleSortWithoutPointers( int arr[], int size ) {
    if (size <= 1) return;
    for (int i=0; i < size-1; ++i) {
        for (int j=0; j < (size-1-i); ++j) {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void test() {
    int testArray[10] = {2, 3, 1, 4, 6, 5, 9, 8, 7, 11};
    for(int j=0; j < 10; ++j)
        printf("Elements in the testArray- %i\n", testArray[j]);

    for (int i=0; i < 10; ++i)
        printf("Pointers of the array before sort - %p\n", &testArray[i]);

    bubbleSort_p(testArray, testArray+10, 10);

    for(int j=0; j < 10; ++j)
        printf("Elements in the testArray- %i\n", testArray[j]);

    for (int i=0; i < 10; ++i)
        printf("Pointers of the array after sort - %p\n", &testArray[i]);
}

int main() {
    test();
}