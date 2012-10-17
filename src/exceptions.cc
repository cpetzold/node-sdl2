#include "exceptions.h"

Handle<Value> ThrowUsageException(const char* usage) {
  return ThrowException(
    Exception::TypeError(
      String::Concat(
        String::New("Invalid arguments: Expected "),
        String::New(usage)
      )
    )
  );
}

Handle<Value> ThrowSDLException(const char* call) {
  return ThrowException(
    Exception::Error(
      String::Concat(
        String::Concat(String::New(call), String::New(": ")),
        String::New(SDL_GetError())
      )
    )
  );
}