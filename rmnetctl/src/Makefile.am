AM_CFLAGS = -Wall -Werror -Wno-implicit-function-declaration -Wundef -Wstrict-prototypes -Wno-trigraphs
AM_CFLAGS += -I./../inc

librmnetctl_la_C = @C@
librmnetctl_la_SOURCES = librmnetctl.c \
	    			$(BUILD_ROOT)/android_compat/device/qcom/common/src/strlcat.c \
	    			$(BUILD_ROOT)/android_compat/device/qcom/common/src/strlcpy.c

common_LDFLAGS = -lpthread -lrt 

librmnetctl_la_CFLAGS := $(AM_CFLAGS) 
librmnetctl_la_LDFLAGS := -shared $(common_LDFLAGS)

library_includedir = $(pkgincludedir)
library_include_HEADERS = ./../inc/librmnetctl.h

lib_LTLIBRARIES = librmnetctl.la
