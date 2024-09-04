#include "CommandBuilder.hpp"

/*
Java Commands:
 - javac -d <classfiles dir> -cp .;1.jar;2,jar dir1/*.java dir2/*.java
 - java -cp .;<classfiles>;1.jar;2.jar -Djava.library.path=<dll dir> main/Main
*/

#ifdef _WIN32 || __WINDOWS__
    #define OS_DELIMITER ";"
#elif __unix__ || __linux__
    #define OS_DELIMETER ":"
#endif

string CommandBuilder::buildJavacCommand(JsonData jsonData)
{
    string finalCommand = "javac -d " + jsonData.classpath + " -cp .";

    for (const auto &dependency : jsonData.dependencies) { finalCommand += OS_DELIMETER + dependency; }
    for (const auto &sourceFile : jsonData.sourceFiles) { finalCommand += " " + sourceFile; }

    return finalCommand;
}

string CommandBuilder::buildJavaCommand(JsonData jsonData)
{
    string finalCommand = "java -cp .";
    finalCommand += OS_DELIMETER + jsonData.classpath;

    for (const auto &dependency : jsonData.dependencies) { finalCommand += OS_DELIMETER + dependency; }
    
    finalCommand += "-Djava.library.path=" + jsonData.natives + " main/Main";
}
