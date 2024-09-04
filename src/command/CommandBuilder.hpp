#ifndef COMMANDBUILDER_HPP
#define COMMANDBUILDER_HPP

#include <string>
#include "../json/JSONReader.hpp"

using std::string;

class CommandBuilder
{
public:
    static string buildJavacCommand(JsonData jsonData);
    static string buildJavaCommand(JsonData jsonData);
};


#endif