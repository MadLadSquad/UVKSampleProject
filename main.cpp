#include "Engine/Engine.hpp"

class obj : public UVK::ScriptableObject
{
public:
    obj()
    {
        events.createObj(this);
    }

    virtual void beginPlay() override
    {
        logger.consoleLog("Begin play", UVK_LOG_TYPE_WARNING);
    }

    virtual void tick(float deltaTime) override
    {
        logger.consoleLog("Tick", UVK_LOG_TYPE_ERROR);
    }

    virtual void endPlay() override
    {
        logger.consoleLog("End play", UVK_LOG_TYPE_SUCCESS);
    }
};

int main()
{
    //Test tst;
    //tst.open("test.yaml");

    //pool.each([&](Actor act){
    //    auto& a = registry.getComponent<UVK::CoreComponent>(act);

    //    logger.consoleLogComplex<std::string>("Actor with name:", WARNING, { a.name, "and ID:", std::to_string(a.id) });

    //});

    //UVK::GLRenderer rd;
    //rd.createWindow();
    obj ob;

    events.callBegin();
    events.callTick(1.0f);
    events.callEnd();
}
