#include "basics.h"

static void basics::init(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "init", Init);

}

Handle<Value> basics::Init(const Arguments& args) {
  HandleScope scope;

  if (!(args.Length() == 1 && args[0]->IsNumber())) {
    return ThrowException(Exception::TypeError(String::New("Invalid arguments: Expected init(flags)")));
  }

  if (SDL_Init(args[0]->Int32Value()) < 0) {
    return ThrowException(Exception::Error(String::New(SDL_GetError())));
  }

  return Undefined();
}