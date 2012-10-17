#include "video.h"

void InitVideo(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "createWindow", CreateWindow);

  target->Set(String::New("INIT_TIMER"), Integer::New(SDL_INIT_TIMER));
  target->Set(String::New("INIT_AUDIO"), Integer::New(SDL_INIT_AUDIO));
  target->Set(String::New("INIT_VIDEO"), Integer::New(SDL_INIT_VIDEO));
  target->Set(String::New("INIT_JOYSTICK"), Integer::New(SDL_INIT_JOYSTICK));
  target->Set(String::New("INIT_HAPTIC"), Integer::New(SDL_INIT_HAPTIC));
  target->Set(String::New("INIT_EVERYTHING"), Integer::New(SDL_INIT_EVERYTHING));
  target->Set(String::New("INIT_NOPARACHUTE"), Integer::New(SDL_INIT_NOPARACHUTE));

}

Handle<Value> CreateWindow(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 6 ||
      !args[0]->IsString() ||
      !args[1]->IsUint32() ||
      !args[2]->IsUint32() ||
      !args[3]->IsUint32() ||
      !args[4]->IsUint32() ||
      !args[5]->IsUint32()) {
    return ThrowUsageException("createWindow(string title, int x, int y, int w, int h, int flags)");
  }

  String::Utf8Value title(args[0]);
  int x = args[1]->Int32Value();
  int y = args[2]->Int32Value();
  int w = args[3]->Int32Value();
  int h = args[4]->Int32Value();
  int flags = args[5]->Int32Value();

  SDL_Window* window = SDL_CreateWindow(*title, x, y, w, h, flags);


  return scope.Close(WrapWindow(window));
}

static Persistent<ObjectTemplate> window_template;

Handle<Object> WrapWindow(SDL_Window* window) {
  CreateWindowTemplate();

  HandleScope scope;

  Handle<ObjectTemplate> templ = window_template;
  Handle<Object> instance = templ->NewInstance();
  Handle<External> pointer = External::New(window);
  instance->SetInternalField(0, pointer);

  return scope.Close(instance);
}

SDL_Window* UnwrapWindow(Handle<Object> instance) {
  Handle<External> pointer = Handle<External>::Cast(instance->GetInternalField(0));
  return static_cast<SDL_Window*>(pointer->Value());
}

void CreateWindowTemplate() {
  if (!window_template.IsEmpty()) return;

  HandleScope scope;

  window_template = Persistent<ObjectTemplate>::New(ObjectTemplate::New());
  window_template->SetInternalFieldCount(1);

  // window_template->SetAccessor(String::NewSymbol("id"), GetWindowID);
  // window_template->SetAccessor(String::NewSymbol("title"), GetWindowTitle);
  // window_template->SetAccessor(String::NewSymbol("x"), GetWindowX);
  // window_template->SetAccessor(String::NewSymbol("y"), GetWindowY);
  // window_template->SetAccessor(String::NewSymbol("w"), GetWindowW);
  // window_template->SetAccessor(String::NewSymbol("h"), GetWindowH);
  // window_template->SetAccessor(String::NewSymbol("flags"), GetWindowFlags);

  scope.Close(Undefined());
}

// Handle<Value> GetWindowID(Local<String> name, const AccessorInfo& info) {
//   SDL_Window* window = UnwrapWindow(info.Holder());
//   return Integer::New(window->id);
// }
// Handle<Value> GetWindowTitle(Local<String> name, const AccessorInfo& info) {
//   SDL_Window* window = UnwrapWindow(info.Holder());
//   return String::New(window->title);
// }
// Handle<Value> GetWindowX(Local<String> name, const AccessorInfo& info) {
//   SDL_Window* window = UnwrapWindow(info.Holder());
//   return Integer::New(window->x);
// }
// Handle<Value> GetWindowY(Local<String> name, const AccessorInfo& info) {
//   SDL_Window* window = UnwrapWindow(info.Holder());
//   return Integer::New(window->y);
// }
// Handle<Value> GetWindowW(Local<String> name, const AccessorInfo& info) {
//   SDL_Window* window = UnwrapWindow(info.Holder());
//   return Integer::New(window->w);
// }
// Handle<Value> GetWindowH(Local<String> name, const AccessorInfo& info) {
//   SDL_Window* window = UnwrapWindow(info.Holder());
//   return Integer::New(window->h);
// }
// Handle<Value> GetWindowFlags(Local<String> name, const AccessorInfo& info) {
//   SDL_Window* window = UnwrapWindow(info.Holder());
//   return Integer::New(window->flags);
// }



