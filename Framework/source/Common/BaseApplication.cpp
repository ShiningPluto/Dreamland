#include <Dreamland/Common/BaseApplication.h>

using namespace Dreamland;

// parse command line, read configuration, initialize all sub modules
int BaseApplication::Initialize()
{
	quit = false;

	return 0;
}

// finalize all sub modules and clean up all runtime temporary files
void BaseApplication::Finalize()
{
	
}

// one cycle of the main loop
void BaseApplication::Tick()
{
	
}

bool BaseApplication::IsQuit()
{
	return quit;
}

