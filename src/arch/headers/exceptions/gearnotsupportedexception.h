#ifndef GEARNOTSUPPORTEDEXCEPTION_H
#define GEARNOTSUPPORTEDEXCEPTION_H

#include <phpcpp.h>
#include <headers/exceptions/gearexception.h>

class GearNotSupportedException : public GearException
{
public:
    GearNotSupportedException() = default;
    GearNotSupportedException(std::string message);

    void __construct(Php::Parameters &params);



    static void registerClass(Php::Namespace &ns)
    {
        Php::Class<GearNotSupportedException> self("GearNotSupportedException");

        self.method<&GearNotSupportedException::__construct>("__construct",
        {
            Php::ByVal("message", Php::Type::String, {})
        });

        ns.add(std::move(self));
    }
};

#endif // GEARNOTSUPPORTEDEXCEPTION_H
