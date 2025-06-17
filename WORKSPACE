workspace(name = "rumi")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# MediaPipe's required dependency: abseil
http_archive(
    name = "com_google_absl",
    url = "https://github.com/abseil/abseil-cpp/archive/refs/tags/20220623.0.zip",
    strip_prefix = "abseil-cpp-20220623.0",
    build_file_content = """
cc_library(
    name = "absl",
    hdrs = glob(["absl/**/*.h"]),
    includes = ["."],
    strip_include_prefix = ".",
    visibility = ["//visibility:public"],
)
    """,
)
