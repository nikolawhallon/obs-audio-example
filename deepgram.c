/* deepgram.c */
#include <obs-module.h>

/* Defines common functions (required) */
OBS_DECLARE_MODULE()

/* Implements common ini-based locale (optional) */
OBS_MODULE_USE_DEFAULT_LOCALE("deepgram", "en-US")

extern struct obs_source_info deepgram_source;

bool obs_module_load(void)
{
        obs_register_source(&deepgram_source);
        blog(LOG_WARNING, "Loaded Deepgram plugin.");
        return true;
}
