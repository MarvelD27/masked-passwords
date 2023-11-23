#include <string.h>

char *maskify(char *masked, const char *string) {
    size_t len = strlen(string);

    // Check if masking is necessary
    if (len > 4) {
        memset(masked, '#', len - 4); // Mask all characters except the last four
        strcpy(masked + len - 4, string + len - 4); // Copy the last four characters
    } else {
        strcpy(masked, string); // If the length is 4 or less, no need to mask, just copy the string
    }

    return masked;
}
