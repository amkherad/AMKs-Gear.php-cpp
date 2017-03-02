#include <headers/exceptions/gearinvalidoperationexception.h>

//#include <headers/fx/_gearhelpers.h>

GearInvalidOperationException::GearInvalidOperationException(std::string message)
    : GearException(message)
{

}

void GearInvalidOperationException::__construct(Php::Parameters &params)
{
    //Php::Value message = params[0];
    //if (message.isNull()) {
    //    message = tr(tr_DefaultExceptionMessage);
    //}

    //this->message = message;
}
