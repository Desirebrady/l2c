#include <stdio.h>

void  ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp = a;
	b = a;
	b = tmp;
}

int main()
{
	int *a;
	int *b;

	printf("The value of 'a' before swap is : %d, and value of 'b' is : %d\n", a , b);
	ft_swap(a, b);
	printf("The value of 'a' after swap is : %d, and value of 'b' is : %d\n",a, b);
	return (0);
}
