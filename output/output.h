#include <fstream>
#include <sstream>
#include <string>

using std::fstream;
using std::stringstream;
using std::string;


class Output
{
    fstream file;

    public:
        Output(const char*);
        ~Output();
        
        template<class... Args>
        void write(Args... args)
        {
            if (file.is_open())
            {
                stringstream s;
                for (auto arg: {args...})
                {
                    s << arg << " ";
                }
                string line = s.str();
                line.pop_back();
                file << line;
            }
        }
};
