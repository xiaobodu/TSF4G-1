#ifndef _H_GLOBALS_H
#define _H_GLOBALS_H

#include "tconnd/tconnd_config_types.h"
#include "instance/tdtp_instance.h"


#define TCONND_VERSION "0.0.1"


extern tconnd_config_t g_config;

extern tdtp_instance_t g_tdtp_instance[TCONND_MAX_TDTP_NUM];



#endif//_H_GLOBALS_H