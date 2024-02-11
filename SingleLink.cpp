#include "SingleLink.h"
#include <iostream>
using namespace std;

SingleLink::SingleLink(int data)
{
    info = data;
    nextLink = nullptr;
}