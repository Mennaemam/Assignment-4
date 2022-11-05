#include <iostream>
#include "employee.h"
using namespace std;
class hash2
{
private:
    employee e;
    int employeenum;
    float collide;
    employee *arr;
public:
   hash2()
    {
        
        employeenum=0;
        arr= new employee[20];
        collide=0;
        
    }
    int hashfunc(employee e)
    {
        return e.name[0]-65;
    }
    void insert(employee e)
    {
        int index=hashfunc(e);
        
        if(arr[index].name=="NULL")
        {
            arr[index]=e;
            employeenum++;
        }
        else
        {
            while(arr[index].name!="NULL")
            {
                index++;
                collide++;
            }
            arr[index]=e;
            employeenum++;
        }
        
    }
    int findtoremove(employee e)
    {
        int index=-1;
        int index1= hashfunc(e);
        int i=index1+1;
        if(arr[index1].name==e.name && arr[index1].age == e.age && arr[index1].salary== e.salary && arr[index1].experience== e.experience)
        {
            index=index1;
        }
        else
        {
            while(i%20!= index)
            {
                if(arr[i].name==e.name && arr[i].age == e.age && arr[i].salary== e.salary && arr[i].experience== e.experience)
                {
                    index=i;
                }
            }
            
        }
        return index;
    }
    void remove(employee e)
    {
        int index1=findtoremove(e);
        if(arr[index1].name!="NULL")
            {
                arr[index1].name="NULL";
                arr[index1].age=0;
                arr[index1].salary=0;
                arr[index1].experience=0;
            }
        
    }
    void print()
    {
        cout<<"hash table using linear probing:"<<endl;
        for(int i=0;i<20;i++)
        {
            if(arr[i].name!="NULL")
            {
                cout<<"Employee name: "<<arr[i].name<<'\t'<<"Salary: "<<arr[i].salary<<'\t'<<"Age: "<<arr[i].age<<'\t'<<"Years of experience: "<<arr[i].experience<<endl;
            }
        }
    }
    int collisionrate()
    {
        return (collide/employeenum)*100;
    }
};
