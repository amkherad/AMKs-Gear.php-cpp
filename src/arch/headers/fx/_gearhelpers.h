#ifndef GEARHELPERS_H
#define GEARHELPERS_H

#include <phpcpp.h>
#include <../includes/_gear.h>
#include <headers/gearbaseclass.h>

class GearHelpers : public GearBaseClass
{
public:
    static void ThrowIfNull(Php::Value val);
};

#endif // GEARHELPERS_H
