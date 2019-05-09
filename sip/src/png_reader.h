#include <QtCore/QString>

// #include "lodepng.h"
/*
3 ways to decode a PNG from a file to RGBA pixel data (and 2 in-memory ways).
*/

// g++ lodepng.cpp example_decode.cpp -ansi -pedantic -Wall -Wextra -O3

// Example 1
// Decode from disk to raw pixels with a single function call

struct World {
  void set(const QString msg) { this->msg = QString(msg); }
  QString get() { return msg; }
  QString msg;
};

// struct PNGReader {
//   PNGReader(const QString &filename) { this->decode(filename); }

//   void decode(const QString &filename) {
//     unsigned error =
//         lodepng::decode(image, width, height, filename.toStdString());

//     // if there's an error, display it
//     if (error) {
//       //...
//     }
//   }
//   std::vector<unsigned char> image;
//   unsigned int width = 0;
//   unsigned int height = 0;
// };
