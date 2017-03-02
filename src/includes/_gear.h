#ifndef _GEAR_H_
#define _GEAR_H_

#include <phpcpp.h>

typedef char* string;

//#define RegistrarCallback void(*)(const Php::Extension &)
//void RegistrarCallback(const Php::Extension &extension);

class RegistrarCallback
{
public:
    RegistrarCallback() = default;

    virtual int registerClass(const Php::Extension &extension) = 0;

};

class Context {
private:
    Php::Namespace _rootNamespace;

public:
    Php::Namespace getRootNamespace();
};


std::string tr(const std::string &str );

#define tr_DefaultExceptionMessage "An exception has been occurred."


#endif //_GEAR_H_
