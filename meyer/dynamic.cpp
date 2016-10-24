#include "dynamic.h"

Informer* globalGetter() {

    return g_informer().get();
}
