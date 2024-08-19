#include <iostream>
#include <vector>
#include "layer.cpp"
#include "losses.cpp"

int main()
{
    vector<double> true_lab = {3, -0.5, 2, 7};
    vector<double> pred_lab = {2.5, 0.0, 2, 8};
    double loss = MeanSquareError(true_lab, pred_lab);
    printf("%lf", loss);
}