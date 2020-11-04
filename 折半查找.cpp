#include <stdio.h>

#define N 20

int BinarySearch(int* a, int length, int key);

void main(void) {
	int a[N] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	printf("%d", BinarySearch(a, N - 1, -1));
}

/*’€∞Î≤È’“*/
int BinarySearch(int* a, int length, int key) {
	int low = 0, high = length - 1;
	int mid = -1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (a[mid] == key) {
			return mid+1;
		}
		if (a[mid] < key) {
			low = mid + 1;
		}
		if (a[mid] > key) {
			high = mid - 1;
		}
	}
	return -1;
}