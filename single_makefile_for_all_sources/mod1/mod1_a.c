#include <stdio.h>

#include "mod1_a.h"

int mod1_a_func(void)
{
	printf("This is file:%s, func:%s, line:%d\n", __FILE__, __func__, __LINE__);

	return 0;
}

