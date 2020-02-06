#include <unistd.h>
 
int main(void)
{
    if (write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 100) != 100) {
     
        return -1;
    }
    
        
     
    return 1;
}
