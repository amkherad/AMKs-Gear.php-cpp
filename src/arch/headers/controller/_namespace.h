#ifndef GEAR_ARCH_CONTROLLER_NAMESPACE_H
#define GEAR_ARCH_CONTROLLER_NAMESPACE_H

namespace gear {
namespace arch {
namespace controller {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("controller");

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_CONTROLLER_NAMESPACE_H
