#include <stdio.h>
#include <assert.h>

int isPositive(int n)
{
    return n > 0;
}

int main()
{

    assert(isPositive(1) == 1);
    assert(isPositive(2) == 1);
    assert(isPositive(69) == 1);
    assert(isPositive(3) == 1);
    assert(isPositive(222) == 1);

    assert(isPositive(0) == 0);
    assert(isPositive(-66) == 0);
    assert(isPositive(-1) == 0);
    assert(isPositive(-33) == 0);
    assert(isPositive(-494949494) == 0);


    return 0;
}
