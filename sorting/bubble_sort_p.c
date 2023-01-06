#include <stdio.h>

void swap( int *p1, int *p2 ) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void bubbleSort( int arr[], int size ) {
    if ( size <= 1 ) return;
    int *last = arr + (size-1);
    int curr;
    for ( curr=0 ; curr < *last; curr++ ) {
        if ( *(arr + curr) < *(arr + (curr + 1)) ) {
            swap( &arr[curr], &arr[curr+1] );
    }
  }
}
