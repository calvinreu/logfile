#pragma once
#include <fstream>
#include <string>
#include <SDL2/SDL.h>


namespace logfile{
    extern std::ofstream logfile;
    /**
     * @param log_info info to write to log file
     * @brief log text to logfile
    **/
    extern void log(const std::string &log_info);

    extern std::string SDL_StringError();
}