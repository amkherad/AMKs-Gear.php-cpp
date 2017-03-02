#ifndef GEAR_ARCH_ROUTE_NAMESPACE_H
#define GEAR_ARCH_ROUTE_NAMESPACE_H

namespace gear {
namespace arch {
namespace route {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("route");

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_ROUTE_NAMESPACE_H
