# include "includes/ft_printf.h"
#include <float.h>

int main()
{
	char *str = "hello";
	ft_printf("%.3Lf\n", LDBL_MIN);
	printf("%.3Lf\n", LDBL_MIN);
	ft_printf(CYAN"%s\n"RESET, str);
	ft_printf("{red}%s{eoc}hi\n"RESET, str);
	return (0);
}
