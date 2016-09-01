#include <memory>
#include <vector>
#include <array>
#include <new>


auto makeIntArrayWith10Items() {
  return std::array<int, 10>();
}


auto makeString(int size) {
  return std::vector<char>(size);
}


std::vector<char> loadImageFromDisk() {
  return std::vector<char>(480 * 640);
}


void saveImageToDisk(const std::vector<char>& /*img*/) {
  // write img to disk
}


int main() {
  auto is = makeIntArrayWith10Items();
  (void)is;

  auto cs = makeString(10);

  std::vector<char> img = loadImageFromDisk();
  saveImageToDisk(img);
}
