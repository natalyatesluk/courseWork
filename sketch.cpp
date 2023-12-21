#include "sketch.h"

Sketch::Sketch(Sketch &sketch)
{
    image = sketch.image;
    name = sketch.name;
    price = sketch.price;
}
