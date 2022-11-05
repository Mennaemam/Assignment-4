#include <iostream>
#include "hash1.h"
#include "hash2.h"
#include <string>
#include <vector>
#include "listemployee.h"
#include "node.h"
using namespace std;


int main()
{
    hash1 h;
    employee e;
    e.name="Mina";
    e.salary=10000;
    e.age=30;
    e.experience=4;
    employee e1;
    e1.name="Fawzy";
    e1.salary=5000;
    e1.age=45;
    e1.experience=8;
    employee e2;
    e2.name="Yara";
    e2.salary=2000;
    e2.age=19;
    e2.experience=0;
    employee e3;
    e3.name="Mariam";
    e3.salary=8000;
    e3.age=32;
    e3.experience=2;
    employee e4;
    e4.name="Ayman";
    e4.salary=4000;
    e4.age=34;
    e4.experience=8;
    employee e5;
    e5.name="Roshdy";
    e5.salary=9000;
    e5.age=28;
    e5.experience=3;
    employee e6;
    e6.name="Aya";
    e6.salary=6000;
    e6.age=26;
    e6.experience=3;
    employee e7;
    e7.name="Abdullah";
    e7.salary=7000;
    e7.age=29;
    e7.experience=4;
    employee e8;
    e8.name="Fatma";
    e8.salary=3000;
    e8.age=21;
    e8.experience=1;
    h.insert(e);
    h.insert(e1);
    h.insert(e2);
    h.insert(e3);
    h.insert(e4);
    h.insert(e5);
    h.insert(e6);
    h.insert(e7);
    h.insert(e8);
    h.print();
    h.remove(e);
    h.print();
    cout<<"collision rate is: "<<endl;
    cout<<h.collisioncount()<<"%"<<endl;
    cout<<"///////////////////////"<<endl;
    hash2 h2;
    employee a;
    employee b;
    a.name="Mina";
    a.salary=10000;
    a.age=30;
    a.experience=4;
    b.name="Fawzy";
    b.salary=5000;
    b.age=45;
    b.experience=8;
    employee c;
    c.name="Mariam";
    c.salary=8000;
    c.age=32;
    c.experience=2;
    employee d;
    d.name="Ayman";
    d.salary=4000;
    d.age=34;
    d.experience=8;
    employee f;
    f.name="Roshdy";
    f.salary=9000;
    f.age=28;
    f.experience=3;
    employee g;
    g.name="Aya";
    g.salary=6000;
    g.age=26;
    g.experience=3;
    employee i;
    i.name="Abdullah";
    i.salary=7000;
    i.age=29;
    i.experience=4;
    employee j;
    j.name="Fatma";
    j.salary=3000;
    j.age=21;
    j.experience=1;
    h2.insert(a);
    h2.insert(b);
    h2.insert(c);
    h2.insert(d);
    h2.insert(f);
    h2.insert(g);
    h2.insert(i);
    h2.insert(j);
    h2.print();
    cout<<"collision rate is: "<<endl;
    cout<<h2.collisionrate()<<"%"<<endl;
    h2.remove(j);
    h2.print();
    
}
