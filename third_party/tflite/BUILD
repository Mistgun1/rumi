package(default_visibility = ["//visibility:public"])

load("//third_party/tflite:cc_library_with_tflite.bzl", "cc_library_with_tflite")

cc_library_with_tflite(
    name = "tflite_core",
    srcs = glob(["lite/**/*.cc"]),
    hdrs = glob(["lite/**/*.h"]),
    includes = ["lite"],
    visibility = ["//visibility:public"],
)
