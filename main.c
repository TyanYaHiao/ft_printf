# include "includes/ft_printf.h"
#include <float.h>

int main()
{
	char *str = "hello";
	ft_printf("%.3Lf\n", LDBL_MIN);
	printf("%.3Lf\n", LDBL_MIN);
	ft_printf(CYAN"%s\n"RESET, str);
	ft_printf("{yellow}%s{eoc} hi\n"RESET, str);
	printf("{%10d}\n", 42);
	ft_printf("{%10d}\n", 42);
	return (0);
}
