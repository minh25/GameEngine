#include <Engine.h>

class Sanbox : public Engine::Application
{
public:
	Sanbox()
	{

	}
	~Sanbox()
	{

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new Sanbox();
}