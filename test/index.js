var sdl = require('../');

console.log(sdl);

sdl.init(sdl.INIT_EVERYTHING);

var w = sdl.createWindow('test', 0, 0, 800, 600, 0);

console.log(w);

sdl.delay(1000);