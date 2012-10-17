var sdl = require('../');

console.log(sdl);

sdl.init(sdl.INIT_EVERYTHING);

var w = sdl.createWindow('test', sdl.WINDOWPOS_CENTERED, sdl.WINDOWPOS_CENTERED, 800, 600, sdl.WINDOW_SHOWN);

console.log(w);

sdl.delay(1000);

var r = sdl.createRenderer(w, -1, sdl.RENDERER_ACCELERATED);