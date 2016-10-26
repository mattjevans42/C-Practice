
#include <iostream>
#include "IntegerSet.h"


int main(){

  IntegerSet test;
  //test.printSet();
  //test.insertElement(56);
  //test.insertElement(12);
  //test.printSet();
  //test.deleteElement(12);
  //test.printSet();
  int myInts[]={5, 25, 46, 39, 75, 82};
  std::vector<int> k ( myInts, myInts + sizeof(myInts)/sizeof(int) );
  test.insertElement(k);
  test.printSet();
  int myInts2[]={4,46};
  IntegerSet test2;
  std::vector<int> k2 ( myInts2, myInts2 + sizeof(myInts2)/sizeof(int) );
  test2.insertElement(k2);
  test2.printSet();
  IntegerSet test3;
  test3.intersectionOfSet( test, test2 );
  test3.printSet();
}

