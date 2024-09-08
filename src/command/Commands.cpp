#include "../json/JSONReader.hpp"
#include "Commands.hpp"
#include "CommandBuilder.hpp"

void Commands::run(char const *argv[])
{
    // Get JSON data
    JsonData jsonData = JSONReader::getJsonData();

    if (strcmp(argv[2], "jar") == 0)
    {
        // Build and run commands from JSON data for the .jar file.
        system(CommandBuilder::buildJavaJarCommand(jsonData).c_str());
        return;
    }

    // Build and run commands from JSON data for the .class files.
    system(CommandBuilder::buildJavacCommand(jsonData).c_str());
    system(CommandBuilder::buildJavaCommand(jsonData).c_str());
}

void Commands::toJar(char const *argv[])
{
    // 
}

void Commands::_new(char const *argv[])
{
    // 
}

void Commands::cleanUp(char const *argv[])
{
    // 
}

void Commands::help(char const *argv[])
{
    // 
}

void Commands::addLibrary(char const *argv[])
{
    // 
}

void Commands::removeLibrary(char const *argv[])
{
    // 
}

void Commands::searchLibrary(char const *argv[])
{
    // 
}


