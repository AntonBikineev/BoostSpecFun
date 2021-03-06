// Copyright Anton Bikineev 2014.
// Use, modification and distribution are subject to the
// Boost Software License, Version 1.0
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost.org/LICENSE_1_0.txt)

import Darwin

// swift doesn't have function-like macros
// so the following boilerplate is inequitable

public func acosh(x: Double) -> Double {
  return Double(boost_swift_binding_acosh(CDouble(x)))
}

public func asinh(x: Double) -> Double {
  return Double(boost_swift_binding_asinh(CDouble(x)))
}

public func atanh(x: Double) -> Double {
  return Double(boost_swift_binding_atanh(CDouble(x)))
}

public func cbrt(x: Double) -> Double {
  return Double(boost_swift_binding_cbrt(CDouble(x)))
}

public func copysign(x: Double, y: Double) -> Double {
  return Double(boost_swift_binding_copysign(CDouble(x), CDouble(y)))
}

public func erf(x: Double) -> Double {
  return Double(boost_swift_binding_erf(CDouble(x)))
}

public func expm1(x: Double) -> Double {
  return Double(boost_swift_binding_expm1(CDouble(x)))
}

public func fmax(x: Double, y: Double) -> Double {
  return Double(boost_swift_binding_fmax(CDouble(x), CDouble(y)))
}

public func fmin(x: Double, y: Double) -> Double {
  return Double(boost_swift_binding_fmin(CDouble(x), CDouble(y)))
}

public func hypot(x: Double, y: Double) -> Double {
  return Double(boost_swift_binding_hypot(CDouble(x), CDouble(y)))
}

public func lgamma(x: Double) -> Double {
  return Double(boost_swift_binding_lgamma(CDouble(x)))
}

public func log1p(x: Double) -> Double {
  return Double(boost_swift_binding_log1p(CDouble(x)))
}

public func lround(x: Double) -> Double {
  return Double(boost_swift_binding_lround(CDouble(x)))
}

public func nextafter(x: Double, y: Double) -> Double {
  return Double(boost_swift_binding_nextafter(CDouble(x), CDouble(y)))
}

public func nexttoward(x: Double, y: Double) -> Double {
  return Double(boost_swift_binding_nextafter(CDouble(x), CDouble(y)))
}

public func round(x: Double) -> Double {
  return Double(boost_swift_binding_round(CDouble(x)))
}

public func tgamma(x: Double) -> Double {
  return Double(boost_swift_binding_tgamma(CDouble(x)))
}

public func trunc(x: Double) -> Double {
  return Double(boost_swift_binding_trunc(CDouble(x)))
}

public func assoc_laguerre(n: UInt32, m: UInt32, x: Double) -> Double {
  return Double(boost_swift_binding_assoc_laguerre(CUnsignedInt(n), CUnsignedInt(m), CDouble(x)))
}

public func assoc_legendre(l: UInt32, m: UInt32, x: Double) -> Double {
  return Double(boost_swift_binding_assoc_legendre(CUnsignedInt(l), CUnsignedInt(m), CDouble(x)))
}

public func beta(x: Double, y: Double) -> Double {
  return Double(boost_swift_binding_beta(CDouble(x), CDouble(y)))
}

public func comp_ellint_1(k: Double) -> Double {
  return Double(boost_swift_binding_comp_ellint_1(CDouble(k)))
}

public func comp_ellint_2(k: Double) -> Double {
  return Double(boost_swift_binding_comp_ellint_2(CDouble(k)))
}

public func comp_ellint_3(k: Double, nu: Double) -> Double {
  return Double(boost_swift_binding_comp_ellint_3(CDouble(k), CDouble(nu)))
}

public func cyl_bessel_i(nu: Double, x: Double) -> Double {
  return Double(boost_swift_binding_cyl_bessel_i(CDouble(nu), CDouble(x)))
}

public func cyl_bessel_j(nu: Double, x: Double) -> Double {
  return Double(boost_swift_binding_cyl_bessel_j(CDouble(nu), CDouble(x)))
}

public func cyl_bessel_k(nu: Double, x: Double) -> Double {
  return Double(boost_swift_binding_cyl_bessel_k(CDouble(nu), CDouble(x)))
}

public func cyl_neumann(nu: Double, x: Double) -> Double {
  return Double(boost_swift_binding_cyl_neumann(CDouble(nu), CDouble(x)))
}

public func ellint_1(k: Double, phi: Double) -> Double {
  return Double(boost_swift_binding_ellint_1(CDouble(k), CDouble(phi)))
}

public func ellint_2(k: Double, phi: Double) -> Double {
  return Double(boost_swift_binding_ellint_2(CDouble(k), CDouble(phi)))
}

public func ellint_3(k: Double, nu: Double, phi: Double) -> Double {
  return Double(boost_swift_binding_ellint_3(CDouble(k), CDouble(nu), CDouble(phi)))
}

public func expint(x: Double) -> Double {
  return Double(boost_swift_binding_expint(CDouble(x)))
}

public func hermite(n: UInt32, x: Double) -> Double {
  return Double(boost_swift_binding_hermite(CUnsignedInt(n), CDouble(x)))
}

public func laguerre(n: UInt32, x: Double) -> Double {
  return Double(boost_swift_binding_laguerre(CUnsignedInt(n), CDouble(x)))
}

public func legendre(l: UInt32, x: Double) -> Double {
  return Double(boost_swift_binding_legendre(CUnsignedInt(l), CDouble(x)))
}

public func riemann_zeta(x: Double) -> Double {
  return Double(boost_swift_binding_riemann_zeta(CDouble(x)))
}

public func sph_bessel(n: UInt32, x: Double) -> Double {
  return Double(boost_swift_binding_sph_bessel(CUnsignedInt(n), CDouble(x)))
}

public func sph_legendre(l: UInt32, m: UInt32, theta: Double) -> Double {
  return Double(boost_swift_binding_sph_legendre(CUnsignedInt(l), CUnsignedInt(m), CDouble(theta)))
}

public func sph_neumann(n: UInt32, x: Double) -> Double {
  return Double(boost_swift_binding_sph_neumann(CUnsignedInt(n), CDouble(x)))
}
