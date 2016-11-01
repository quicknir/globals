#pragma once

#include <iostream>

struct Informer {
  Informer() {
    std::cerr << "ctor " << this << "\n";
  }
  Informer *get() { return this; }

  ~Informer() {
    std::cerr << "dtor " << this << "\n";
  }
};

extern Informer g_informer;
