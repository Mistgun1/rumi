def cc_library_with_tflite(
        name,
        srcs = [],
        hdrs = [],
        deps = [],
        includes = [],
        visibility = None):
    native.cc_library(
        name = name,
        srcs = srcs,
        hdrs = hdrs,
        deps = deps,
        includes = includes,
        visibility = visibility,
    )
