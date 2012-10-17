#ifndef VIDEO_H
#define VIDEO_H

#include "includes.h"

void InitVideo(Handle<Object> target);

Handle<Value> CreateWindow(const Arguments& args);

Handle<Object> WrapWindow(SDL_Window* window);
SDL_Window* UnwrapWindow(Handle<Object> instance);
void CreateWindowTemplate();
// Handle<Value> GetWindowID(Local<String> name, const AccessorInfo& info);
// Handle<Value> GetWindowTitle(Local<String> name, const AccessorInfo& info);
// Handle<Value> GetWindowX(Local<String> name, const AccessorInfo& info);
// Handle<Value> GetWindowY(Local<String> name, const AccessorInfo& info);
// Handle<Value> GetWindowW(Local<String> name, const AccessorInfo& info);
// Handle<Value> GetWindowH(Local<String> name, const AccessorInfo& info);
// Handle<Value> GetWindowFlags(Local<String> name, const AccessorInfo& info);

#endif