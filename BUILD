cc_binary(
    name = "hand_tracking_gpu_app",
    srcs = ["main.cc"],
    deps = ["//mediapipe/graphs/hand_tracking:hand_tracking_desktop_live"],
    data = [
        "//mediapipe/modules/hand_landmark:hand_landmark_full.tflite",
        "//mediapipe/modules/palm_detection:palm_detection_full.tflite",
        "//mediapipe/graphs/hand_tracking:hand_tracking_gpu.pbtxt",
    ],
)
