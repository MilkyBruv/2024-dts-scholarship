#ifndef COMMANDS_HPP
#define COMMANDS_HPP

/*
Commands:
 - exec (compile to class and run)
 - package (to jar)
 - build (package and run jar)
 - new (create new project)
 - clean (clean any unused libraries and files)
 - help (shows list of commands)
 - lib
    - add (add package from maven repo)
    - search (search package from maven repo)
 - search (search files and folders for .java and .jar files and add them to)
*/

/*
Java Commands:
 - javac -d <classfiles dir> -cp .;1.jar;2,jar dir1/*.java dir2/*.java
 - java -cp .;<classfiles>;1.jar;2.jar -Djava.library.path=<dll dir> main/Main
*/

class Commands
{
private:
    // 
public:
    static void exec(char const *argv[]);
    static void package(char const *argv[]);
    static void build(char const *argv[]);
    static void _new(char const *argv[]);
    static void clean(char const *argv[]);
    static void help(char const *argv[]);
    static void libAdd(char const *argv[]);
    static void libSearch(char const *argv[]);
    static void search(char const *argv[]);
};


#endif