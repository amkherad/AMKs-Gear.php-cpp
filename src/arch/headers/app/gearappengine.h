#ifndef GEARAPPENGINE_H
#define GEARAPPENGINE_H

#include <phpcpp.h>
#include <headers/gearbaseclass.h>

class GearAppEngine : public GearBaseClass
{
public:
    GearAppEngine();

    /*!
     * \brief info Provides information about framework.
     * \return A string including information about framework.
     */
    static Php::Value info_php();
    //static string info();

    /*!
     * \brief start Starts a new application environment.
     * \param params
     * \return
     */
    Php::Value start_php(Php::Parameters &params);
    /*!
     * \brief shutdown Releases all resources of current application environment.
     * \param params
     * \return void
     */
    Php::Value shutdown_php(Php::Parameters &params);

    /*!
     * \brief create Creates a new instance of GearAppEngine from given options.
     * \param array options
     * \return GearAppEngine
     */
    static Php::Value create_php(Php::Parameters &params);
    /*!
     * \brief fromConfig Creates a new instance of GearAppEngine from given configuration file.
     * \param string configPath
     * \return GearAppEngine
     */
    static Php::Value fromConfig_php(Php::Parameters &params);



    static void registerClass(Php::Namespace &ns) {
        Php::Class<GearAppEngine> self("GearAppEngine");

        self.method<&GearAppEngine::info_php>("info");

        self.method<&GearAppEngine::start_php>("start", {
            Php::ByVal("engine", Php::Type::String, false)
        });
        self.method<&GearAppEngine::shutdown_php>("shutdown", {
            Php::ByVal("dispose", Php::Type::Bool)
        });

        self.method<&GearAppEngine::create_php>("create", {
            Php::ByVal("options", Php::Type::Array)
        });
        self.method<&GearAppEngine::fromConfig_php>("fromConfig", {
            Php::ByVal("configPath", Php::Type::String)
        });

        ns.add(std::move(self));
    }
};

#endif // GEARAPPENGINE_H
