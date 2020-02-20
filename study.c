#include <stdio.h>
/**
   * main - Solve me
    *
     * Return: Always 0.
      */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	printf("The array a[0] : %d\n ", *a);
	*(a + 1) = 198;
	*(a + 2) = 298;
	printf("The array a[1] : %d\n ", *(a + 1));
	
	printf("The array a[2] : %d\n ", *(a + 2));
	a[3] = 398;
	printf("The array a[3] : %d\n ", *(a + 3));
	*(a + 4) = 498;
	printf("The array a[4] : %d\n ", *(a + 4));
	p = a + 1;
	printf("P is: %p\n", p);
	printf("P is: %p\n", &p);
	*p = 98;  
	p2 = a + 3;
	printf("P is: %p\n", p2);
	printf("P is: %p\n", &p2);
	*p2 = *p + 1337;

	return (0);
}
