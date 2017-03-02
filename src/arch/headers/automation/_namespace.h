#ifndef GEAR_ARCH_AUTOMATION_NAMESPACE_H
#define GEAR_ARCH_AUTOMATION_NAMESPACE_H

namespace gear {
namespace arch {
namespace automation {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("automation");

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_AUTOMATION_NAMESPACE_H
