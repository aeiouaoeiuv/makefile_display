#include <stdio.h>
#include <string.h>

#include "common.h"
#include "src1.h"

int main(int argc, char *argv[])
{
    src1_call_mod1_a_func();

    src1_call_mod1_b_func();

    src1_call_mod2_a_func();

    src1_call_mod2_b_func();

    return RETURN_SUCCESS;
}

