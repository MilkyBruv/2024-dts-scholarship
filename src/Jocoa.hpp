#ifndef JOCOA_HPP
#define JOCOA_HPP

/*
Commands:
 - compile (to class files)
 - excecute (compile and run class files)
 - package (to jar)
 - build (package and run jar)
 - new (create new project)
 - clean (clean any unused libraries and files)
 - help (shows list of commands)
 - add (add package from maven repo)
 - search (search package from maven repo)
*/

/*
Java Commands:
 - javac -d <classfiles dir> -cp .;1.jar;2,jar dir1/*.java dir2/*.java
 - java -cp .;<classfiles>;1.jar;2.jar -Djava.library.path=<dll dir> main/Main
*/

class Jocoa
{
private:
    // 
public:
    Jocoa();
    ~Jocoa();
};

#endif