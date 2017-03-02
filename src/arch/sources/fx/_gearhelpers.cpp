#include <headers/fx/_gearhelpers.h>

void GearHelpers::ThrowIfNull(Php::Value val)
{
    if (!Php::isset(val)) {
      //throw GearArgumentNullException("");
    }
}
