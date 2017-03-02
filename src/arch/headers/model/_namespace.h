#ifndef GEAR_ARCH_MODEL_NAMESPACE_H
#define GEAR_ARCH_MODEL_NAMESPACE_H

namespace gear {
namespace arch {
namespace model {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("model");

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_MODEL_NAMESPACE_H
