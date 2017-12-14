#include <stdio.h>

#include "mod2_b.h"

int mod2_b_func(void)
{
	printf("This is file:%s, func:%s, line:%d\n", __FILE__, __func__, __LINE__);

	return 0;
}

