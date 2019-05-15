#include "test.h"

std::vector<double> average(std::vector<std::vector<double>> matrix) {

  std::vector<double> ave;
  for (int r = 0; r < matrix.size(); r++) {
    double rsum = 0.0;
    double ncols = matrix[r].size();
    for (int k = 0; k < ncols; k++) {
      rsum += matrix[r][k];
    }
    ave.push_back(rsum / ncols);
  }
  return ave;
}
