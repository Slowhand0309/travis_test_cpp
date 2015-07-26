#include <cassert>

int sum(int a, int b) {
  return a + b;
}

int main() {
    assert(sum(1, 2) == 3);
    return 0;
}
