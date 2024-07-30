#pragma once

#include "mppi.h"

class LogMPPI : public MPPI {
public:
    template<typename ModelClass>
    LogMPPI(ModelClass model);
    ~LogMPPI();

    void updateNoise() override {
        noise = this->sigma_u * Eigen::MatrixXd::Random(dim_u, N);
        
    }
};

template<typename ModelClass>
LogMPPI::LogMPPI(ModelClass model) : MPPI(model) {
}

LogMPPI::~LogMPPI() {
}

