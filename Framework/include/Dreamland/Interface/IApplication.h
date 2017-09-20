#pragma once

#include <Dreamland/Interface/IRuntimeModule.h>

namespace Dreamland
{
	class IApplication : public IRuntimeModule
	{
	public:
		virtual ~IApplication() = default;

		virtual int Initialize() = 0;

		virtual void Finalize() = 0;

		// one cycle of the main loop
		virtual void Tick() = 0;

		virtual bool IsQuit() = 0;
	};
}