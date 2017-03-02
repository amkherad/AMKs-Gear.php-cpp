#include <headers/exceptions/gearnotsupportedexception.h>

//#include <headers/fx/_gearhelpers.h>

GearNotSupportedException::GearNotSupportedException(std::string message)
    : GearException(message)
{

}

void GearNotSupportedException::__construct(Php::Parameters &params)
{
    //Php::Value message = params[0];
    //if (message.isNull()) {
    //    message = tr(tr_DefaultExceptionMessage);
    //}

    //this->_message = message;
}
