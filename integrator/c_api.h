#ifndef C_API_HPP
#define C_API_HPP


#ifdef __cplusplus
  extern "C" {
#endif

/* ----------------------------------------------------------------------
 * Library functions for computation in SIMPSON
 * ---------------------------------------------------------------------- */

  /**
   * @brief This function is a wrapper around integrate function in simpson library
   * 
   * @param a real number
   * @param b real number
   * @param bins positive integer
   * @param function function pointer to the function that is integrated over
   * @return double result as a real number
   */
  double simpson_integrate(const double a,
                  const double b,
                  const unsigned bins,
                  double (*function) (double));

  /**
   * @brief This function is a wrapper for obtaining the version of the simpson library
   * 
   */
  void simpson_get_version();

#ifdef __cplusplus
  }
#endif



#endif /* C_API_HPP */
