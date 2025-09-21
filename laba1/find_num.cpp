#include "function.h"

int find_num(unsigned int devider, unsigned int bound) {
    unsigned result = bound;
    for (result; result > 0; result--){
        if (result % devider == 0) return result;
    }
    return -1;
}