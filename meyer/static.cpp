#include "static.h"

Informer& g_informer() {
    static Informer g;
    return g;
}
