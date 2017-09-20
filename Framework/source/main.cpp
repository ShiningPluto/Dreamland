#include <Dreamland/Common/BaseApplication.h>

#include <iostream>
#include <memory>

using namespace Dreamland;

int main(int argc, char** argv)
{
	int ret;

	std::unique_ptr<IApplication> app = std::make_unique<BaseApplication>();

	if ((ret=app->Initialize()) != 0)
	{
		std::cout << "App Initialize failed, will exit now.";
		return ret;
	}

	while (!app->IsQuit())
	{
		app->Tick();
	}

	app->Finalize();

	return 0;
}