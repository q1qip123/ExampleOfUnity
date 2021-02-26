#include "module_a.h"

uint8_t checksum(uint8_t *data, uint16_t length){
    uint8_t sum = 0;
    for(uint16_t i = 0; i < length; i++){
        if(sum + data[i] < data[i]){
            sum = sum + data[i] + 1;
        } else {
            sum += data[i];
        }
    }
    return ~sum;
}