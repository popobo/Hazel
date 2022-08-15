#include "Application.h"
#include "Log.h"
#include "Events/ApplicationEvent.h"

namespace Hazel {

	Application::Application() {
	
	}

	Application::~Application() {
	}

	void Application::Run() {
	 	WindowResizeEvent event(1280, 720);
		if (event.IsInCategory(EventCategoryApplication)) {
			HZ_TRACE(event);
		}
		
		while (true);
	}
}

