//
// Created by shantengfei on 18-1-3.
//

#ifndef CUBICSPLINE_H
#define CUBICSPLINE_H

#include <fstream>
using namespace std;
class cubicSpline
{
public:
    typedef enum _BoundType
    {
        BoundType_First_Derivative,
        BoundType_Second_Derivative
    }BoundType;

public:
    cubicSpline();
    ~cubicSpline();

    void initParam();
    void releaseMem();

    bool loadData(double *x_data, double *y_data, int count, double bound1, double bound2, BoundType type);
    bool getYbyX(double &x_in, double &y_out);
    ofstream oFile;
protected:
    bool spline(BoundType type);

protected:
    double *x_sample_, *y_sample_;
    double *M_;
    int sample_count_;
    double bound1_, bound2_;
};

#endif //SPLINETEST_CUBICSPLINE_H
