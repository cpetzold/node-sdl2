#ifndef BASICS_H
#define BASICS_H

#include "includes.h"

void InitBasics(Handle<Object> target);

Handle<Value> Init(const Arguments& args);
Handle<Value> Quit(const Arguments& args);

#endif