#include "log.hpp"

namespace logfile{
    std::ofstream logfile("log.txt", std::ofstream::trunc);
    /**
     * @param log_info info to write to log file
     * @brief log text to logfile
    **/
    void log(const std::string &log_info) {
        logfile << log_info << "\n";
    }

    std::string SDL_StringError() { return std::string(SDL_GetError()); }
}