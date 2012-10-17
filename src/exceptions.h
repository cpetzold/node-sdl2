#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include "includes.h"

Handle<Value> ThrowUsageException(const char* usage);
Handle<Value> ThrowSDLException(const char* call);

#endif