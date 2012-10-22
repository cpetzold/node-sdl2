#ifndef EVENTS_H
#define EVENTS_H

#include "includes.h"

void InitEvents(Handle<Object> target);

Handle<Value> PollEvent(const Arguments& args);
Handle<Value> ShowCursor(const Arguments& args);
Handle<Value> WarpMouseInWindow(const Arguments& args);

#endif