#include <iostream>
#include <fstream>
#include "../json/JSONReader.hpp"
#include "Commands.hpp"
#include "CommandBuilder.hpp"

using std::cout;
using std::cerr;
using std::endl;

void Commands::createDirectory(string path)
{
    if (!std::filesystem::create_directory(path))
    {
        cerr << "Failed to create directory! \'" << path << "\'" << endl;
    }
    else
    {
        cout << "Created \'" + path + "\'" << endl;
    }
}

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
    cout << "Compiling..." << endl;
    system(CommandBuilder::buildJavacCommand(jsonData).c_str());
    cout << "Done!" << endl;
    system(CommandBuilder::buildJavaCommand(jsonData).c_str());
}

void Commands::toJar(char const *argv[])
{
    // 
}

void Commands::_new(char const *argv[])
{
    // Get name from arguments
    string projectName = argv[2];
    // Get new project path
    string currentPath = std::filesystem::current_path().u8string() + OS_PATH_DELIMETER + projectName;

    createDirectory(currentPath);
    createDirectory(currentPath + OS_PATH_DELIMETER + "src" + OS_PATH_DELIMETER + "main");
    createDirectory(currentPath + OS_PATH_DELIMETER + "lib" + OS_PATH_DELIMETER + "natives");
    createDirectory(currentPath + OS_PATH_DELIMETER + "bin");

    // Create JSON file and write basic setup
    std::ofstream jsonFile(currentPath + OS_PATH_DELIMETER + "jocoa.json");
    jsonFile << "{\n\"projectName\": \"MyProject\",\n\"projectType\": \"Library | Program\",\n\"sourceFiles\": \n\n\n\"src/file1.java\"\n],\n\"dependencies\":\n\n\n\"lib/dependency1.jar\"\n],\n\n\"natives\": \"lib/natives\",\n\"classpath\": \"bin\"\n}";
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


