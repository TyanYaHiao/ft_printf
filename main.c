# include "includes/ft_printf.h"
#include <float.h>

int main()
{
	printf("%*.*f\n", 12, 3, 14.0);
	ft_printf("%*.*f\n", 12, 3, 14.0);
	return (0);
}
