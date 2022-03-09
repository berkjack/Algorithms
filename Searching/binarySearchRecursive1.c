#include <stdio.h>

void binarySearch(int arr[], int number, int first, int size) {
		
  if (first <= size) {
    int middle = first + (size-first) / 2;
		
		if (number < arr[middle]) {
			return binarySearch(arr, number, first, middle-1);
		}
		else if (number > arr[middle]) {
			return binarySearch(arr, number, middle+1, size);
		}
		else {
			printf("%d is at index of %d", number, middle);
			return;
		}
	}
	printf("There is no such element in this array.");
	return;
}
