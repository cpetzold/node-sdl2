#include "timers.h"

void InitTimers(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "delay", Delay);

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
