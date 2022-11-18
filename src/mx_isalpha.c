#include "libmx.h"

bool mx_isalpha(int c) {
    if ((65 <= c && c <= 70) || (97 <= c && c <= 102) || (48 <= c && c <= 57))
        return true;
    else
        return false;
}


