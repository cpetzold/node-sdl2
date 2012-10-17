#ifndef TIMERS_H
#define TIMERS_H

#include "includes.h"

void InitTimers(Handle<Object> target);

Handle<Value> Delay(const Arguments& args);
Handle<Value> GetPerformanceCounter(const Arguments& args);
Handle<Value> GetPerformanceFrequency(const Arguments& args);

#endif