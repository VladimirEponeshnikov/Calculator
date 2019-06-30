#include "ravno.cpp"
#inclide "ctest.h"

CTEST(ravno,test_lablplus)
{const double a=3.15;
const double b=3.20;
c=Calculator::lablplus(a,b);
const double res=6.35;
ASSERT_DBL_NEAR_TOL(a, real, tol);
}
