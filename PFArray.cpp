#include "PFArrayD.h"
#include <iostream>
#include <cstdlib> 
using namespace std;
//using this syntax because we are using class declared in the other file
//declares default variables
PFArrayD::PFArrayD( ) :capacity(100), used(0) 
{
a = new double[capacity];
}
   PFArrayD::PFArrayD(int size) :capacity(size), used(0)
  {
     a = new double[capacity];
  }
//copy constructor
PFArrayD::PFArrayD(const PFArrayD& pfaObject)
  :capacity(pfaObject.getCapacity( )), used(pfaObject.getNumberUsed( ))
{a = new double[capacity];
    for (int i = 0; i < used; i++)
      a[i] = pfaObject.a[i];
  }
   void PFArrayD::addElement(double element)
  {
     if (used >= capacity)
      {
          cout << "Attempt to exceed capacity in PFArrayD.\n";
 exit(0);
 }
      a[used] = element;
 used++;
  }
 bool PFArrayD:: full() const{
   return (capacity == used);
 }
//getters
int PFArrayD:: getCapacity() const{
  return capacity;
  }
    int PFArrayD::getNumberUsed() const{
      return used;
    }
    void PFArrayD::emptyArray(){
      used = 0;
    }
 double& PFArrayD::operator[](int index)
  {
      if (index >= used)
      {
          cout << "Illegal index in PFArrayD.\n";
 exit(0);
 }
      return a[index];
  }
   PFArrayD& PFArrayD::operator =(const PFArrayD& rightSide)
{
    if (capacity != rightSide.capacity)
    {
delete [] a;
        a = new double[rightSide.capacity];
    }
    capacity = rightSide.capacity;
    used = rightSide.used;
    for (int i = 0; i < used; i++)
        a[i] = rightSide.a[i];
    return *this;
}
    PFArrayD::~PFArrayD( )
{
delete [] a; 
  }
//Conducts one test of the class PFArrayD.
 void testPFArrayD( )
 {
 int cap;
      cout << "Enter capacity of this super array: ";
 cin >> cap;
      PFArrayD temp(cap);
     cout << "Enter up to " << cap << " nonnegative numbers.\n";
     cout << "Place a negative number at the end.\n";
      double next;
      cin >> next;
      while ((next >= 0) && (!temp.full( )))
 {
          temp.addElement(next);
          cin >> next;
 }

  cout << "You entered the following "
          << temp.getNumberUsed( ) << " numbers:\n";
 int index;
     int count = temp.getNumberUsed( );
     for (index = 0; index < count; index++)
         cout << temp[index] << " ";
     cout << endl;
      cout << "(plus a sentinel value.)\n";
 }
  