{
  'targets': [ 
    {
      'target_name': 'sdl2',
      'sources': [
        'src/init.cc',
        'src/audio.cc',
        'src/basics.cc',
        'src/events.cc',
        'src/files.cc',
        'src/threads.cc',
        'src/timers.cc',
        'src/video.cc',
        'src/exceptions.cc'
      ],
      'libraries': [
        '-framework SDL2'
      ]
    }
  ]
}