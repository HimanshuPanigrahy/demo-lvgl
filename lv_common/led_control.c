#include "led_control.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LED_PATH "/sys/class/leds/user-led1/brightness"

void setLedBrightness(int value) {
    FILE *file = fopen(LED_PATH, "w");
    if (file == NULL) {
        perror("Error opening LED file");
        exit(1);
    }

    fprintf(file, "%d", value);

    fclose(file);
}
