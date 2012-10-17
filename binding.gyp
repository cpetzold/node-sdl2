{
  'targets': [ 
    {
      'target_name': 'sdl2',
      'sources': [
        'src/sdl.cc',
        'src/audio.h',
        'src/audio.cc',
        'src/basics.h',
        'src/basics.cc',
        'src/events.h',
        'src/events.cc',
        'src/files.h',
        'src/files.cc',
        'src/threads.h',
        'src/threads.cc',
        'src/timers.h',
        'src/timers.cc',
        'src/video.h',
        'src/video.cc',
      ],
      'libraries': [
        '-framework SDL2'
      ]
    }
  ]
}