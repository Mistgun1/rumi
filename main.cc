#include "mediapipe/framework/calculator_graph.h"
#include "mediapipe/framework/port/commandlineflags.h"
#include "mediapipe/framework/port/file_helpers.h"
#include "mediapipe/framework/port/logging.h"
#include "mediapipe/framework/port/status.h"
#include "mediapipe/framework/formats/image_frame.h"
#include "mediapipe/framework/formats/landmark.pb.h"
#include "mediapipe/framework/formats/detection.pb.h"
#include "mediapipe/framework/formats/rect.pb.h"
#include "mediapipe/framework/port/opencv_core_inc.h"
#include "mediapipe/framework/port/opencv_highgui_inc.h"
#include "mediapipe/framework/port/opencv_imgproc_inc.h"
#include "mediapipe/framework/port/opencv_video_inc.h"

constexpr char kGraphConfigPath[] =
    "mediapipe/graphs/hand_tracking/hand_tracking_gpu.pbtxt";

int main(int argc, char** argv) {
    google::InitGoogleLogging(argv[0]);

    std::string graph_config_contents;
    mediapipe::file::GetContents(kGraphConfigPath, &graph_config_contents);

    mediapipe::CalculatorGraph graph;
    graph.Initialize(graph_config_contents);

    cv::VideoCapture capture;
    capture.open(0);
    if (!capture.isOpened()) {
        LOG(ERROR) << "Failed to open camera.";
        return -1;
    }

    graph.StartRun({});

    LOG(INFO) << "Started graph with GPU support and webcam.";

    // Your code here: Loop reading frames and sending to MediaPipe

    graph.CloseInputStream("input_video");
    graph.WaitUntilDone();

    return 0;
}
