/**
 * @file DepthCalibrator.h
 * @author Yutaka Kondo <yutaka.kondo@youtalk.jp>
 * @date Jul 4, 2014
 */

#pragma once

#include "DepthCamera.h"

namespace rgbd {

class DepthCalibrator: public DepthCamera {
public:
    DepthCalibrator(std::shared_ptr<DepthCamera> camera);

    virtual ~DepthCalibrator();

    virtual cv::Size colorSize() const;

    virtual cv::Size depthSize() const;

    virtual void start();

    virtual void captureRawColor(cv::Mat& buffer);

    virtual void captureRawDepth(cv::Mat& buffer);

    virtual void captureRawAmplitude(cv::Mat& buffer);

protected:
    std::shared_ptr<DepthCamera> _camera;
};

}
