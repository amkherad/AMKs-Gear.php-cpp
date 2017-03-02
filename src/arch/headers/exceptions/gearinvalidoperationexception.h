#ifndef GEARCONFIGURATION_H
#define GEARCONFIGURATION_H

#include <phpcpp.h>
#include <headers/exceptions/gearexception.h>

class GearInvalidOperationException : public GearException
{
public:
    GearInvalidOperationException() = default;
    GearInvalidOperationException(std::string message);

    void __construct(Php::Parameters &params);



    static void registerClass(Php::Namespace &ns)
    {
        Php::Class<GearInvalidOperationException> self("GearInvalidOperationException");

        self.method<&GearInvalidOperationException::__construct>("__construct",
        {
            Php::ByVal("message", Php::Type::String, {})
        });

        ns.add(std::move(self));
    }
};

#endif // GEARCONFIGURATION_H
