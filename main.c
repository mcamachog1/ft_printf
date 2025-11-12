#include <stdio.h>
#include "helpers.h"

int	main(void)
{
	printf("%d\n", ft_printf("numero=%d y % ra", 5, 3));
	printf("%d\n", printf("numero=%d y % ra", 5, 3));
	//printf("numero=%d y %%	ra", 5);
	//printf("numero=%d y %   sin especificador", 5, "lo toma");
	//printf("numero=%d y %   s? especificador", 5, "lo toma");
	//printf("numero=%d y %   js especificador", 5, "lo_toma");
	//printf("numero=%d y %42 especificador", 5);
	//printf("numero=%d y %%42 especificador", 5);
	return (0);
}
