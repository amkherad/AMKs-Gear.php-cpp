#ifndef GEAR_ARCH_VIEW_NAMESPACE_H
#define GEAR_ARCH_VIEW_NAMESPACE_H

namespace gear {
namespace arch {
namespace view {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("view");

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_VIEW_NAMESPACE_H
