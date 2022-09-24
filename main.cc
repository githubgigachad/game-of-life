#include <iostream>
#include "print.h"
#include <string>
#include "png.h"
#include "imgwrite.h"

int main(int argc, char** argv)
{
    int width  = 1300;
    int height = 780;
    png_t image(height, width);
    rgb_t color = colors::blue;
    image.fill(color);
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            image(100+i,100+j) = colors::red;
        }
    }
    imgwrite(image, "img.png");
    return 0;
}
