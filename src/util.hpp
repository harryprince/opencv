void detectAndDraw( cv::Mat img, cv::CascadeClassifier& cascade,
                    cv::CascadeClassifier& nestedCascade,
                    double scale, bool tryflip );
void refineSegments(const cv::Mat& img, cv::Mat& mask, cv::Mat& dst);
