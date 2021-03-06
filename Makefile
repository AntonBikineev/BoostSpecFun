BOOST_MATH = 3rdparty/math
BOOST_MATH_SRC = $(BOOST_MATH)/src/tr1

BOOST_MATH_TR1_LIBRARY_SONAME = boost_math_tr1_binding
BOOST_MATH_TR1_LIBRARY_BINDING = lib$(BOOST_MATH_TR1_LIBRARY_SONAME).dylib
BOOST_MATH_TR1_LIBRARY_BINDING_SRC = boost_math_tr1_binding.o

BOOST_BUILD_DIR = $(BOOST_MATH)/build

INCLUDES = -I$(BOOST_MATH_SRC)
BOOST_MATH_BRIDGING_HEADER = bridging_header.h

CXXFLAGS = $(INCLUDES) #-static-libgcc -static-libstdc++

FUNCTIONS = \
		$(BOOST_MATH_SRC)/acosh.o \
		$(BOOST_MATH_SRC)/asinh.o \
		$(BOOST_MATH_SRC)/atanh.o \
		$(BOOST_MATH_SRC)/cbrt.o \
		$(BOOST_MATH_SRC)/copysign.o \
		$(BOOST_MATH_SRC)/erf.o \
		$(BOOST_MATH_SRC)/expm1.o \
		$(BOOST_MATH_SRC)/fmax.o \
		$(BOOST_MATH_SRC)/fmin.o \
		$(BOOST_MATH_SRC)/hypot.o \
		$(BOOST_MATH_SRC)/lgamma.o \
		$(BOOST_MATH_SRC)/log1p.o \
		$(BOOST_MATH_SRC)/lround.o \
		$(BOOST_MATH_SRC)/nextafter.o \
		$(BOOST_MATH_SRC)/nexttoward.o \
		$(BOOST_MATH_SRC)/round.o \
		$(BOOST_MATH_SRC)/tgamma.o \
		$(BOOST_MATH_SRC)/trunc.o \
		$(BOOST_MATH_SRC)/assoc_laguerre.o \
		$(BOOST_MATH_SRC)/assoc_legendre.o \
		$(BOOST_MATH_SRC)/beta.o \
		$(BOOST_MATH_SRC)/comp_ellint_1.o \
		$(BOOST_MATH_SRC)/comp_ellint_2.o \
		$(BOOST_MATH_SRC)/comp_ellint_3.o \
		$(BOOST_MATH_SRC)/cyl_bessel_i.o \
		$(BOOST_MATH_SRC)/cyl_bessel_j.o \
		$(BOOST_MATH_SRC)/cyl_bessel_k.o \
		$(BOOST_MATH_SRC)/cyl_neumann.o \
		$(BOOST_MATH_SRC)/ellint_1.o \
		$(BOOST_MATH_SRC)/ellint_2.o \
		$(BOOST_MATH_SRC)/ellint_3.o \
		$(BOOST_MATH_SRC)/expint.o \
		$(BOOST_MATH_SRC)/hermite.o \
		$(BOOST_MATH_SRC)/laguerre.o \
		$(BOOST_MATH_SRC)/legendre.o \
		$(BOOST_MATH_SRC)/riemann_zeta.o \
		$(BOOST_MATH_SRC)/sph_bessel.o \
		$(BOOST_MATH_SRC)/sph_legendre.o \
		$(BOOST_MATH_SRC)/sph_neumann.o

SWIFT_MODULE_NAME = boost_spec_fun
SWIFT_SPEC_FUN_SRC = $(SWIFT_MODULE_NAME).swift
SWIFT_SPEC_FUN_MODULE = $(SWIFT_MODULE_NAME).swiftmodule
SWIFT_SPEC_FUN_LIBRARY = lib$(SWIFT_MODULE_NAME).a

all: $(BOOST_MATH_TR1_LIBRARY_BINDING) $(SWIFT_SPEC_FUN_LIBRARY) $(SWIFT_SPEC_FUN_MODULE) 

$(BOOST_MATH_TR1_LIBRARY_BINDING): $(FUNCTIONS) $(BOOST_MATH_TR1_LIBRARY_BINDING_SRC)
		$(CXX) -dynamiclib $^ -o $@

$(SWIFT_SPEC_FUN_LIBRARY) : $(SWIFT_SPEC_FUN_SRC)
		xcrun -sdk macosx swiftc -c $< -import-objc-header $(BOOST_MATH_BRIDGING_HEADER)
		ar rvs $@ $(SWIFT_MODULE_NAME).o

$(SWIFT_SPEC_FUN_MODULE) : $(SWIFT_SPEC_FUN_SRC)
		xcrun -sdk macosx swiftc -emit-module -import-objc-header $(BOOST_MATH_BRIDGING_HEADER) $< -module-name $(SWIFT_MODULE_NAME) -module-link-name $(BOOST_MATH_TR1_LIBRARY_SONAME)

clean:
		rm libboost_spec_fun.a boost_spec_fun.o boost_spec_fun.swiftdoc boost_spec_fun.swiftmodule $(BOOST_MATH_TR1_LIBRARY_BINDING) $(BOOST_MATH_TR1_LIBRARY_BINDING_SRC)
