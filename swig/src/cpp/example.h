#pragma once
#include "lodepng.h"
#include "myimage.h"
#include <algorithm>
#include <functional>
#include <memory>
#include <numeric>
#include <vector>

namespace Test {

class Apples {
public:
  int get();
  std::vector<int> vec();
  MyImage decode(const std::string &filename);
};

double average(std::vector<int> v);

std::vector<double> half(const std::vector<double> &v);

void halve_in_place(std::vector<double> &v);
} // namespace Test