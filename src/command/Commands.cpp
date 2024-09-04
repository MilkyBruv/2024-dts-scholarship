#include "Commands.hpp"
#include "../json/JSONReader.hpp"
#include "CommandBuilder.hpp"

void Commands::exec(char const *argv[])
{
    // Get JSON data
    JsonData jsonData = JSONReader::getJsonData();

    if (strcmp(argv[2], "--class") == 0)
    {
        // Build and run commands from JSON data for the .class files.
        system(CommandBuilder::buildJavacCommand(jsonData).c_str());
        system(CommandBuilder::buildJavaCommand(jsonData).c_str());
    }
    else if (strcmp(argv[2], "--jar") == 0)
    {
        // Build and run commands from JSON data for the .jar file.
        system(CommandBuilder::buildJavaJarCommand(jsonData).c_str());
    }
}

void Commands::package(char const *argv[])
{
    // 
}

void Commands::build(char const *argv[])
{
    // 
}

void Commands::_new(char const *argv[])
{
    // 
}

void Commands::clean(char const *argv[])
{
    // 
}

void Commands::help(char const *argv[])
{
    // 
}

void Commands::libAdd(char const *argv[])
{
    // 
}

void Commands::libSearch(char const *argv[])
{
    // 
}

void Commands::search(char const *argv[])
{
    // 
}

