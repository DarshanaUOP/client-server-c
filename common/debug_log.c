#include "debug_log.h"

void debuglog(enum DEBUG_TYPES debug_type, char *str)
{
    if (debug_type == ERROR)
    {
        
    }else if (debug_type == WARNING)
    {
        
    }else if (debug_type == INFO){

    }
    print_message("hi");
}

static void print_message(const char message){
    printf(message);
}