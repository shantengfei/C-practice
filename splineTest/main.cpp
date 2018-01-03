#include <iostream>
#include <cstdio>
//#include "cubicSpline.h"
#include "cmake-build-debug/cubicSpline.h"
#define  POINTS_COUNT 12
    int main()
    {
//
//
        double x_data[POINTS_COUNT] = {0, 0.422955130, 0.598557636, 0.734591320, 0.850603738, 0.953558869, 1.056514000, 1.159469131, 1.274332912, 1.409208218, 1.585026197, 2};
        double y_data[POINTS_COUNT] = {0, 0.14881055128822188, 0.2976136037517004, 0.4464166562151788, 0.5952197086786574, 0.7440227611421358, 0.8928258136056142, 1.0416288660690929, 1.1904319185325714, 1.3392349709960498, 1.4880380234595283, 1.6368410759230068};

        double x_out = 0;
        double y_out = 0;

        cubicSpline spline;
        spline.loadData(x_data, y_data, POINTS_COUNT, 0, 0, cubicSpline::BoundType_First_Derivative);

        x_out = -0.004;
        for(int i=0; i<=500; i++)
        {
            x_out = x_out + 0.004;

            spline.getYbyX(x_out, y_out);

            //printf("%f, %0.9f \n", x_out, y_out);
        }

        return 0;
    }
