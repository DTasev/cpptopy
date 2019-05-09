#include "libs/lodepng.h"
#include <iostream>
#include <string>

/*
3 ways to decode a PNG from a file to RGBA pixel data (and 2 in-memory ways).
*/

// g++ lodepng.cpp example_decode.cpp -ansi -pedantic -Wall -Wextra -O3

// Example 1
// Decode from disk to raw pixels with a single function call

class World {
public:
  void set(std::string msg) { this->msg = msg; }
  std::string greet() { return msg; }
  std::string msg;

  std::vector<unsigned char> decode(const std::string &filename) {
    std::vector<unsigned char> image; // the raw pixels
    unsigned width, height;

    // decode
    unsigned error = lodepng::decode(image, width, height, filename);

    // if there's an error, display it
    if (error) {
      // ...
    }
    // the pixels are now in the vector "image",
    // 4 bytes per pixel, ordered RGBARGBA...
    return image;
  }
};

struct PNGReader {
  PNGReader(const std::string &filename) { this->decode(filename); }

  void decode(const std::string &filename) {
    unsigned error = lodepng::decode(image, width, height, filename);

    // if there's an error, display it
    if (error) {
      //...
    }
  }
  std::vector<unsigned char> image;
  unsigned int width = 0;
  unsigned int height = 0;
};
