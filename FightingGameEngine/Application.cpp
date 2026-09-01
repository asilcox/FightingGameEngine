#include "Application.h"

Application::Application()
	:
	window(1280, 720, "Fighting Game Engine")
{

}

Application::~Application()
{

}

int Application::Run()
{
	while (true)
	{
		if (const auto msgCode = Window::ProcessMessages())
			return *msgCode;

		DrawFrame();
	}
}

void Application::DrawFrame()
{

}