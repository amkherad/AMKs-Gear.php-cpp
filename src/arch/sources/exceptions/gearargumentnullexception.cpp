#include <headers/exceptions/gearargumentnullexception.h>

//#include <headers/fx/_gearhelpers.h>

GearArgumentNullException::GearArgumentNullException(std::string argumentName)
    : GearException(argumentName)
{

}

void GearArgumentNullException::__construct(Php::Parameters &params)
{
    //Php::Value message = params[0];
    //if (message.isNull()) {
    //    message = tr(tr_DefaultExceptionMessage);
    //}

    //this->_message = message;
}
