#ifndef VIDEO_H
#define VIDEO_H

#include "includes.h"

void InitVideo(Handle<Object> target);


Handle<Object> WrapWindow(SDL_Window* window);
SDL_Window* UnwrapWindow(Handle<Object> instance);
void CreateWindowTemplate();

Handle<Object> WrapRenderer(SDL_Renderer* renderer);
SDL_Renderer* UnwrapRenderer(Handle<Object> instance);
void CreateRendererTemplate();

Handle<Object> WrapRect(SDL_Rect* rect);
SDL_Rect* UnwrapRect(Handle<Object> instance);
void CreateRectTemplate();

Handle<Value> CreateWindow(const Arguments& args);
Handle<Value> SetWindowTitle(const Arguments& args);
Handle<Value> CreateRenderer(const Arguments& args);
Handle<Value> SetRenderDrawColor(const Arguments& args);
Handle<Value> RenderClear(const Arguments& args);
Handle<Value> RenderPresent(const Arguments& args);
Handle<Value> RenderFillRect(const Arguments& args);

#endif