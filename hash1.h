#include <iostream>
#include<vector>
#include "employee.h"
#include "listemployee.h"
#include "node.h"
using namespace std;
class hash1{
private:
    employee e;
    int employeenumber;
    vector<listemployee> link;
    int collisions;
public:
    hash1()
    {
        link.resize(26);
        employeenumber=0;
        collisions=0;
        for(int i=0;i<26;i++)
        {
            link[i].header =NULL;
        }
    }
    int hashfunction(employee e)
    {
        return e.name[0]-65;
    }
    void insert(employee e)
    {
        int index=hashfunction(e);
        node *node1= new node;
        node1->name=e.name;
        node1->salary=e.salary;
        node1->age=e.age;
        node1->exp=e.experience;
        
        
        if(link[index].header==NULL)
        {
            link[index].header=node1;
        }
        else
        {
            link[index].mirror=link[index].header;
            while(link[index].mirror->next !=NULL)
            {
                link[index].mirror=link[index].mirror->next;
            }
            
            link[index].mirror->next=node1;
            node1->next=NULL;
            collisions++;
        }
        employeenumber++;
    }
    
    void print()
    {
        cout<<"hash table using seperate chaining:"<<endl;
        for(int i=0;i<26;i++)
        {
            link[i].mirror=link[i].header;
            if (link[i].header == NULL)
            {
                //cout<<nothing here<<endl;
            }
            while(link[i].mirror!=NULL)
            {
                cout<<"Employee name:  "<<link[i].mirror->name<<'\t'<<"Salary: "<<link[i].mirror->salary<<'\t'<<"Age: "<<link[i].mirror->age<<'\t'<<"Years of experience: "<<link[i].mirror->exp<<endl;
                link[i].mirror=link[i].mirror->next;
            }
            
        }
    
    }
    int collisioncount()
    {
        float count=employeenumber;

        return (collisions/count)*100;
    }
    
    void remove(employee e)
    {
        node *temp;
        node *prev;
        temp = link[hashfunction(e)].header;
        prev = NULL;
        
        
        if (temp != NULL && (temp->name == e.name && temp->salary == e.salary && temp->exp == e.experience && temp->age == e.age))
        {
            link[hashfunction(e)].header = temp->next;
            delete temp;
            return;
        }
        else
        {
            
            while (temp != NULL && !(temp->name == e.name && temp->salary == e.salary && temp->exp == e.experience && temp->age == e.age))
            {
                prev = temp;
                temp = temp->next;
            }
            
            
            if (temp == NULL)
            {
                cout << "Employee not found";
                return;
            }
            
            prev->next = temp->next;
            delete temp;
        }
    }
};
