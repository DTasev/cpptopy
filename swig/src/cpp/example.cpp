/* File : example.c */

#include "example.h"
#include <iostream>

namespace Test {

int Apples::get() { return 3; }

std::vector<int> Apples::vec() { return {1, 2, 3}; }

MyImage Apples::decode(const std::string &filename) {
  MyImage image;

  unsigned width, height;

  // decode
  unsigned error =
      lodepng::decode(image.data, image.width, image.height, filename);

  // if there's an error, display it
  if (error) {
    std::cerr << "Encountered an error\n";
  }

  // the pixels are now in the vector "image",
  // 4 bytes per pixel, ordered RGBARGBA...
  return image;
}

// std::vector<int> Apples::your_problem_now() {
//   std::vector<int> myvec{1, 2, 3};
//   return std::move(myvec);
// }

// std::vector<int> &Apples::yikes() {
//   std::vector<int> myvec{1, 2, 3};
//   return myvec;
// }

// std::vector<int> *Apples::yikes_pointer() {
//   std::vector<int> myvec{1, 2, 3};
//   return &myvec;
// }

// std::vector<int> *Apples::yikes_new() {
//   // Don't do this, it leaks the vector memory
//   auto myvec = new std::vector<int>{1, 2, 3};
//   return myvec;
// }

void halve_in_place(std::vector<double> &v) {
  std::transform(v.begin(), v.end(), v.begin(),
                 std::bind2nd(std::divides<double>(), 2.0));
}

std::vector<double> half(const std::vector<double> &v) {
  std::vector<double> w(v);
  for (unsigned int i = 0; i < w.size(); i++)
    w[i] /= 2.0;
  return w;
}

double average(std::vector<int> v) {
  return std::accumulate(v.begin(), v.end(), 0.0) / v.size();
}
} // namespace Test