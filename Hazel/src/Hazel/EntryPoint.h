#pragma once

#include "Application.h"
#include <stdio.h>
#include "Log.h"

#ifdef HZ_PLATFORM_WINDOWS
	
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_ERROR("init log!");
	HZ_CORE_INFO("init log! = {0}", 11);

	printf("Hazel Entry Point!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif