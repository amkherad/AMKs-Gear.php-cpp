#ifndef IGEARCONTEXT_H
#define IGEARCONTEXT_H

#include <phpcpp.h>
#include <headers/gearbaseinterface.h>

class IGearRouteService;
class GearConfiguration;
class IGearHttpRequest;
class IGearHttpResponse;
class IGearModelBinder;

class IGearContext : public GearBaseInterface
{
public:
    IGearContext() = default;

    virtual Php::Value getRoute_php() = 0;
    virtual Php::Value getConfig_php() = 0;
    virtual Php::Value getRequest_php() = 0;
    virtual Php::Value getResponse_php() = 0;
    virtual Php::Value getBinder_php() = 0;

    virtual IGearRouteService getRoute() = 0;
    virtual GearConfiguration getConfiguration() = 0;
    virtual IGearHttpRequest getRequest() = 0;
    virtual IGearHttpResponse getResponse() = 0;
    virtual IGearModelBinder getModelBinder() = 0;

    virtual Php::Value getValue_php(Php::Parameters &params) = 0;
    virtual Php::Value setValue_php(Php::Parameters &params) = 0;

    virtual std::string getValue(std::string name) = 0;
    virtual void setValue(std::string name, std::string value) = 0;

    virtual Php::Value registerService_php(Php::Parameters &params) = 0;
    virtual Php::Value removeService_php(Php::Parameters &params) = 0;
    virtual Php::Value getService_php(Php::Parameters &params) = 0;

    //void registerService();

    static void registerInterface(Php::Namespace &ns)
    {
        Php::Interface self("IGearContext");

        self.method("getRoute");
        self.method("getConfig");
        self.method("getRequest");
        self.method("getResponse");
        self.method("getBinder");

        self.method("getValue",
        {
            Php::ByVal("name", Php::Type::String)
        });
        self.method("setValue",
        {
            Php::ByVal("name", Php::Type::String),
            Php::ByVal("value", Php::Type::String)
        });
        self.method("registerService",
        {
            Php::ByVal("serviceName", Php::Type::String),
            Php::ByVal("service", Php::Type::Object)
        });
        self.method("removeService",
        {
            Php::ByVal("serviceName", Php::Type::String)
        });
        self.method("getService",
        {
            Php::ByVal("serviceName", Php::Type::String)
        });

        ns.add(std::move(self));
    }
};

#endif // IGEARCONTEXT_H
