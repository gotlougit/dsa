#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int _partition(int arr[], int start, int end) {

	int least_index = start - 1;

	for (int i = start; i < end; i++) {
		if (arr[i] <= arr[end]) {
			least_index++;
			if (least_index != i) {
				int temp = arr[least_index];
				arr[least_index] = arr[i];
				arr[i] = temp;
			}
		}

	}

	least_index++;
	int temp = arr[least_index];
	arr[least_index] = arr[end];
	arr[end] = temp;
	
	return least_index;
}

int partition(int arr[], int start, int end) {
	if (start < end) {
		_partition(arr, start, end);		
	} 
}

int rselect(int arr[], int start, int end, int index) {
	
	if (start < end) {

		//select random pivot
		int pivot_index = start + (rand() % (end - start));
		//make pivot element the last element of array for convenience
		int temp = arr[pivot_index];
		arr[pivot_index] = arr[end];
		arr[end] = temp;
		//partition along pivot
		int middle = partition(arr, start, end);
		//check selection
		if (middle == index) {
			return arr[index];
		} else if (middle > index) {
			rselect(arr, start, middle, index);
		} else {
			rselect(arr, middle+1, end, index);
		}

	}
}

/* Function to print an array */
void printArray(int A[], int start, int end) {

	for (int i = start; i < end - start + 1; i++) {
		printf("%d ", A[i]);
    	}
    	printf("\n");

}
  
/* Driver program to test above functions */
void main(void) {

	srand(time(NULL));

	int arr[] = {12,11,10,19};
    	int arr_size = sizeof(arr)/sizeof(arr[0]);
  
    	printf("Given array is \n");
    	printArray(arr, 0, arr_size - 1);
  
  	int x =	rselect(arr, 0, arr_size - 1, 1);
  
    	printf("\nRequested element is %d\n",x);

}
