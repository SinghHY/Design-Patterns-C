/* Code Listing 3-2: Bit fields in C */

#include <stdlib.h>
#include <stdio.h>

int main() {
    typedef struct _statusBits {
            unsigned enable      : 1;
            unsigned errorStatus : 1;
            unsigned motorSpeed  : 4;
            unsigned LEDColor    : 2;
    } statusBits;

statusBits status;

printf("size = %d\n",sizeof(status));

status.enable = 1;
status.errorStatus = 0;
status.motorSpeed = 3;
status.LEDColor = 2;

if (status.enable) printf("Enabled\n");
    else printf ("Disabled\n");

if (status.errorStatus) printf("ERROR!\n");
    else printf("No error\n");

    printf ("Motor speed %d\n",status.motorSpeed);
    printf ("Color %d\n",status.LEDColor);

return 0;
};

/*Another potential problem with using bit fields is that it is impossible to cast between a scalar
  and a user-defined struct. Thus, the following is disallowed *5:

    Unsigned char f;
    f = 0xF0;
    status = (statusBits) f;

*/