#include <iostream>
#include <sstream>

using namespace std;

class Funciones{
  private:
    int acum=0;
  public:
    Funciones();
    int sumaIterativa(int n);
    int sumaRecursiva(int n);
    int sumaDirecta(int n);
};

Funciones::Funciones(){
}

int Funciones::sumaIterativa(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  else{
    for(int i=0;i<=n;i++){
      acum=acum+i;
    }
  }
  return acum;
}

int Funciones::sumaRecursiva(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  else{
    acum=n+sumaRecursiva(n-1);
  }
  return acum;
}

int Funciones::sumaDirecta(int n){
  if(n==0){
    return 0;
  }
  else{
    acum=(n*(n+1))/2;
    return acum;
  }
}