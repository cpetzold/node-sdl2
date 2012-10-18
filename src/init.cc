#define BUILDING_NODE_EXTENSION

#include "includes.h"

#include "basics.h"
#include "events.h"
#include "video.h"
#include "audio.h"
#include "threads.h"
#include "timers.h"
#include "files.h"

extern "C" void init(Handle<Object> target) {
  InitBasics(target);
  InitVideo(target);
  InitEvents(target);
  // InitAudio(target);
  // InitThreads(target);
  InitTimers(target);
  // InitFiles(target);
}

NODE_MODULE(sdl2, init);