
#include"stdio.h"
#include "stdlib.h"
/*
练习动态分配内存以及冒泡排序
*/
void qsort(int *array, int n);
int main()
{

	int n;
	int *array;
	printf("How many values are there? \n");
	if ((scanf("%d", &n)) != 1 || n <= 0)
	{
		printf("Illegal number of values.\n");
		return 1;
	}
	
	// alloc memory
	array = (int *)malloc(n * sizeof(int));
	if (array == NULL)
	{
		printf("Can't get memory for that many values. \n");
		return 1;
	}
	for (int i = 0; i < n; ++i)
	{
		printf(">>\n");
		if ((scanf("%d", array+i)) != 1)
		{
			printf("Error reading value.#%d\n", i);
			free(array);
			return 1;
		}
	}
	printf("The array you entered is as follows：\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(array+i));
	}
	printf("\n");
	qsort(array, n);
	printf("The result after sorting is：\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(array+i));
	}
	free(array);
	printf("\n");
	return 1;
}
void qsort(int *array, int n){

	int temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}