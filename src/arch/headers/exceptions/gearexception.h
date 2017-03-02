#ifndef GEAREXCEPTION_H
#define GEAREXCEPTION_H

#include <phpcpp.h>
#include <headers/gearbaseclass.h>

class GearException : public Php::Exception, public GearBaseClass
{
public:
    GearException() = default;
    GearException(std::string message);

    //void __construct(Php::Parameters &params);



    static void registerClass(Php::Namespace &ns)
    {
        Php::Class<GearException> self("GearException");

//        self.method<&GearException::__construct>("__construct",
//        {
//            Php::ByVal("message", Php::Type::String, {})
//        });

        ns.add(std::move(self));
    }
};

#endif // GEAREXCEPTION_H
