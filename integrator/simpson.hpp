/* Programming Techniques for Scientific Simulations, HS 2021
 * Simpson library header
 */

#ifndef SIMPSON_HPP
#define SIMPSON_HPP

/**
 * @brief Integrate over a given function given by a function pointer `function`
 * 
 * @param a double
 * @param b double
 * @param bins a positive integer
 * @param function a pointer to a function
 * @return double 
 */
double integrate(const double a,
                 const double b,
                 const unsigned bins,
                 double (*function)(double));

/**
 * @brief Get the version of the package
 * 
 */
void get_version();

/* PRECONDITIONS:

  the domain of the function function(x) covers the interval
  [min(a,b),max(a,b)]

  boundary values 'a' and 'b' are convertible to double

  'bins' convertible to unsigned

  'bins' > 0

  POSTCONDITIONS: the return value will approximate the integral of
                  the function function(x) over the interval [min(a,b),max(a,b)]
                  by the use of the Simpson rule with 'bins' equally sized
                  intervals

  COMPLEXITY: number of function calls = 2*bins+1

  DOCUMENTATION: the interval given by the boundaries 'a' and 'b' will
                 be divided to 'bins' equally sized bins, the function
                 'function' will be aproximated by a parabola using the function
                 values at the bin-boundaries and in the bin-midpoint the
                 integral will be approximated by the sum of the integrals over
                 each bin of the corresponding interpolating parabola
*/

#endif
