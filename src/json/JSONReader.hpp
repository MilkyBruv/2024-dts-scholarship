#ifndef JSONREADER_HPP
#define JSONREADER_HPP

#include <string>
#include "../../lib/include/json.hpp"

using std::string;

/*
Java Commands:
 - javac -d <classfiles dir> -cp .;1.jar;2,jar dir1/*.java dir2/*.java
 - java -cp .;<classfiles>;1.jar;2.jar -Djava.library.path=<dll dir> main/Main
*/

typedef struct JsonData
{
    string javaDirectoryArgument; // Classfiles directory
    string* javaClasspathArguments; // Libraries
    string* javaJavaFiles; // Path to all java files
    
    string javacClasspathArguments; // Classfiles and libraries
    string javacDirectoryArguments; // Natives directory
    string javacMainClass; // Directory and .class file to main class
} JsonData;

class JSONReader
{
private:
    // 
public:
    JSONReader();
    ~JSONReader();
    static JsonData getJsonData();
};


#endif