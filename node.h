#include <iostream>
#ifndef NODE_H
#define NODE_H
struct node
{
    node *next=NULL;
    std::string name;
    int age;
    int exp;
    int salary;
};

#endif
