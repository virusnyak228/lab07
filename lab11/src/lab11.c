/* Working with pointers */
#include<stdio.h>
#include<string.h>

int main()
{
	int SIZE;
	int *p_mass_number;  /* declared pointer */	
	int massiv[] = {1,2,3,4,5,6,7,8,9,10};
	p_mass_number = massiv;  /* stores the address of a variable mass */
	for (int i = 0;i < SIZE; i++)
	{
		fprintf(stdout,"Index[%d], value[%d], points [%p]\n", i, *p_mass_number, p_mass_number);
	*p_mass_number++;
	}

return 0;
}
