#include <activity_1.h>
#include <activity_2.h>
#include <activity_3.h>
#include<avr/io.h>

/**
 * @file project_main.h
 * @brief activity 1 and activity 3 is executed
 * @author Arun Maurya
 */
int main(void)
{
    while(1)
    {
        activity_1();
        activity_3();
    }
    return 0;
}
