#include <iostream>
#include <string>

int main(std::string argv[])
{
  while (true)
  {
    // Flush after every std::cout / std:cerr
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    // TODO: Uncomment the code below to pass the first stage
    std::cout << "$ ";
    std::string command;
    std::getline(std::cin, command);
    if (command == "exit")
    {
      return 0;
    }
    else if (command.substr(0, 4) == "echo")
    {
      std::cout << command.substr(5) << std::endl;
    }
    else if (command.substr(0, 4) == "type")
    {
      if (command.substr(5) == "echo")
        std::cout << "echo is a shell builtin" << std::endl;
      else if (command.substr(5) == "exit")
        std::cout << "exit is a shell builtin" << std::endl;
      else if (command.substr(5) == "type")
        std::cout << "type is a shell builtin" << std::endl;
      else
        std::cout << command.substr(5) << ": not found" << std::endl;
    }
    else
      std::cout << command << ": command not found" << std::endl;
  }
}
