#include "video.h"

void InitVideo(Handle<Object> target) {
  
  NODE_SET_METHOD(target, "createWindow", CreateWindow);
  NODE_SET_METHOD(target, "createRenderer", CreateRenderer);
  NODE_SET_METHOD(target, "setRenderDrawColor", SetRenderDrawColor);
  NODE_SET_METHOD(target, "renderClear", RenderClear);
  NODE_SET_METHOD(target, "renderPresent", RenderPresent);

}

Handle<Value> CreateWindow(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 6 ||
      !args[0]->IsString() ||
      !args[1]->IsInt32() ||
      !args[2]->IsInt32() ||
      !args[3]->IsInt32() ||
      !args[4]->IsInt32() ||
      !args[5]->IsUint32()) {
    return ThrowUsageException("createWindow(string title, int x, int y, int w, int h, uint flags)");
  }

  String::Utf8Value title(args[0]);
  int x = args[1]->Int32Value();
  int y = args[2]->Int32Value();
  int w = args[3]->Int32Value();
  int h = args[4]->Int32Value();
  int flags = args[5]->Int32Value();

  SDL_Window* window = SDL_CreateWindow(*title, x, y, w, h, flags);
  if (window == NULL) {
    return ThrowSDLException(__func__);
  }

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

  scope.Close(Undefined());
}

Handle<Value> CreateRenderer(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 3 ||
      !args[0]->IsObject() ||
      !args[1]->IsInt32() ||
      !args[2]->IsUint32()) {
    return ThrowUsageException("createRenderer(window win, int index, uint flags)");
  }

  SDL_Window* window = UnwrapWindow(args[0]->ToObject());
  int index = args[1]->Int32Value();
  int flags = args[2]->Uint32Value();

  SDL_Renderer* renderer = SDL_CreateRenderer(window, index, flags);
  if (renderer == NULL) {
    return ThrowSDLException(__func__);
  }

  return scope.Close(WrapRenderer(renderer));
}

static Persistent<ObjectTemplate> renderer_template;

Handle<Object> WrapRenderer(SDL_Renderer* renderer) {
  CreateRendererTemplate();

  HandleScope scope;

  Handle<ObjectTemplate> templ = renderer_template;
  Handle<Object> instance = templ->NewInstance();
  Handle<External> pointer = External::New(renderer);
  instance->SetInternalField(0, pointer);

  return scope.Close(instance);
}

SDL_Renderer* UnwrapRenderer(Handle<Object> instance) {
  Handle<External> pointer = Handle<External>::Cast(instance->GetInternalField(0));
  return static_cast<SDL_Renderer*>(pointer->Value());
}

void CreateRendererTemplate() {
  if (!renderer_template.IsEmpty()) return;

  HandleScope scope;

  renderer_template = Persistent<ObjectTemplate>::New(ObjectTemplate::New());
  renderer_template->SetInternalFieldCount(1);

  scope.Close(Undefined());
}

Handle<Value> SetRenderDrawColor(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 5 ||
      !args[0]->IsObject() ||
      !args[1]->IsInt32() ||
      !args[2]->IsInt32() ||
      !args[3]->IsInt32() ||
      !args[4]->IsInt32()) {
    return ThrowUsageException("setRenderDrawColor(renderer r, int r, int g, int b, int a)");
  }

  SDL_Renderer* renderer = UnwrapRenderer(args[0]->ToObject());
  int r = args[1]->Int32Value();
  int g = args[2]->Int32Value();
  int b = args[3]->Int32Value();
  int a = args[4]->Int32Value();

  if (SDL_SetRenderDrawColor(renderer, r, g, b, a) < 0) {
    return ThrowSDLException(__func__);
  }

  return scope.Close(Undefined());
}
Handle<Value> RenderClear(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 1 ||
      !args[0]->IsObject()) {
    return ThrowUsageException("renderClear(renderer r)");
  }

  SDL_Renderer* renderer = UnwrapRenderer(args[0]->ToObject());

  if (SDL_RenderClear(renderer) < 0) {
    return ThrowSDLException(__func__);
  }

  return scope.Close(Undefined());
}
Handle<Value> RenderPresent(const Arguments& args) {
  HandleScope scope;

  if (args.Length() != 1 ||
      !args[0]->IsObject()) {
    return ThrowUsageException("renderClear(renderer r)");
  }

  SDL_Renderer* renderer = UnwrapRenderer(args[0]->ToObject());
  SDL_RenderPresent(renderer);

  return scope.Close(Undefined());
}





