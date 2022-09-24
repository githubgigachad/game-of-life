#include <iostream>
#include <print.h>
#include <range.h>
#include <string>

template <typename data_t> auto sum(data_t data)
{
    return data;
}

template <typename data_t, typename... datas_t> auto sum(data_t data, datas_t... datas)
{
    return data + sum(datas...);
}

int main(int argc, char** argv)
{
    std::cout << std::boolalpha;
    
    double t = 0.9;
    double r = 0.8;
    double f = 0.3;
    double g = 0.1;
    
    print(ez_sum(t, r, f, g, 0.1, 0.9, 0.5, 0.4));
    
    return 0;
}
