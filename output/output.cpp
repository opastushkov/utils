#include "output.h"


Output::Output(const char* filename)
{
    file.open(filename, std::ios::out);
}

Output::~Output()
{
    file.close();
}
