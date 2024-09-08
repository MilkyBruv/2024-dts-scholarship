#include <string.h>
#include "../jocoa/Jocoa.hpp"
#include "../command/Commands.hpp"

void Jocoa::runCommandFromArguments(char const *argv[])
{
    if (strcmp(argv[1], "run") == 0)
    {
        Commands::run(argv);
    }
    else if (strcmp(argv[1], "to-jar") == 0)
    {
        Commands::toJar(argv);
    }
    else if (strcmp(argv[1], "new") == 0)
    {
        Commands::_new(argv);
    }
    else if (strcmp(argv[1], "clean-up") == 0)
    {
        Commands::cleanUp(argv);
    }
    else if (strcmp(argv[1], "add-library") == 0)
    {
        Commands::addLibrary(argv);
    }
    else if (strcmp(argv[1], "remove-library") == 0)
    {
        Commands::removeLibrary(argv);
    }
    else if (strcmp(argv[1], "search-library") == 0)
    {
        Commands::searchLibrary(argv);
    }
}