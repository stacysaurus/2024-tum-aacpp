#include <iostream>

int64_t multiplix(const int64_t r, const int64_t c) {
    return r * c;
}

int main() {
    int64_t r, c;
    std::cin >> r >> c;
    std::cout << multiplix(r, c) << std::endl;
}