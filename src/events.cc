#include "events.h"

void InitEvents(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "pollEvent", PollEvent);

}

Handle<Value> PollEvent(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 1 ||
      !args[0]->IsObject()) {
    return ThrowUsageException("pollEvent(object event)");
  }

  Handle<Object> object = args[0]->ToObject();
  SDL_Event event;

  int result = SDL_PollEvent(&event);
  if (!result) {
    return scope.Close(Undefined());
  }

  object->Set(String::New("type"), Integer::New(event.type));
  switch (event.type) {
    // case SDL_ACTIVEEVENT:
    //   object->Set(String::New("gain"), Boolean::New(event.active.gain));
    //   object->Set(String::New("state"), Integer::New(event.active.state));
    //   break;
    case SDL_KEYDOWN:
    case SDL_KEYUP:
      object->Set(String::New("scancode"), Integer::New(event.key.keysym.scancode));
      object->Set(String::New("sym"), Integer::New(event.key.keysym.sym));
      object->Set(String::New("mod"), Integer::New(event.key.keysym.mod));
      break;
    case SDL_MOUSEMOTION:
      object->Set(String::New("state"), Integer::New(event.motion.state));
      object->Set(String::New("x"), Integer::New(event.motion.x));
      object->Set(String::New("y"), Integer::New(event.motion.y));
      object->Set(String::New("xrel"), Integer::New(event.motion.xrel));
      object->Set(String::New("yrel"), Integer::New(event.motion.yrel));
      break;
    case SDL_MOUSEBUTTONDOWN:
    case SDL_MOUSEBUTTONUP:
      object->Set(String::New("button"), Integer::New(event.button.button));
      object->Set(String::New("state"), Integer::New(event.button.state));
      object->Set(String::New("x"), Integer::New(event.button.x));
      object->Set(String::New("y"), Integer::New(event.button.y));
      break;
    case SDL_JOYAXISMOTION:
      object->Set(String::New("which"), Integer::New(event.jaxis.which));
      object->Set(String::New("axis"), Integer::New(event.jaxis.axis));
      object->Set(String::New("value"), Integer::New(event.jaxis.value));
      break;
    case SDL_JOYBALLMOTION:
      object->Set(String::New("which"), Integer::New(event.jball.which));
      object->Set(String::New("ball"), Integer::New(event.jball.ball));
      object->Set(String::New("xrel"), Integer::New(event.jball.xrel));
      object->Set(String::New("yrel"), Integer::New(event.jball.yrel));
      break;
    case SDL_JOYHATMOTION:
      object->Set(String::New("which"), Integer::New(event.jhat.which));
      object->Set(String::New("hat"), Integer::New(event.jhat.hat));
      object->Set(String::New("value"), Integer::New(event.jhat.value));
      break;
    case SDL_JOYBUTTONDOWN:
    case SDL_JOYBUTTONUP:
      object->Set(String::New("which"), Integer::New(event.jbutton.which));
      object->Set(String::New("button"), Integer::New(event.jbutton.button));
      break;
    }

  return scope.Close(Integer::New(result));
}




