#pragma once

#include <Dreamland/Interface/IApplication.h>

namespace Dreamland
{
	class BaseApplication : public IApplication
	{
	protected:
		bool quit;

	public:
		virtual int Initialize();

		virtual void Finalize();

		// one cycle of the main loop
		virtual void Tick();

		virtual bool IsQuit();
	};
}