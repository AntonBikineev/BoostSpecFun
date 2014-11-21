// Copyright Anton Bikineev 2014.
// Use, modification and distribution are subject to the
// Boost Software License, Version 1.0
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost.org/LICENSE_1_0.txt)

#include "bridging_header.h"

#include <boost/math/tr1.hpp>

double boost_swift_binding_acosh(double x)
{
  return boost::math::tr1::boost_acosh(x);
}

double boost_swift_binding_asinh(double x)
{
  return boost::math::tr1::boost_asinh(x);
}

double boost_swift_binding_atanh(double x)
{
  return boost::math::tr1::boost_atanh(x);
}

double boost_swift_binding_cbrt(double x)
{
  return boost::math::tr1::boost_cbrt(x);
}

double boost_swift_binding_copysign(double x, double y)
{
  return boost::math::tr1::boost_copysign(x, y);
}

double boost_swift_binding_erf(double x)
{
  return boost::math::tr1::boost_erf(x);
}

double boost_swift_binding_expm1(double x)
{
  return boost::math::tr1::boost_expm1(x);
}

double boost_swift_binding_fmax(double x, double y)
{
  return boost::math::tr1::boost_fmax(x, y);
}

double boost_swift_binding_fmin(double x, double y)
{
  return boost::math::tr1::boost_fmin(x, y);
}

double boost_swift_binding_hypot(double x, double y)
{
  return boost::math::tr1::boost_hypot(x, y);
}

double boost_swift_binding_lgamma(double x)
{
  return boost::math::tr1::boost_lgamma(x);
}

double boost_swift_binding_log1p(double x)
{
  return boost::math::tr1::boost_log1p(x);
}

long boost_swift_binding_lround(double x)
{
  return boost::math::tr1::boost_lround(x);
}

double boost_swift_binding_nextafter(double x, double y)
{
  return boost::math::tr1::boost_nextafter(x, y);
}

double boost_swift_binding_nexttoward(double x, long double y)
{
  return boost::math::tr1::boost_nexttoward(x, y);
}

double boost_swift_binding_round(double x)
{
  return boost::math::tr1::boost_round(x);
}

double boost_swift_binding_tgamma(double x)
{
  return boost::math::tr1::boost_tgamma(x);
}

double boost_swift_binding_trunc(double x)
{
  return boost::math::tr1::boost_trunc(x);
}

// [5.2.1.1] associated Laguerre polynomials:
double boost_swift_binding_assoc_laguerre(unsigned n, unsigned m, double x)
{
  return boost::math::tr1::boost_assoc_laguerre(n, m, x);
}

// [5.2.1.2] associated Legendre functions:
double boost_swift_binding_assoc_legendre(unsigned l, unsigned m, double x)
{
  return boost::math::tr1::boost_assoc_legendre(l, m, x);
}

// [5.2.1.3] beta function:
double boost_swift_binding_beta(double x, double y)
{
  return boost::math::tr1::boost_beta(x, y);
}

// [5.2.1.4] (complete) elliptic integral of the first kind:
double boost_swift_binding_comp_ellint_1(double k)
{
  return boost::math::tr1::boost_comp_ellint_1(k);
}

// [5.2.1.5] (complete) elliptic integral of the second kind:
double boost_swift_binding_comp_ellint_2(double k)
{
  return boost::math::tr1::boost_comp_ellint_2(k);
}

// [5.2.1.6] (complete) elliptic integral of the third kind:
double boost_swift_binding_comp_ellint_3(double k, double nu)
{
  return boost::math::tr1::boost_comp_ellint_3(k, nu);
}

double boost_swift_binding_cyl_bessel_i(double nu, double x)
{
  return boost::math::tr1::boost_cyl_bessel_i(nu, x);
}

// [5.2.1.9] cylindrical Bessel functions (of the first kind):
double boost_swift_binding_cyl_bessel_j(double nu, double x)
{
  return boost::math::tr1::boost_cyl_bessel_j(nu, x);
}

// [5.2.1.10] irregular modified cylindrical Bessel functions:
double boost_swift_binding_cyl_bessel_k(double nu, double x)
{
  return boost::math::tr1::boost_cyl_bessel_k(nu, x);
}

// [5.2.1.11] cylindrical Neumann functions BOOST_MATH_C99_THROW_SPEC;
// cylindrical Bessel functions (of the second kind):
double boost_swift_binding_cyl_neumann(double nu, double x)
{
  return boost::math::tr1::boost_cyl_neumann(nu, x);
}

// [5.2.1.12] (incomplete) elliptic integral of the first kind:
double boost_swift_binding_ellint_1(double k, double phi)
{
  return boost::math::tr1::boost_ellint_1(k, phi);
}

// [5.2.1.13] (incomplete) elliptic integral of the second kind:
double boost_swift_binding_ellint_2(double k, double phi)
{
  return boost::math::tr1::boost_ellint_2(k, phi);
}

// [5.2.1.14] (incomplete) elliptic integral of the third kind:
double boost_swift_binding_ellint_3(double k, double nu, double phi)
{
  return boost::math::tr1::boost_ellint_3(k, nu, phi);
}

// [5.2.1.15] exponential integral:
double boost_swift_binding_expint(double x)
{
  return boost::math::tr1::boost_expint(x);
}

// [5.2.1.16] Hermite polynomials:
double boost_swift_binding_hermite(unsigned n, double x)
{
  return boost::math::tr1::boost_hermite(n, x);
}

// [5.2.1.18] Laguerre polynomials:
double boost_swift_binding_laguerre(unsigned n, double x)
{
  return boost::math::tr1::boost_laguerre(n, x);
}

// [5.2.1.19] Legendre polynomials:
double boost_swift_binding_legendre(unsigned l, double x)
{
  return boost::math::tr1::boost_legendre(l, x);
}

// [5.2.1.20] Riemann zeta function:
double boost_swift_binding_riemann_zeta(double x)
{
  return boost::math::tr1::boost_riemann_zeta(x);
}

// [5.2.1.21] spherical Bessel functions (of the first kind):
double boost_swift_binding_sph_bessel(unsigned n, double x)
{
  return boost::math::tr1::boost_sph_bessel(n, x);
}

// [5.2.1.22] spherical associated Legendre functions:
double boost_swift_binding_sph_legendre(unsigned l, unsigned m, double theta)
{
  return boost::math::tr1::boost_sph_legendre(l, m, theta);
}

// [5.2.1.23] spherical Neumann functions BOOST_MATH_C99_THROW_SPEC;
// spherical Bessel functions (of the second kind):
double boost_swift_binding_sph_neumann(unsigned n, double x)
{
  return boost::math::tr1::boost_sph_neumann(n, x);
}

