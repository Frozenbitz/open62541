#ifndef EVENT_CONFIG_H
#define EVENT_CONFIG_H

// #include <stdlib.h>
#include <stdio.h>

#include <papi.h>


#define KRITS3M_MAX_EVENTS 6

typedef struct {
    char *event_names[KRITS3M_MAX_EVENTS];
    int event_codes[KRITS3M_MAX_EVENTS];
    int num_events;
    int event_set;
    long long values[KRITS3M_MAX_EVENTS];
    char *file_name;
    FILE *export_handle;
} EventConfig;

#endif // EVENT_CONFIG_H
