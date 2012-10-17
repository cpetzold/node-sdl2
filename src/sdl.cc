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
  basics::init(target);
  // events::init(target);
  // video::init(target);
  // audio::init(target);
  // threads::init(target);
  // timers::init(target);
  // files::init(target);
}

NODE_MODULE(sdl2, init);