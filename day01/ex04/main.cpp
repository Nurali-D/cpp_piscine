#include <iostream>
#include <string>
#include <fstream>

void    findReplace(std::string s1, std::string s2, std::string &line)
{
    size_t          index = line.find(s1);
    std::string     replace;

    while(std::string::npos != index)
    {
        replace = line.substr(0, index) + s2 + line.substr(index + s1.length());
        line = replace;
        index = line.find(s1);
    }
}

int  main(int argc, char* argv[])
{
    std::ifstream   in;
    std::ofstream   out;
    std::string     outFile;

    if (argc != 4 || (argc == 4 && (argv[1][0] == '\0' 
        || argv[2][0] == '\0' || argv[3][0] == '\0')))
    {
        std::cout << "Invalid arguments." << std::endl;
        return 0;
    }
    in.open(argv[1]);
    outFile = std::string(argv[1]) + ".replace";
    out.open(outFile.c_str());
    if (!in.is_open() || !out.is_open())
    {
        std::cout << "Cannot open file." << std::endl;
        return 0;
    }
    for (std::string line; getline(in, line);)
    {
        findReplace(std::string(argv[2]), std::string(argv[3]), line);
        out << line << std::endl;
    }
    in.close();
    out.close();
    return 0; 
}