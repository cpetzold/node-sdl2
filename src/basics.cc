#include "basics.h"

void InitBasics(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "init", Init);
  NODE_SET_METHOD(target, "quit", Quit);

}

Handle<Value> Init(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 1 ||
      !args[0]->IsUint32()) {
    return ThrowUsageException("init(int flags)");
  }

  if (SDL_Init(args[0]->Int32Value()) < 0) {
    return ThrowSDLException(__func__);
  }

  return scope.Close(Undefined());
}

Handle<Value> Quit(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 0) {
    return ThrowUsageException("quit()");
  }

  SDL_Quit();

  return scope.Close(Undefined());
}