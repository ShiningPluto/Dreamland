#pragma once

#ifdef DreamlandExport
#define DreamlandAPI __declspec(dllexport)
#else
#define DreamlandAPI __declspec(dllimport)
#endif
