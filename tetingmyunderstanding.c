#include <stdio.h>
#include <stdarg.h>
int sum(int items, ...)
{
	int	i;
	int	sum;
	int	num;

	i = 0;
	sum = 0;
	va_list args;
	va_start(args, items);
	while (i < items)
	{
		num = va_arg(args, int);
		sum = sum + num;
		i++;
	}
	va_end(args);
	return (sum);
}

int	main(void)
{
	printf("%d", sum(3, 1,2,3));
}