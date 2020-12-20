#include <stdbool.h>
#include <stdlib.h>
/**
 * @file lab07.c виконати завдання 1
 * 
 * виконати сортування масиву
 */

/**
 * сортування масиву методом "бульбашки"
 * @param n - розмір масиву;
 * @param arr - масив;
 **/
int main()
{
 /**
 * кількість елементів масиву
 */ 
	int arr[5]={5,4,10,4,5}; 	/* arr - array; size array */
	
	int i=0;
	int j=0;
	int q;
	
	for ( i = 0; i < 5 - 1; i++ ) {
		for ( j = 0; j < 5 - i - 1; j++) {
			if (arr[j] >  arr[j + 1]) {
			
			q = arr[j];
			arr [j] = arr[j + 1];
			arr [j + 1] = q;
			}
		}
	}
	
	for ( i = 0; i < 5; i++) {
		printf (" %d ",arr[i]);
		}
	return 0;
	}
