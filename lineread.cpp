#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::ifstream file("lineread.cpp");

    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            //   std::istringstream iss(line);
            printf("%s\n", line.c_str());
        }
        file.close();
    }
}
