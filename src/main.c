


#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    DDRD = 0x04;
    PORTD = 0x00;

    while(1)
    {
        PORTD ^= 0x04;
        _delay_ms(1000);
    }

    return 0;
}
