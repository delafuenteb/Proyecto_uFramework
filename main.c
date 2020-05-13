#include <windows.h>
#include "uframework.h"

int main()
{

    initialize("Ejemplo Uframework", 800, 600, false);


    while(!is_window_closed())
    {


        Sleep(200); //pausa de 20 milisegundos
    }

    return 0;
}
