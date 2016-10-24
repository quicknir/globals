#include "static.h"
#include "dynamic.h"

#include <iostream>

int main() {
    std::cerr << g_str << "\n";
    std::cerr << globalGetter() << "\n";
    return 0;
}
