#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Hazel{

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run(); // core game loop
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	Application* CreateApplication(); // To be defined in client 
}
