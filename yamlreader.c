// Jefi yaml config parser

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <yaml.h>

typedef struct _jefiConfig {
    uint timeout;
    bool scan_all_efi;
} jefiConfig;

bool readConfig(char* inputFileName, jefiConfig* config) {
    yaml_parser_t parser;
    yaml_event_t event;
    yaml_parser_initialize(&parser);

    FILE *input = fopen(inputFileName, "rb");
    yaml_parser_set_input_file(&parser, input);

    config->timeout = 3;
}

int main() {
    jefiConfig myConfig;
    memset(
    readConfig("settings.yml" &myConfig);
}

