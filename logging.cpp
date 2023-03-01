#include "logging.h"

logging::logger::logger(const std::string& log_file) : logging_file(log_file, std::ios::app), std::basic_ostream<char>(logging_file.rdbuf()) {}

logging::logger::~logger() {
    logging_file.close();
}