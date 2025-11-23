#include <stdio.h>
#include <stdint.h>
int main() {
    int8_t a = 10;
    int16_t b = 30000;
    int32_t c = 2000000;
    int64_t d = 9000000000;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%lld\n", d);
    uint8_t battery = 87;
    printf("Battery level is %u out of 100\n", battery);
    return 0;
}
