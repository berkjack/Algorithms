#include <stdio.h>

int binarySearch(int arr[], int element, int first, int last) {	
	
	while(first <= last) {
		int middle = first + (last - first) / 2;
		
		if (element == arr[middle]) {
			return middle;
		}
		else if (element > arr[middle]) {
			first = middle + 1;
		}
		else {
			last = middle - 1;	
		}
	}
	return -1;
}
