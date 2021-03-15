
#include <stdio.h>
#include<stdlib.h>>
void insertionSort(int a[], int m);
int main() {
int i;
int a[] = {11, 78, 2, 8, 1, 24, 8};
int m = sizeof(a) / sizeof(a[0]);
printf("The input array is : \n");
for (i = 0; i < m ; i++) 
{
printf("%d ", a[i]);
}
printf("\n");
insertionSort(a, m);
printf("The sorted array is : \n");
for (i = 0; i < m; i++) {
printf("%d ", a[i]);
}
printf("\n");
}
void insertionSort(int a[], int m) {
int i, key, j;
for (i = 1; i < m; i++) {
key = a[i];
j = i - 1;
while (j >= 0 && a[j] > key) {
a[j + 1] = a[j];
j = j - 1;
}
a[j + 1] = key;
}
}
