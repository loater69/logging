#ifndef LOGGING_H
#define LOGGING_H

#include <stdint.h>
#include <string>
#include <fstream>

namespace logging {
    class logger : public std::basic_ostream<char> {
    public:
        logger(const std::string& log_file);
        ~logger();
    private:
        std::ofstream logging_file;
    };
}


#endif