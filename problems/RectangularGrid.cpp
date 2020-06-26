/*
  TopCoder
  Problem: RectangularGrid
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/06/2020
*/

#include <bits/stdc++.h>

class RectangularGrid {
  public:
  long long countRectangles(int w, int h) {
      long long t = 0;
      for (int r = 1; r <= w; ++r) {
          for (int c = 1; c <= h; ++c) {
              if (r != c) {
                  t += ((w + 1) - r) * ((h + 1) - c);
              }
          }
      }

      return t;
  }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    RectangularGrid r;
    std::cout << r.countRectangles(3, 3) << std::endl;
    std::cout << r.countRectangles(5, 2) << std::endl;
    std::cout << r.countRectangles(10, 10) << std::endl;
    std::cout << r.countRectangles(1, 1) << std::endl;
    std::cout << r.countRectangles(592, 964) << std::endl;

    return 0;
}
