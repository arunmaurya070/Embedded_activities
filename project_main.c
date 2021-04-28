#include <activity_1.h>
#include <activity_2.h>
#include <activity_3.h>
#include<avr/io.h>

int main(void)
{
    while(1)
    {
        activity_1();
        /*Activity2 AND is used in Activity3*/
        activity_3();
    }
    return 0;
}
