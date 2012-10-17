#ifndef VIDEO_H
#define VIDEO_H

#include "includes.h"

void InitVideo(Handle<Object> target);

Handle<Value> CreateWindow(const Arguments& args);
Handle<Object> WrapWindow(SDL_Window* window);
SDL_Window* UnwrapWindow(Handle<Object> instance);
void CreateWindowTemplate();

Handle<Value> CreateRenderer(const Arguments& args);
Handle<Object> WrapRenderer(SDL_Renderer* renderer);
SDL_Renderer* UnwrapRenderer(Handle<Object> instance);
void CreateRendererTemplate();

#endif