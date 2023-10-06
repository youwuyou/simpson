#include "c_api.h"
#include "integrator/simpson.hpp"

double simpson_integrate(const double a,
                 const double b,
                 const unsigned bins,
                 double (*function) (double))
{
    return integrate(a, b, bins, function);
}

void simpson_get_version(){
    get_version();
}