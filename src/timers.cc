#include "timers.h"

void InitTimers(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "delay", Delay);
  NODE_SET_METHOD(target, "getPerformanceCounter", GetPerformanceCounter);
  NODE_SET_METHOD(target, "getPerformanceFrequency", GetPerformanceFrequency);

}

Handle<Value> Delay(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 1 ||
      !args[0]->IsUint32()) {
    return ThrowUsageException("delay(int ms)");
  }

  SDL_Delay(args[0]->IntegerValue());

  return scope.Close(Undefined());
}

Handle<Value> GetPerformanceCounter(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 0) {
    return ThrowUsageException("getPerformanceCounter()");
  }

  return scope.Close(Integer::New(SDL_GetPerformanceCounter()));
}

Handle<Value> GetPerformanceFrequency(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 0) {
    return ThrowUsageException("getPerformanceFrequency()");
  }

  return scope.Close(Integer::New(SDL_GetPerformanceFrequency()));
}