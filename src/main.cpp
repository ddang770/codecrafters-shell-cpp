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
    else
      std::cout << command << ": command not found" << std::endl;
  }
}
