#include <Engine.h>

class ExampleLayer : public Engine::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{

	}

	void OnUpdate() override
	{
		ENGINE_INFO("ExampleLayer::Update");
	}

	void OnEvent(Engine::Event& event) override
	{
		ENGINE_TRACE("{0}", event);
	}
};

class Sanbox : public Engine::Application
{
public:
	Sanbox()
	{
		PushLayer(new ExampleLayer());
	}
	~Sanbox()
	{

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new Sanbox();
}