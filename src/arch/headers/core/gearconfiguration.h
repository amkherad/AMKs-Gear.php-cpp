#ifndef GEARCONFIGURATION_H
#define GEARCONFIGURATION_H

#include <phpcpp.h>
#include <headers/gearbaseclass.h>

class GearConfiguration : public GearBaseClass
{
public:
    GearConfiguration() = default;

    void __construct(Php::Parameters &params);

    GearConfiguration fromFile(Php::Parameters &params);
    GearConfiguration fromIniFile(Php::Parameters &params);
    GearConfiguration fromXmlFile(Php::Parameters &params);

    Php::Value fromFile_php(Php::Parameters &params);
    Php::Value fromIniFile_php(Php::Parameters &params);
    Php::Value fromXmlFile_php(Php::Parameters &params);

    Php::Value getValue_php(Php::Parameters &params);
    Php::Value getSection_php(Php::Parameters &params);

    Php::Value getValue(std::string name, std::string section, std::string defaultValue);
    Php::Value getSection(std::string section);

    Php::Value getSection_toPhp(std::string section) { return getSection(section); }

    Php::Value getUserConfig_php()              { return getSection_toPhp("Config"); }
    Php::Value getAppEngineConfig_php()         { return getSection_toPhp("AppEngine"); }
    Php::Value getControllersConfig_php()       { return getSection_toPhp("Controllers"); }
    Php::Value getRoutersConfig_php()           { return getSection_toPhp("Routers"); }
    Php::Value getActionResolversConfig_php()   { return getSection_toPhp("ActionResolvers"); }
    Php::Value getViewsConfig_php()             { return getSection_toPhp("Views"); }
    Php::Value getBindersConfig_php()           { return getSection_toPhp("Binders"); }
    Php::Value getBundlesConfig_php()           { return getSection_toPhp("Bundles"); }
    Php::Value getDefaultsConfig_php()          { return getSection_toPhp("Defaults"); }


    Php::Value getUserConfig()              { return getSection("Config"); }
    Php::Value getAppEngineConfig()         { return getSection("AppEngine"); }
    Php::Value getControllersConfig()       { return getSection("Controllers"); }
    Php::Value getRoutersConfig()           { return getSection("Routers"); }
    Php::Value getActionResolversConfig()   { return getSection("ActionResolvers"); }
    Php::Value getViewsConfig()             { return getSection("Views"); }
    Php::Value getBindersConfig()           { return getSection("Binders"); }
    Php::Value getBundlesConfig()           { return getSection("Bundles"); }
    Php::Value getDefaultsConfig()          { return getSection("Defaults"); }


    static void registerClass(Php::Namespace &ns)
    {
        Php::Class<GearConfiguration> self("GearConfiguration");

        self.method<&GearConfiguration::__construct>("__construct",
        {
            Php::ByVal("configArray", Php::Type::Array)
        });
        self.method<&GearConfiguration::fromFile_php>("fromFile",
        {
            Php::ByVal("path", Php::Type::String),
            Php::ByVal("type", Php::Type::Numeric, false)
        });
        self.method<&GearConfiguration::fromIniFile_php>("fromIniFile",
        {
            Php::ByVal("path", Php::Type::String)
        });
        self.method<&GearConfiguration::fromXmlFile_php>("fromXmlFile",
        {
            Php::ByVal("path", Php::Type::String)
        });
        self.method<&GearConfiguration::getValue_php>("getValue",
        {
            Php::ByVal("value", Php::Type::String),
            Php::ByVal("section", Php::Type::String, false),
            Php::ByVal("defaultValue", Php::Type::String, false)
        });
        self.method<&GearConfiguration::getSection_php>("getSection",
        {
            Php::ByVal("section", Php::Type::String)
        });

        self.method<&GearConfiguration::getUserConfig_php>("getUserConfig");
        self.method<&GearConfiguration::getAppEngineConfig_php>("getAppEngineConfig");
        self.method<&GearConfiguration::getControllersConfig_php>("getControllersConfig");
        self.method<&GearConfiguration::getRoutersConfig_php>("getRoutersConfig");
        self.method<&GearConfiguration::getActionResolversConfig_php>("getActionResolversConfig");
        self.method<&GearConfiguration::getViewsConfig_php>("getViewsConfig");
        self.method<&GearConfiguration::getBindersConfig_php>("getBindersConfig");
        self.method<&GearConfiguration::getBundlesConfig_php>("getBundlesConfig");
        self.method<&GearConfiguration::getDefaultsConfig_php>("getDefaultsConfig");

        ns.add(std::move(self));
    }
};

#endif // GEARCONFIGURATION_H
