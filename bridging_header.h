// Copyright John Maddock 2008.
// Copyright Anton Bikineev 2014.
// Use, modification and distribution are subject to the
// boost_swift_binding Software License, Version 1.0
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost_swift_binding.org/LICENSE_1_0.txt)

#ifndef SWIFT_boost_swift_binding_MATH_BRIDGING_HEADER
#define SWIFT_boost_swift_binding_MATH_BRIDGING_HEADER

// This bridging header file is needful,
// despite of existing boost_swift_binding/math/tr1.hpp
// file. Use of new indirection level is
// required to provide user independence
// on including nested headers like
// boost_swift_binding/math/tr1_c_macros.ipp

#if defined(__cplusplus)
extern "C" {
#endif

double boost_swift_binding_acosh(double x);

double boost_swift_binding_asinh(double x);

double boost_swift_binding_atanh(double x);

double boost_swift_binding_cbrt(double x);

double boost_swift_binding_copysign(double x, double y);

double boost_swift_binding_erf(double x);

double boost_swift_binding_expm1(double x);

double boost_swift_binding_fmax(double x, double y);

double boost_swift_binding_fmin(double x, double y);

double boost_swift_binding_hypot(double x, double y);

double boost_swift_binding_lgamma(double x);

double boost_swift_binding_log1p(double x);

long boost_swift_binding_lround(double x);

double boost_swift_binding_nextafter(double x, double y);

double boost_swift_binding_nexttoward(double x, long double y);

double boost_swift_binding_round(double x);

double boost_swift_binding_tgamma(double x);

double boost_swift_binding_trunc(double x);

// [5.2.1.1] associated Laguerre polynomials:
double boost_swift_binding_assoc_laguerre(unsigned n, unsigned m, double x);

// [5.2.1.2] associated Legendre functions:
double boost_swift_binding_assoc_legendre(unsigned l, unsigned m, double x);

// [5.2.1.3] beta function:
double boost_swift_binding_beta(double x, double y);

// [5.2.1.4] (complete) elliptic integral of the first kind:
double boost_swift_binding_comp_ellint_1(double k);

// [5.2.1.5] (complete) elliptic integral of the second kind:
double boost_swift_binding_comp_ellint_2(double k);

// [5.2.1.6] (complete) elliptic integral of the third kind:
double boost_swift_binding_comp_ellint_3(double k, double nu);

double boost_swift_binding_cyl_bessel_i(double nu, double x);

// [5.2.1.9] cylindrical Bessel functions (of the first kind):
double boost_swift_binding_cyl_bessel_j(double nu, double x);

// [5.2.1.10] irregular modified cylindrical Bessel functions:
double boost_swift_binding_cyl_bessel_k(double nu, double x);

// [5.2.1.11] cylindrical Neumann functions boost_swift_binding_MATH_C99_THROW_SPEC;
// cylindrical Bessel functions (of the second kind):
double boost_swift_binding_cyl_neumann(double nu, double x);

// [5.2.1.12] (incomplete) elliptic integral of the first kind:
double boost_swift_binding_ellint_1(double k, double phi);

// [5.2.1.13] (incomplete) elliptic integral of the second kind:
double boost_swift_binding_ellint_2(double k, double phi);

// [5.2.1.14] (incomplete) elliptic integral of the third kind:
double boost_swift_binding_ellint_3(double k, double nu, double phi);

// [5.2.1.15] exponential integral:
double boost_swift_binding_expint(double x);

// [5.2.1.16] Hermite polynomials:
double boost_swift_binding_hermite(unsigned n, double x);

// [5.2.1.18] Laguerre polynomials:
double boost_swift_binding_laguerre(unsigned n, double x);

// [5.2.1.19] Legendre polynomials:
double boost_swift_binding_legendre(unsigned l, double x);

// [5.2.1.20] Riemann zeta function:
double boost_swift_binding_riemann_zeta(double);

// [5.2.1.21] spherical Bessel functions (of the first kind):
double boost_swift_binding_sph_bessel(unsigned n, double x);

// [5.2.1.22] spherical associated Legendre functions:
double boost_swift_binding_sph_legendre(unsigned l, unsigned m, double theta);

// [5.2.1.23] spherical Neumann functions boost_swift_binding_MATH_C99_THROW_SPEC;
// spherical Bessel functions (of the second kind):
double boost_swift_binding_sph_neumann(unsigned n, double x);

#if defined(__cplusplus)
} // extern "C"
#endif

#endif // SWIFT_boost_swift_binding_MATH_BRIDGING_HEADER
