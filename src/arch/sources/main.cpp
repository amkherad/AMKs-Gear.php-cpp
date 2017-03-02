#include <phpcpp.h>

#include <headers/automation/_namespace.h>
#include <headers/app/_namespace.h>
#include <headers/core/_namespace.h>
#include <headers/controller/_namespace.h>
#include <headers/http/_namespace.h>
#include <headers/model/_namespace.h>
#include <headers/route/_namespace.h>
#include <headers/view/_namespace.h>


/**
 *  tell the compiler that the get_module is a pure C function
 */
extern "C" {
    /**
     *  Function that is called by PHP right after the PHP process
     *  has started, and that returns an address of an internal PHP
     *  strucure with all the details and features of your extension
     *
     *  @return void*   a pointer to an address that is understood by PHP
     */
    PHPCPP_EXPORT void *get_module()
    {
        // static(!) Php::Extension object that should stay in memory
        // for the entire duration of the process (that's why it's static)
        static Php::Extension extension("amksgear.core", "1.0");

        extension.add(Php::Constant("GEAR_VERSION", "1.0"));

        Php::Namespace nsGear = Php::Namespace("gear");
        Php::Namespace nsArch = Php::Namespace("arch");





        Php::Namespace nsApp = gear::arch::app::_namespace::getNamespace();
        nsArch.add(std::move(nsApp));

        Php::Namespace nsAutomation = gear::arch::automation::_namespace::getNamespace();
        nsArch.add(std::move(nsAutomation));

        Php::Namespace nsCore = gear::arch::core::_namespace::getNamespace();
        nsArch.add(std::move(nsCore));

        Php::Namespace nsHttp = gear::arch::http::_namespace::getNamespace();
        nsArch.add(std::move(nsHttp));

        Php::Namespace nsModel = gear::arch::model::_namespace::getNamespace();
        nsArch.add(std::move(nsModel));

        Php::Namespace nsRoute = gear::arch::route::_namespace::getNamespace();
        nsArch.add(std::move(nsRoute));

        Php::Namespace nsView = gear::arch::view::_namespace::getNamespace();
        nsArch.add(std::move(nsView));





        nsGear.add(std::move(nsArch));
        extension.add(std::move(nsGear));
        // return the extension
        return extension;
    }

}
