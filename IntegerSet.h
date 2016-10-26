
#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <vector>

class IntegerSet{
  static const int N = 100; //max size of a

 public:
  IntegerSet(); //constructor
  void printSet ();
  void insertElement ( int );
  void insertElement ( std::vector<int> );
  void deleteElement ( int );
  void unionOfSet ( IntegerSet, IntegerSet );
  void intersectionOfSet ( IntegerSet, IntegerSet );
  bool isEqual ( IntegerSet );

 private:
  std::vector <bool> a;

};


#endif
