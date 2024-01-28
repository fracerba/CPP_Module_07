#ifndef iter_HPP
#define iter_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <cfloat>

template <typename P, typename T, typename F> void iter(P *p, T t, F f)
{
   if (!p)
        return ;
   for (int i = 0; i < t; i++)
        f(p[i]);
}

#endif