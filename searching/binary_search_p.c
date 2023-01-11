#include <stdio.h>

// If I gather enough motivation, i will write a pointer only
// binary search algo for retrieving addresses of found items
// but for now, enjoy this!

int binary_search_f(int arr[], const int item, int size) {
    int lp = 0;
    int rp = size-1;
    while (lp <= rp) {
        int mid = (lp + rp) / 2;
        if (arr[mid] == item) return mid;
        if (arr[mid] > item) rp = mid - 1;
        else lp = mid + 1;
    }
    return -1;
}

int main() {
    int collections[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int to_be_found = 5, location=0;

    location = binary_search_f(collections, to_be_found, 8);
    if (location == -1)
        printf("%i cannot be found in the list.\n", to_be_found);
    else
        printf("%i is at %i in the list!\n", to_be_found, location);

    return 0;
}