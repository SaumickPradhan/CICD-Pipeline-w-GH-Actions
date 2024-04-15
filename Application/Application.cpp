// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"
#include <iostream>
using namespace std;

CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 * a; //compile error
    }
    else
    {
        return a + b;
    }
    cout << "Saumick's Work";
    
}


    
 
