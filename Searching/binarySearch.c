#include <stdio.h>

void binarySearch(int arr[], int number, int first, int size) {
	int middle = first + (size-first) / 2;
	
	if (number < arr[middle] && middle != first) {
		binarySearch(arr, number, first, middle-1);
	}
	else if (number > arr[middle] && middle != size) {
		binarySearch(arr, number, middle+1, size);
	}
	else if (number == arr[middle]) {
		printf("Dizinin %d. elemani", middle+1);
	}
	else {
		printf("Dizide boyle bir sayi bulunamadi!");
	}
}
