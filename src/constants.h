
void InitConstants(Handle<Object> target) {
  
  target->Set(String::New("INIT_TIMER"), Integer::New(SDL_INIT_TIMER));
  target->Set(String::New("INIT_AUDIO"), Integer::New(SDL_INIT_AUDIO));
  target->Set(String::New("INIT_VIDEO"), Integer::New(SDL_INIT_VIDEO));
  target->Set(String::New("INIT_JOYSTICK"), Integer::New(SDL_INIT_JOYSTICK));
  target->Set(String::New("INIT_HAPTIC"), Integer::New(SDL_INIT_HAPTIC));
  target->Set(String::New("INIT_EVERYTHING"), Integer::New(SDL_INIT_EVERYTHING));
  target->Set(String::New("INIT_NOPARACHUTE"), Integer::New(SDL_INIT_NOPARACHUTE));

  target->Set(String::New("WINDOW_FULLSCREEN"), Integer::New(SDL_WINDOW_FULLSCREEN));
  target->Set(String::New("WINDOW_OPENGL"), Integer::New(SDL_WINDOW_OPENGL));
  target->Set(String::New("WINDOW_SHOWN"), Integer::New(SDL_WINDOW_SHOWN));
  target->Set(String::New("WINDOW_BORDERLESS"), Integer::New(SDL_WINDOW_BORDERLESS));
  target->Set(String::New("WINDOW_RESIZABLE"), Integer::New(SDL_WINDOW_RESIZABLE));
  target->Set(String::New("WINDOW_MAXIMIZED"), Integer::New(SDL_WINDOW_MAXIMIZED));
  target->Set(String::New("WINDOW_MINIMIZED"), Integer::New(SDL_WINDOW_MINIMIZED));
  target->Set(String::New("WINDOW_INPUT_GRABBED"), Integer::New(SDL_WINDOW_INPUT_GRABBED));

  target->Set(String::New("WINDOWPOS_UNDEFINED"), Integer::New(SDL_WINDOWPOS_UNDEFINED));
  target->Set(String::New("WINDOWPOS_CENTERED"), Integer::New(SDL_WINDOWPOS_CENTERED));

  target->Set(String::New("RENDERER_SOFTWARE"), Integer::New(SDL_RENDERER_SOFTWARE));
  target->Set(String::New("RENDERER_ACCELERATED"), Integer::New(SDL_RENDERER_ACCELERATED));
  target->Set(String::New("RENDERER_PRESENTVSYNC"), Integer::New(SDL_RENDERER_PRESENTVSYNC));
  target->Set(String::New("RENDERER_TARGETTEXTURE"), Integer::New(SDL_RENDERER_TARGETTEXTURE));

  target->Set(String::New("DOLLARGESTURE"), Integer::New(SDL_DOLLARGESTURE));
  target->Set(String::New("DROPFILE"), Integer::New(SDL_DROPFILE));
  target->Set(String::New("FINGERMOTION"), Integer::New(SDL_FINGERMOTION));
  target->Set(String::New("FINGERDOWN"), Integer::New(SDL_FINGERDOWN));
  target->Set(String::New("FINGERUP"), Integer::New(SDL_FINGERUP));
  target->Set(String::New("KEYDOWN"), Integer::New(SDL_KEYDOWN));
  target->Set(String::New("KEYUP"), Integer::New(SDL_KEYUP));
  target->Set(String::New("JOYAXISMOTION"), Integer::New(SDL_JOYAXISMOTION));
  target->Set(String::New("JOYBALLMOTION"), Integer::New(SDL_JOYBALLMOTION));
  target->Set(String::New("JOYHATMOTION"), Integer::New(SDL_JOYHATMOTION));
  target->Set(String::New("MOUSEMOTION"), Integer::New(SDL_MOUSEMOTION));
  target->Set(String::New("MOUSEBUTTONDOWN"), Integer::New(SDL_MOUSEBUTTONDOWN));
  target->Set(String::New("MOUSEBUTTONUP"), Integer::New(SDL_MOUSEBUTTONUP));
  target->Set(String::New("MOUSEWHEEL"), Integer::New(SDL_MOUSEWHEEL));
  target->Set(String::New("MULTIGESTURE"), Integer::New(SDL_MULTIGESTURE));
  target->Set(String::New("QUIT"), Integer::New(SDL_QUIT));
  target->Set(String::New("SYSWMEVENT"), Integer::New(SDL_SYSWMEVENT));
  target->Set(String::New("TEXTEDITING"), Integer::New(SDL_TEXTEDITING));
  target->Set(String::New("TEXTINPUT"), Integer::New(SDL_TEXTINPUT));
  target->Set(String::New("TOUCHBUTTONDOWN"), Integer::New(SDL_TOUCHBUTTONDOWN));
  target->Set(String::New("TOUCHBUTTONUP"), Integer::New(SDL_TOUCHBUTTONUP));
  target->Set(String::New("USEREVENT"), Integer::New(SDL_USEREVENT));
  target->Set(String::New("WINDOWEVENT"), Integer::New(SDL_WINDOWEVENT));

  target->Set(String::New("BUTTON_LEFT"), Integer::New(SDL_BUTTON_LEFT));
  target->Set(String::New("BUTTON_MIDDLE"), Integer::New(SDL_BUTTON_MIDDLE));
  target->Set(String::New("BUTTON_RIGHT"), Integer::New(SDL_BUTTON_RIGHT));
  target->Set(String::New("BUTTON_X1"), Integer::New(SDL_BUTTON_X1));
  target->Set(String::New("BUTTON_X2"), Integer::New(SDL_BUTTON_X2));

  target->Set(String::New("K_0"), Integer::New(SDLK_0));
  target->Set(String::New("K_1"), Integer::New(SDLK_1));
  target->Set(String::New("K_2"), Integer::New(SDLK_2));
  target->Set(String::New("K_3"), Integer::New(SDLK_3));
  target->Set(String::New("K_4"), Integer::New(SDLK_4));
  target->Set(String::New("K_5"), Integer::New(SDLK_5));
  target->Set(String::New("K_6"), Integer::New(SDLK_6));
  target->Set(String::New("K_7"), Integer::New(SDLK_7));
  target->Set(String::New("K_8"), Integer::New(SDLK_8));
  target->Set(String::New("K_9"), Integer::New(SDLK_9));
  target->Set(String::New("K_a"), Integer::New(SDLK_a));
  target->Set(String::New("K_b"), Integer::New(SDLK_b));
  target->Set(String::New("K_c"), Integer::New(SDLK_c));
  target->Set(String::New("K_d"), Integer::New(SDLK_d));
  target->Set(String::New("K_e"), Integer::New(SDLK_e));
  target->Set(String::New("K_f"), Integer::New(SDLK_f));
  target->Set(String::New("K_g"), Integer::New(SDLK_g));
  target->Set(String::New("K_h"), Integer::New(SDLK_h));
  target->Set(String::New("K_i"), Integer::New(SDLK_i));
  target->Set(String::New("K_j"), Integer::New(SDLK_j));
  target->Set(String::New("K_k"), Integer::New(SDLK_k));
  target->Set(String::New("K_l"), Integer::New(SDLK_l));
  target->Set(String::New("K_m"), Integer::New(SDLK_m));
  target->Set(String::New("K_n"), Integer::New(SDLK_n));
  target->Set(String::New("K_o"), Integer::New(SDLK_o));
  target->Set(String::New("K_p"), Integer::New(SDLK_p));
  target->Set(String::New("K_q"), Integer::New(SDLK_q));
  target->Set(String::New("K_r"), Integer::New(SDLK_r));
  target->Set(String::New("K_s"), Integer::New(SDLK_s));
  target->Set(String::New("K_t"), Integer::New(SDLK_t));
  target->Set(String::New("K_u"), Integer::New(SDLK_u));
  target->Set(String::New("K_v"), Integer::New(SDLK_v));
  target->Set(String::New("K_w"), Integer::New(SDLK_w));
  target->Set(String::New("K_x"), Integer::New(SDLK_x));
  target->Set(String::New("K_y"), Integer::New(SDLK_y));
  target->Set(String::New("K_z"), Integer::New(SDLK_z));
  target->Set(String::New("K_AC_BACK"), Integer::New(SDLK_AC_BACK));
  target->Set(String::New("K_AC_BOOKMARKS"), Integer::New(SDLK_AC_BOOKMARKS));
  target->Set(String::New("K_AC_FORWARD"), Integer::New(SDLK_AC_FORWARD));
  target->Set(String::New("K_AC_REFRESH"), Integer::New(SDLK_AC_REFRESH));
  target->Set(String::New("K_AC_SEARCH"), Integer::New(SDLK_AC_SEARCH));
  target->Set(String::New("K_AC_STOP"), Integer::New(SDLK_AC_STOP));
  target->Set(String::New("K_AGAIN"), Integer::New(SDLK_AGAIN));
  target->Set(String::New("K_ALTERASE"), Integer::New(SDLK_ALTERASE));
  target->Set(String::New("K_APPLICATION"), Integer::New(SDLK_APPLICATION));
  target->Set(String::New("K_AUDIOMUTE"), Integer::New(SDLK_AUDIOMUTE));
  target->Set(String::New("K_AUDIONEXT"), Integer::New(SDLK_AUDIONEXT));
  target->Set(String::New("K_AUDIOPLAY"), Integer::New(SDLK_AUDIOPLAY));
  target->Set(String::New("K_AUDIOPREV"), Integer::New(SDLK_AUDIOPREV));
  target->Set(String::New("K_AUDIOSTOP"), Integer::New(SDLK_AUDIOSTOP));
  target->Set(String::New("K_BACKSLASH"), Integer::New(SDLK_BACKSLASH));
  target->Set(String::New("K_BACKSPACE"), Integer::New(SDLK_BACKSPACE));
  target->Set(String::New("K_BRIGHTNESSDOWN"), Integer::New(SDLK_BRIGHTNESSDOWN));
  target->Set(String::New("K_BRIGHTNESSUP"), Integer::New(SDLK_BRIGHTNESSUP));
  target->Set(String::New("K_CALCULATOR"), Integer::New(SDLK_CALCULATOR));
  target->Set(String::New("K_CANCEL"), Integer::New(SDLK_CANCEL));
  target->Set(String::New("K_CAPSLOCK"), Integer::New(SDLK_CAPSLOCK));
  target->Set(String::New("K_CLEAR"), Integer::New(SDLK_CLEAR));
  target->Set(String::New("K_CLEARAGAIN"), Integer::New(SDLK_CLEARAGAIN));
  target->Set(String::New("K_COMMA"), Integer::New(SDLK_COMMA));
  target->Set(String::New("K_COMPUTER"), Integer::New(SDLK_COMPUTER));
  target->Set(String::New("K_COPY"), Integer::New(SDLK_COPY));
  target->Set(String::New("K_CRSEL"), Integer::New(SDLK_CRSEL));
  target->Set(String::New("K_CURRENCYSUBUNIT"), Integer::New(SDLK_CURRENCYSUBUNIT));
  target->Set(String::New("K_CURRENCYUNIT"), Integer::New(SDLK_CURRENCYUNIT));
  target->Set(String::New("K_CUT"), Integer::New(SDLK_CUT));
  target->Set(String::New("K_DECIMALSEPARATOR"), Integer::New(SDLK_DECIMALSEPARATOR));
  target->Set(String::New("K_DELETE"), Integer::New(SDLK_DELETE));
  target->Set(String::New("K_DISPLAYSWITCH"), Integer::New(SDLK_DISPLAYSWITCH));
  target->Set(String::New("K_DOWN"), Integer::New(SDLK_DOWN));
  target->Set(String::New("K_EJECT"), Integer::New(SDLK_EJECT));
  target->Set(String::New("K_END"), Integer::New(SDLK_END));
  target->Set(String::New("K_EQUALS"), Integer::New(SDLK_EQUALS));
  target->Set(String::New("K_ESCAPE"), Integer::New(SDLK_ESCAPE));
  target->Set(String::New("K_EXECUTE"), Integer::New(SDLK_EXECUTE));
  target->Set(String::New("K_EXSEL"), Integer::New(SDLK_EXSEL));
  target->Set(String::New("K_F1"), Integer::New(SDLK_F1));
  target->Set(String::New("K_F2"), Integer::New(SDLK_F2));
  target->Set(String::New("K_F3"), Integer::New(SDLK_F3));
  target->Set(String::New("K_F4"), Integer::New(SDLK_F4));
  target->Set(String::New("K_F5"), Integer::New(SDLK_F5));
  target->Set(String::New("K_F6"), Integer::New(SDLK_F6));
  target->Set(String::New("K_F7"), Integer::New(SDLK_F7));
  target->Set(String::New("K_F8"), Integer::New(SDLK_F8));
  target->Set(String::New("K_F9"), Integer::New(SDLK_F9));
  target->Set(String::New("K_F10"), Integer::New(SDLK_F10));
  target->Set(String::New("K_F11"), Integer::New(SDLK_F11));
  target->Set(String::New("K_F12"), Integer::New(SDLK_F12));
  target->Set(String::New("K_F13"), Integer::New(SDLK_F13));
  target->Set(String::New("K_F14"), Integer::New(SDLK_F14));
  target->Set(String::New("K_F15"), Integer::New(SDLK_F15));
  target->Set(String::New("K_F16"), Integer::New(SDLK_F16));
  target->Set(String::New("K_F17"), Integer::New(SDLK_F17));
  target->Set(String::New("K_F18"), Integer::New(SDLK_F18));
  target->Set(String::New("K_F19"), Integer::New(SDLK_F19));
  target->Set(String::New("K_F20"), Integer::New(SDLK_F20));
  target->Set(String::New("K_F21"), Integer::New(SDLK_F21));
  target->Set(String::New("K_F22"), Integer::New(SDLK_F22));
  target->Set(String::New("K_F23"), Integer::New(SDLK_F23));
  target->Set(String::New("K_F24"), Integer::New(SDLK_F24));
  target->Set(String::New("K_FIND"), Integer::New(SDLK_FIND));
  // target->Set(String::New("K_GRAVE"), Integer::New(SDLK_GRAVE));
  target->Set(String::New("K_HELP"), Integer::New(SDLK_HELP));
  target->Set(String::New("K_HOME"), Integer::New(SDLK_HOME));
  target->Set(String::New("K_INSERT"), Integer::New(SDLK_INSERT));
  target->Set(String::New("K_KBDILLUMDOWN"), Integer::New(SDLK_KBDILLUMDOWN));
  target->Set(String::New("K_KBDILLUMTOGGLE"), Integer::New(SDLK_KBDILLUMTOGGLE));
  target->Set(String::New("K_KBDILLUMUP"), Integer::New(SDLK_KBDILLUMUP));
  target->Set(String::New("K_KP_0"), Integer::New(SDLK_KP_0));
  target->Set(String::New("K_KP_00"), Integer::New(SDLK_KP_00));
  target->Set(String::New("K_KP_000"), Integer::New(SDLK_KP_000));
  target->Set(String::New("K_KP_1"), Integer::New(SDLK_KP_1));
  target->Set(String::New("K_KP_2"), Integer::New(SDLK_KP_2));
  target->Set(String::New("K_KP_3"), Integer::New(SDLK_KP_3));
  target->Set(String::New("K_KP_4"), Integer::New(SDLK_KP_4));
  target->Set(String::New("K_KP_5"), Integer::New(SDLK_KP_5));
  target->Set(String::New("K_KP_6"), Integer::New(SDLK_KP_6));
  target->Set(String::New("K_KP_7"), Integer::New(SDLK_KP_7));
  target->Set(String::New("K_KP_8"), Integer::New(SDLK_KP_8));
  target->Set(String::New("K_KP_9"), Integer::New(SDLK_KP_9));
  target->Set(String::New("K_KP_AMPERSAND"), Integer::New(SDLK_KP_AMPERSAND));
  target->Set(String::New("K_KP_AT"), Integer::New(SDLK_KP_AT));
  target->Set(String::New("K_KP_BACKSPACE"), Integer::New(SDLK_KP_BACKSPACE));
  target->Set(String::New("K_KP_BINARY"), Integer::New(SDLK_KP_BINARY));
  target->Set(String::New("K_KP_CLEAR"), Integer::New(SDLK_KP_CLEAR));
  target->Set(String::New("K_KP_CLEARENTRY"), Integer::New(SDLK_KP_CLEARENTRY));
  target->Set(String::New("K_KP_COLON"), Integer::New(SDLK_KP_COLON));
  target->Set(String::New("K_KP_COMMA"), Integer::New(SDLK_KP_COMMA));
  target->Set(String::New("K_KP_DBLAMPERSAND"), Integer::New(SDLK_KP_DBLAMPERSAND));
  target->Set(String::New("K_KP_DBLVERTICALBAR"), Integer::New(SDLK_KP_DBLVERTICALBAR));
  target->Set(String::New("K_KP_DECIMAL"), Integer::New(SDLK_KP_DECIMAL));
  target->Set(String::New("K_KP_DIVIDE"), Integer::New(SDLK_KP_DIVIDE));
  target->Set(String::New("K_KP_ENTER"), Integer::New(SDLK_KP_ENTER));
  target->Set(String::New("K_KP_EQUALS"), Integer::New(SDLK_KP_EQUALS));
  target->Set(String::New("K_KP_EQUALSAS400"), Integer::New(SDLK_KP_EQUALSAS400));
  target->Set(String::New("K_KP_EXCLAM"), Integer::New(SDLK_KP_EXCLAM));
  target->Set(String::New("K_KP_GREATER"), Integer::New(SDLK_KP_GREATER));
  target->Set(String::New("K_KP_HASH"), Integer::New(SDLK_KP_HASH));
  target->Set(String::New("K_KP_HEXADECIMAL"), Integer::New(SDLK_KP_HEXADECIMAL));
  target->Set(String::New("K_KP_LEFTBRACE"), Integer::New(SDLK_KP_LEFTBRACE));
  target->Set(String::New("K_KP_LEFTPAREN"), Integer::New(SDLK_KP_LEFTPAREN));
  target->Set(String::New("K_KP_LESS"), Integer::New(SDLK_KP_LESS));
  target->Set(String::New("K_KP_MEMADD"), Integer::New(SDLK_KP_MEMADD));
  target->Set(String::New("K_KP_MEMCLEAR"), Integer::New(SDLK_KP_MEMCLEAR));
  target->Set(String::New("K_KP_MEMDIVIDE"), Integer::New(SDLK_KP_MEMDIVIDE));
  target->Set(String::New("K_KP_MEMMULTIPLY"), Integer::New(SDLK_KP_MEMMULTIPLY));
  target->Set(String::New("K_KP_MEMRECALL"), Integer::New(SDLK_KP_MEMRECALL));
  target->Set(String::New("K_KP_MEMSTORE"), Integer::New(SDLK_KP_MEMSTORE));
  target->Set(String::New("K_KP_MEMSUBTRACT"), Integer::New(SDLK_KP_MEMSUBTRACT));
  target->Set(String::New("K_KP_MINUS"), Integer::New(SDLK_KP_MINUS));
  target->Set(String::New("K_KP_MULTIPLY"), Integer::New(SDLK_KP_MULTIPLY));
  target->Set(String::New("K_KP_OCTAL"), Integer::New(SDLK_KP_OCTAL));
  target->Set(String::New("K_KP_PERCENT"), Integer::New(SDLK_KP_PERCENT));
  target->Set(String::New("K_KP_PERIOD"), Integer::New(SDLK_KP_PERIOD));
  target->Set(String::New("K_KP_PLUS"), Integer::New(SDLK_KP_PLUS));
  target->Set(String::New("K_KP_PLUSMINUS"), Integer::New(SDLK_KP_PLUSMINUS));
  target->Set(String::New("K_KP_POWER"), Integer::New(SDLK_KP_POWER));
  target->Set(String::New("K_KP_RIGHTBRACE"), Integer::New(SDLK_KP_RIGHTBRACE));
  target->Set(String::New("K_KP_RIGHTPAREN"), Integer::New(SDLK_KP_RIGHTPAREN));
  target->Set(String::New("K_KP_SPACE"), Integer::New(SDLK_KP_SPACE));
  target->Set(String::New("K_KP_TAB"), Integer::New(SDLK_KP_TAB));
  target->Set(String::New("K_KP_VERTICALBAR"), Integer::New(SDLK_KP_VERTICALBAR));
  target->Set(String::New("K_KP_XOR"), Integer::New(SDLK_KP_XOR));
  target->Set(String::New("K_KP_A"), Integer::New(SDLK_KP_A));
  target->Set(String::New("K_KP_B"), Integer::New(SDLK_KP_B));
  target->Set(String::New("K_KP_C"), Integer::New(SDLK_KP_C));
  target->Set(String::New("K_KP_D"), Integer::New(SDLK_KP_D));
  target->Set(String::New("K_KP_E"), Integer::New(SDLK_KP_E));
  target->Set(String::New("K_KP_F"), Integer::New(SDLK_KP_F));
  target->Set(String::New("K_LALT"), Integer::New(SDLK_LALT));
  target->Set(String::New("K_LCTRL"), Integer::New(SDLK_LCTRL));
  target->Set(String::New("K_LEFT"), Integer::New(SDLK_LEFT));
  target->Set(String::New("K_LEFTBRACKET"), Integer::New(SDLK_LEFTBRACKET));
  target->Set(String::New("K_LGUI"), Integer::New(SDLK_LGUI));
  target->Set(String::New("K_LSHIFT"), Integer::New(SDLK_LSHIFT));
  target->Set(String::New("K_MAIL"), Integer::New(SDLK_MAIL));
  target->Set(String::New("K_MEDIASELECT"), Integer::New(SDLK_MEDIASELECT));
  target->Set(String::New("K_MENU"), Integer::New(SDLK_MENU));
  target->Set(String::New("K_MINUS"), Integer::New(SDLK_MINUS));
  target->Set(String::New("K_MODE"), Integer::New(SDLK_MODE));
  target->Set(String::New("K_MUTE"), Integer::New(SDLK_MUTE));
  target->Set(String::New("K_NUMLOCKCLEAR"), Integer::New(SDLK_NUMLOCKCLEAR));
  target->Set(String::New("K_OPER"), Integer::New(SDLK_OPER));
  target->Set(String::New("K_OUT"), Integer::New(SDLK_OUT));
  target->Set(String::New("K_PAGEDOWN"), Integer::New(SDLK_PAGEDOWN));
  target->Set(String::New("K_PAGEUP"), Integer::New(SDLK_PAGEUP));
  target->Set(String::New("K_PASTE"), Integer::New(SDLK_PASTE));
  target->Set(String::New("K_PAUSE"), Integer::New(SDLK_PAUSE));
  target->Set(String::New("K_PERIOD"), Integer::New(SDLK_PERIOD));
  target->Set(String::New("K_POWER"), Integer::New(SDLK_POWER));
  target->Set(String::New("K_PRINTSCREEN"), Integer::New(SDLK_PRINTSCREEN));
  target->Set(String::New("K_PRIOR"), Integer::New(SDLK_PRIOR));
  target->Set(String::New("K_RALT"), Integer::New(SDLK_RALT));
  target->Set(String::New("K_RCTRL"), Integer::New(SDLK_RCTRL));
  target->Set(String::New("K_RETURN"), Integer::New(SDLK_RETURN));
  target->Set(String::New("K_RETURN2"), Integer::New(SDLK_RETURN2));
  target->Set(String::New("K_RGUI"), Integer::New(SDLK_RGUI));
  target->Set(String::New("K_RIGHT"), Integer::New(SDLK_RIGHT));
  target->Set(String::New("K_RIGHTBRACKET"), Integer::New(SDLK_RIGHTBRACKET));
  target->Set(String::New("K_RSHIFT"), Integer::New(SDLK_RSHIFT));
  target->Set(String::New("K_SCROLLLOCK"), Integer::New(SDLK_SCROLLLOCK));
  target->Set(String::New("K_SELECT"), Integer::New(SDLK_SELECT));
  target->Set(String::New("K_SEMICOLON"), Integer::New(SDLK_SEMICOLON));
  target->Set(String::New("K_SEPARATOR"), Integer::New(SDLK_SEPARATOR));
  target->Set(String::New("K_SLASH"), Integer::New(SDLK_SLASH));
  target->Set(String::New("K_SLEEP"), Integer::New(SDLK_SLEEP));
  target->Set(String::New("K_SPACE"), Integer::New(SDLK_SPACE));
  target->Set(String::New("K_STOP"), Integer::New(SDLK_STOP));
  target->Set(String::New("K_SYSREQ"), Integer::New(SDLK_SYSREQ));
  target->Set(String::New("K_TAB"), Integer::New(SDLK_TAB));
  target->Set(String::New("K_THOUSANDSSEPARATOR"), Integer::New(SDLK_THOUSANDSSEPARATOR));
  target->Set(String::New("K_UNDO"), Integer::New(SDLK_UNDO));
  target->Set(String::New("K_UNKNOWN"), Integer::New(SDLK_UNKNOWN));
  target->Set(String::New("K_UP"), Integer::New(SDLK_UP));
  target->Set(String::New("K_VOLUMEDOWN"), Integer::New(SDLK_VOLUMEDOWN));
  target->Set(String::New("K_VOLUMEUP"), Integer::New(SDLK_VOLUMEUP));
  target->Set(String::New("K_WWW"), Integer::New(SDLK_WWW));

}








