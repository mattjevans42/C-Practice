
#include "IntegerSet.h"
#include <iostream>

IntegerSet::IntegerSet (){
  std::cout << "Creating IntegerSet object" << std::endl;
  a.resize(N);
  for( int i=0; i<N; i++) a[i]=false;
}

void IntegerSet::printSet(){
  std::cout << "Printing IntegerSet" << std::endl;
  for( int i=0; i<N; i++)
    if( a[i] )
      std::cout << i << " ";
  std::cout << std::endl;
}

void IntegerSet::insertElement( int k ){
  a[k]=true;
}

void IntegerSet::insertElement( std::vector<int> k ){
  //std::cout << k.size() << std::endl;
  for( int i=0; i<k.size(); i++ )
    a[k[i]]=true;
}

void IntegerSet::deleteElement( int m ){
  a[m]=false;
}

void IntegerSet::unionOfSet ( IntegerSet A, IntegerSet B ){
  for( int i=0; i<N; i++ )
    if( A.a[i] || B.a[i] ) a[i]=true;
}

void IntegerSet::intersectionOfSet ( IntegerSet A, IntegerSet B ){
  for( int i=0; i<N; i++ )
    if( A.a[i] && B.a[i] ) a[i]=true;
}

bool IntegerSet::isEqual ( IntegerSet A ){
  bool sol=true;
  int i=0;
  while( sol && i<N ){
    if( A.a[i] != a[i] ) sol=false;
    i++;
  }
  return sol;
}
