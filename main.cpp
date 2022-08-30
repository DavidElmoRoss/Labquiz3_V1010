#include "mbed.h"

// Hardware Definitions
Digitalout RED(LED1);           
Digitalin right_pb(SW2);        

#include "mbed.h"               

// main() runs in its own thread in the OS
int main()
{
    RED=1;                              
    for(;;)                             
    {   
        if(right_pb==0)                 
        {
            RED=0;                      
        }
        else
        {
           RED=1;                      
        }
    }
}

