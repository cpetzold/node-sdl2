#ifndef EVENTS_H
#define EVENTS_H

#include "includes.h"

void InitEvents(Handle<Object> target);

Handle<Value> PollEvent(const Arguments& args);

#endif