#include <stdio.h>

#define N 10

int SeqSearch(int* a, int length,int key);

void main(void) {
		int a[N] = { 1,9,2,8,3,7,6,4,5,0 };
		printf("����Ԫ��%dΪ���еĵ�%d��Ԫ��", 8, SeqSearch(a, N, 8) + 1);
}

int SeqSearch(int* a, int length, int key) {
	int i;
	for (i = length - 1; a[i] != key; i--);
	return i;
}