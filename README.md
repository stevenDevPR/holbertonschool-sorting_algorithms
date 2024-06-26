# C - Sorting algorithms & Big O

## Background Context

This project is meant to be done by groups of two students.
Each group of two should pair program for at least the mandatory part.

## Data Structure and Functions

* For this project you are given the following print_array, and print_list functions:


		#include <stdlib.h>
		#include <stdio.h>
	
		/**
		 * print_array - Prints an array of integers
		 *
		 * @array: The array to be printed
		 * @size: Number of elements in @array
		 */
		void print_array(const int *array, size_t size)
		{
		    size_t i;
		
		    i = 0;
		    while (array && i < size)
		    {	
		        if (i > 0)
		            printf(", ");
		        printf("%d", array[i]);
		        ++i;
		    }
		    printf("\n");
		}


 * Funcion:

		#include <stdio.h>
		#include "sort.h"
	
		/**
		 * print_list - Prints a list of integers
		 *
		 * @list: The list to be printed
		 */
		void print_list(const listint_t *list)
		{
		    int i;
	
		    i = 0;
		    while (list)
		    {
		        if (i > 0)
		            printf(", ");
		        printf("%d", list->n);
		        ++i;
		        list = list->next;
		    }
		    printf("\n");
		}


* Our files print_array.c and print_list.c (containing the print_array and print_list functions)
 will be compiled with your functions during the correction.
* Please declare the prototype of the functions print_array and print_list in your sort.h header file
* Please use the following data structure for doubly linked list:


		/**
		 * struct listint_s - Doubly linked list node
		 *
		 * @n: Integer stored in the node
		 * @prev: Pointer to the previous element of the list
		 * @next: Pointer to the next element of the list
		 */
		typedef struct listint_s
		{
		    const int n;
		    struct listint_s *prev;
		    struct listint_s *next;
		} listint_t;


Please, note this format is used for Quiz and Task questions.

* O(1)
* O(n)
* O(n!)
* n square -> O(n^2)
* log(n) -> O(log(n))
* n * log(n) -> O(nlog(n))
* n + k -> O(n+k)
* …

Please use the “short” notation (don’t use constants).
Example: O(nk) or O(wn) should be written O(n).
If an answer is required within a file, all your answers files must have a newline at the end.

## Tasks:

* **0. Bubble sort**
  * [0-bubble_sort.c](./0-bubble_sort.c): Function that sorts an array of integers in
 ascending order using the Bubble sort algorithm
 
  * Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

  - in the best case
  - in the average case
  - in the worst case

* **1. Insertion sort**
  * [1-insertion_sort_list.c](./1-insertion_sort_list.c): Function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

  * Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

  - in the best case
  - in the average case
  - in the worst case


* **2. Selection sort**
  * [2-selection_sort.c](./2-selection_sort.c): Function that sorts an array of integers in ascending order using the Selection sort algorithm

  * Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

  - in the best case
  - in the average case
  - in the worst case

* **3. Quick sort**
  * [3-quick_sort.c](./3-quick_sort.c): Function that sorts an array of integers in ascending order using the Quick sort algorithm

  * Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

  - in the best case
  - in the average case
  - in the worst case

## Advance Tasks:
