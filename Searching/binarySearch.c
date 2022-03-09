#include <stdio.h>

void binarySearch(int arr[], int element, int first, int last) {
	int middle = first + (last-first) / 2;
	
	if (element < arr[middle] && middle != first) {
		binarySearch(arr, element, first, middle-1);
	}
	else if (element > arr[middle] && middle != last) {
		binarySearch(arr, element, middle+1, last);
	}
	else if (element == arr[middle]) {
		printf("%d is at index of %d", element, middle);
	}
	else {
		printf("There is no such element in this array");
	}
}
