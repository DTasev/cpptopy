#include <string>
#include <vector>

struct MyImage {
  int __len__() { return data.size(); }

  std::string __str__() {
    return "Image size - width: " + std::to_string(width) +
           ", height: " + std::to_string(height);
  }

  std::vector<unsigned char> data{0};
  unsigned int width = 0;
  unsigned int height = 0;
};

