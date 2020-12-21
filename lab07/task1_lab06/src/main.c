#include<stdio.h>

/* sorting an array using the bubble method*/

void some_function( int A[])
{
A[0];
A[10]=10; //ERROR!
}
int main ()
 {
 
    int arr[5]= {5,4,10,4,5}; 	/* arr - array; size array */
	
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
		some_function (arr);
		printf (" %d ",arr[i]);
		}

	return 0;
	}
