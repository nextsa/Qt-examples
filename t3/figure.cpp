#include "figure.h"

void figure::generate ()
{
    x = rand()%501;
    y = rand()%501;
    w = rand()%50 + 30;
    h = rand()%50 + 30;
}
