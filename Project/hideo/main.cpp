
// Author: Pierce Brooks

#include "libh264.h"
#include "libh265.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

int main(int argc, char **argv) {
  bool isHEVC = false;
  int result = 0;
  if (argc > 1) {
    for (int i = 0; i != argc; ++i) {
      if (strstr(argv[i], "265")) {
        isHEVC = true;
        break;
      }
    }
    if (isHEVC) {
      result = libh265_main(argc, argv);
    } else {
      result = libh264_main(argc, argv);
    }
    std::cout << result << std::endl;
  }
  return result;
}
