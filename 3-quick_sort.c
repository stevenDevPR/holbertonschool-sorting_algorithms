#include "sort.h"
#include <stdio.h>

/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - Partitions the array using the Lomuto scheme
 * @array: The array to partition
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 *
 * Return: The index of the pivot element
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quicksort - Sorts an array of integers using the Quick sort algorithm
 * @array: The array to sort
 * @low: The starting index of the partition to sort
 * @high: The ending index of the partition to sort
 * @size: The size of the array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high, size);

		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to sort
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
