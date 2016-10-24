#include "static.h"

Informer &meyer() {
  static Informer g;
  return g;
}
