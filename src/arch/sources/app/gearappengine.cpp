#include <headers/app/gearappengine.h>

GearAppEngine::GearAppEngine()
{
}

Php::Value GearAppEngine::info_php()
{
    return Php::Value("AMK's Gear.php v1.0");
}

Php::Value GearAppEngine::start_php(Php::Parameters &params)
{

}

Php::Value GearAppEngine::shutdown_php(Php::Parameters &params)
{
}



Php::Value GearAppEngine::fromConfig_php(Php::Parameters &params)
{
    return new GearAppEngine();
}
Php::Value GearAppEngine::create_php(Php::Parameters &params)
{
    return new GearAppEngine();
}
