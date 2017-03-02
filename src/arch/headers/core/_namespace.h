#ifndef GEAR_ARCH_CORE_NAMESPACE_H
#define GEAR_ARCH_CORE_NAMESPACE_H

#include <headers/core/igearcontext.h>
#include <headers/core/gearconfiguration.h>

namespace gear {
namespace arch {
namespace core {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("core");

        IGearContext::registerInterface(ns);

        GearConfiguration::registerClass(ns);

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_CORE_NAMESPACE_H
