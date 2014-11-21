BoostSpecFun
============

Description
------------

Simple bindings of Boost.Math special functions for Swift language.

Rationale
------------

Many special functions defined in C99 Standard and C++ TR1 aren't
supported by most known standard libraries. That means that Swift
module Darwin doesn't have wrappers for them as well.

Here we provide Swift bindings for many of them. Bindings use
functions from [Boost.Math] library. All code is compiled
into libboost_spec_fun.a library. Additionaly linking with
libboost_math_tr1_binding is required.

[Boost.Math]: https://github.com/boostorg/math

Supported function list
------------

   func acosh(x: Double) -> Double

   func asinh(x: Double) -> Double

   func atanh(x: Double) -> Double

   func cbrt(x: Double) -> Double

   func copysign(x: Double, y: Double) -> Double

   func erf(x: Double) -> Double

   func expm1(x: Double) -> Double

   func fmax(x: Double, y: Double) -> Double

   func fmin(x: Double, y: Double) -> Double

   func hypot(x: Double, y: Double) -> Double

   func lgamma(x: Double) -> Double

   func log1p(x: Double) -> Double

   func lround(x: Double) -> Double

   func nextafter(x: Double, y: Double) -> Double

   func nexttoward(x: Double, y: Double) -> Double

   func round(x: Double) -> Double

   func tgamma(x: Double) -> Double

   func trunc(x: Double) -> Double

   func assoc_laguerre(n: UInt32, m: UInt32, x: Double) -> Double

   func assoc_legendre(l: UInt32, m: UInt32, x: Double) -> Double

   func beta(x: Double, y: Double) -> Double

   func comp_ellint_1(k: Double) -> Double

   func comp_ellint_2(k: Double) -> Double

   func comp_ellint_3(k: Double, nu: Double) -> Double

   func cyl_bessel_i(nu: Double, x: Double) -> Double

   func cyl_bessel_j(nu: Double, x: Double) -> Double

   func cyl_bessel_k(nu: Double, x: Double) -> Double

   func cyl_neumann(nu: Double, x: Double) -> Double

   func ellint_1(k: Double, phi: Double) -> Double

   func ellint_2(k: Double, phi: Double) -> Double

   func ellint_3(k: Double, nu: Double, phi: Double) -> Double

   func expint(x: Double) -> Double

   func hermite(n: UInt32, x: Double) -> Double

   func laguerre(n: UInt32, x: Double) -> Double

   func legendre(l: UInt32, x: Double) -> Double

   func riemann_zeta(x: Double) -> Double

   func sph_bessel(n: UInt32, x: Double) -> Double

   func sph_legendre(l: UInt32, m: UInt32, theta: Double) -> Double

   func sph_neumann(n: UInt32, x: Double) -> Double
