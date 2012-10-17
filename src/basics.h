#ifndef BASICS_H
#define BASICS_H

#include "includes.h"
#include <SDL2/SDL.h>

namespace basics {
  
  static void init(Handle<Object> target);

  static Handle<Value> Init(const Arguments& args);

}

#endif