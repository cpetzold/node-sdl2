#include "basics.h"

void InitBasics(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "init", Init);
  NODE_SET_METHOD(target, "quit", Quit);

  target->Set(String::New("INIT_TIMER"), Integer::New(SDL_INIT_TIMER));
  target->Set(String::New("INIT_AUDIO"), Integer::New(SDL_INIT_AUDIO));
  target->Set(String::New("INIT_VIDEO"), Integer::New(SDL_INIT_VIDEO));
  target->Set(String::New("INIT_JOYSTICK"), Integer::New(SDL_INIT_JOYSTICK));
  target->Set(String::New("INIT_HAPTIC"), Integer::New(SDL_INIT_HAPTIC));
  target->Set(String::New("INIT_EVERYTHING"), Integer::New(SDL_INIT_EVERYTHING));
  target->Set(String::New("INIT_NOPARACHUTE"), Integer::New(SDL_INIT_NOPARACHUTE));

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