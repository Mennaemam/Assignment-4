#include <iostream>
#include "node.h"
#ifndef LISTEMPLOYEE_H
#define LISTEMPLOYEE_H

class listemployee
{
public:
    int test;
    node *header;
    node *mirror;
    node *temp;
    listemployee()
    {
        header=NULL;
        mirror=header;
    }
};
#endif

