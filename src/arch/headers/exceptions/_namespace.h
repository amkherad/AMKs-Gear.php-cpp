#ifndef GEAR_ARCH_EXCEPTIONS_NAMESPACE_H
#define GEAR_ARCH_EXCEPTIONS_NAMESPACE_H

#include <headers/core/gearconfiguration.h>

namespace gear {
namespace arch {
namespace exceptions {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("exceptions");

        //GearConfiguration::registerClass(ns);

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_EXCEPTIONS_NAMESPACE_H
