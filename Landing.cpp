include<iostream>
include<string.h>

using namespace std;

struct plane
{
    string name;
    int fuel;
    int passengers;
    int staff_present;
    int staff_required; //Total requirement for it to be able to fly
    //bool safe=false;
};
 1
int main()

{
int n;    
cout<<"Enter number of planes arriving at the Airport";
cin>>n;
struct plane a[n];

for(int i=0;i<n;i++)
    {
        cout<<"\n Enter Plane name ";
        cin>>a[i].name;
    } 

for(int i=0;i<n;i++)
    {
        cout<<"\n Enter No.of Passengers in Plane "<<a[i].name;
        cin>>a[i].passengers;
    }   

for(int i=0;i<n;i++)
    {
        cout<<"\n Enter Fuel(in gallons) in Plane"<<a[i].name;
        cin>>a[i].fuel=rand() % 100 + 1; 
    }
    
for(int i=0;i<n;i++)
    {
        a[i].staff_present=rand() % 10 + 1; 
    }
  
    
