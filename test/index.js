var sdl = require('..');

console.log(sdl);

sdl.init(sdl.INIT_EVERYTHING);

var w = sdl.createWindow('test', sdl.WINDOWPOS_CENTERED, sdl.WINDOWPOS_CENTERED, 800, 600, sdl.WINDOW_SHOWN);

var r = sdl.createRenderer(w, -1, sdl.RENDERER_ACCELERATED);
sdl.setRenderDrawColor(r, 255, 0, 0, 255);

while (true) {
  sdl.renderClear(r);
  sdl.renderPresent(r);
  sdl.delay(1);
}