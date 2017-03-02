#include <headers/exceptions/gearexception.h>

//#include <headers/fx/_gearhelpers.h>

GearException::GearException(std::string message)
    : Php::Exception(message)
{

}

//void GearException::__construct(Php::Parameters &params)
//{
//    //Php::Value message = params[0];
//    //if (message.isNull()) {
//    //    message = tr(tr_DefaultExceptionMessage);
//    //}

//    //this->_message = message;
//}
