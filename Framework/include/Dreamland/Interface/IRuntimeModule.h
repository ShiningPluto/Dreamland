#pragma once

namespace Dreamland
{
	class IRuntimeModule
	{
	public:
		virtual ~IRuntimeModule() = default;

		virtual int Initialize() = 0;

		virtual void Finalize() = 0;

		virtual void Tick() = 0;
	};
}