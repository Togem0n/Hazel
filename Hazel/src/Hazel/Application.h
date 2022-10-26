#pragma once
#include "Core.h"
#include "Events/Event.h"

namespace Hazel{

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run(); // core game loop
	};

	Application* CreateApplication(); // To be defined in client 
}
