#ifndef GEAR_ARCH_HTTP_NAMESPACE_H
#define GEAR_ARCH_HTTP_NAMESPACE_H

namespace gear {
namespace arch {
namespace http {
class _namespace {
public:
    static Php::Namespace getNamespace() {
        Php::Namespace ns = Php::Namespace("http");

        return ns;
    }
};
}
}
}

#endif //GEAR_ARCH_HTTP_NAMESPACE_H
