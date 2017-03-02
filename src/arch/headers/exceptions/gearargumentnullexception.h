#ifndef GEARARGUMENTNULLEXCEPTION_H
#define GEARARGUMENTNULLEXCEPTION_H

#include <phpcpp.h>
#include <headers/exceptions/gearexception.h>

class GearArgumentNullException : public GearException
{
public:
    GearArgumentNullException() = default;
    GearArgumentNullException(std::string argumentName);

    void __construct(Php::Parameters &params);



    static void registerClass(Php::Namespace &ns)
    {
        Php::Class<GearArgumentNullException> self("GearArgumentNullException");

        self.method<&GearArgumentNullException::__construct>("__construct",
        {
            Php::ByVal("argumentName", Php::Type::String, {})
        });

        ns.add(std::move(self));
    }
};

#endif // GEARARGUMENTNULLEXCEPTION_H
