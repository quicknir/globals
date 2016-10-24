#pragma once

#include <iostream>

struct Informer {
  Informer() {
    std::cerr << "ctor " << this << "\n";
    // p = new int;
  }
  Informer *get() { return this; }

  ~Informer() {
    std::cerr << "dtor " << this << "\n";
    // delete p;
  }

  int *p;
};

Informer& meyer();
static Informer& g_informer = meyer();
