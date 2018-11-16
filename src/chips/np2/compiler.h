#ifndef OPNMIDI_FMGEN_COMPILER_H
#define OPNMIDI_FMGEN_COMPILER_H

#ifndef _WIN32
#include <stdint.h>
typedef uint32_t DWORD;
#else
#include <windows.h>
#endif

#if defined(_MSC_VER) && !defined(FASTCALL)
#define FASTCALL __fastcall
#elif defined(__GNUC__) && !defined(FASTCALL)
#define FASTCALL __attribute__((regparm(2)))
#endif

#ifndef FASTCALL
#define FASTCALL
#endif
#define SOUNDCALL FASTCALL

#ifndef MAX_PATH
#define MAX_PATH 256
#endif

#endif
