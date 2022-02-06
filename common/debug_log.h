enum DEBUG_TYPES{
    WARNING = 0,
    ERROR,
    INFO
}DEBUG_TYPES;

void debuglog(enum DEBUG_TYPES debug_type, char *str);