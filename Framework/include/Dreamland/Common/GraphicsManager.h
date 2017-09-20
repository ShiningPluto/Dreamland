#pragma once

#include <Dreamland/Interface/IRuntimeModule.h>

namespace Dreamland
{
	class GraphicsManager : public IRuntimeModule
	{
	public:
		virtual ~GraphicsManager() = default;
	};
}