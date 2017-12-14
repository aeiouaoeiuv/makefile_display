#include <stdio.h>

#include "common.h"
#include "mod1_a.h"
#include "mod1_b.h"
#include "mod2_a.h"
#include "mod2_b.h"

int src1_call_mod1_a_func(void)
{
    mod1_a_func();

    return RETURN_SUCCESS;
}

int src1_call_mod1_b_func(void)
{
    mod1_b_func();

    return RETURN_SUCCESS;
}

int src1_call_mod2_a_func(void)
{
    mod2_a_func();

    return RETURN_SUCCESS;
}

int src1_call_mod2_b_func(void)
{
    mod2_b_func();

    return RETURN_SUCCESS;
}

