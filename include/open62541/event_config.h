#ifndef EVENT_CONFIG_H
#define EVENT_CONFIG_H

// #include <stdlib.h>
#include <stdio.h>

#include <papi.h>


#define MAX_EVENTS 6

typedef struct {
    char *event_names[MAX_EVENTS];
    int event_codes[MAX_EVENTS];
    int num_events;
    int event_set;
    long long values[MAX_EVENTS];
    char *file_name;
    FILE *export_handle;
} EventConfig;

#endif // EVENT_CONFIG_H
