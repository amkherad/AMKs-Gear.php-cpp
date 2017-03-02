#ifndef _GEAR_ARCH_APP_NAMESPACE_H
#define _GEAR_ARCH_APP_NAMESPACE_H

#include <headers/app/gearappengine.h>

namespace gear {
namespace arch {
namespace app {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("app");

        GearAppEngine::registerClass(ns);

        return ns;
    }
};
}
}
}

#endif //_GEAR_ARCH_APP_NAMESPACE_H
