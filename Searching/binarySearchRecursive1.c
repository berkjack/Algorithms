#include <stdio.h>

void binarySearch(int arr[], int element, int first, int last) {
		
	if (first <= last) {
		int middle = first + (last-first) / 2;
		
		if (element < arr[middle]) {
			return binarySearch(arr, element, first, middle-1);
		}
		else if (element > arr[middle]) {
			return binarySearch(arr, element, middle+1, last);
		}
		else {
			printf("%d is at index of %d", element, middle);
			return;
		}
	}
	printf("There is no such element in this array.");
	return;
}
