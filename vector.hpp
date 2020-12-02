#include<iostream>
#include <vector>
using namespace std;

namespace myvec{
class Vector 
{ 
  public: 
    vector<double> v;
    Vector(int tam) { //tamaño
      for( int j = 0; j < tam; j=j+1 ) 
      {
        cout<< "Defina la componente "<< i +1 << " del vector" << endl;
        float a;
        cin >> a;
      v.push_back(a);
      }
}
    void PrintVec(void){
          for(int j=0; j < v.size(); j++){
              cout << v.at(j) << ' ';
          }
}
    void SetPos(int a,double b) {
      if (a<v.size())
        {
        v.emplace( v.begin()+ a, b);
        v.erase(v.begin()+ a +1);
        } 
      else if (a == v.size())  //elif
        {
        v.push_back(b);
        } 
      else
      {
        cout<< "Error" << endl;
      }
}
    float GetPos(int c){
      return v.at(c);
}
    int GetSize(void){
      return v.size();
    }
    Vector  operator = (Vector w)
      {
        v = w.v;
        return *this;
      }

    Vector operator + (Vector w)
      { 
        if (v.size() != w.GetSize())
        {
          cout<< "Error: no se pueden sumar" << endl;
        }
        else
        {
          Vector vect(0);
          for(int j=0; j < v.size(); j=j+1){
            vect.SetPos(i,v.at(j) + w.GetPos(j));
        }
          return vect;
        }
      }
    Vector operator - (Vector w)
      { 
        if (v.size() != w.GetSize())
        {
          cout<< "Error: no se pueden restar" << endl;
        }
        else
        {
          Vector vect(0);
          for(int j=0; j < v.size(); j=j+1){
            vect.SetPos(i,v.at(j) - w.GetPos(j));
        }
          return vect;
        }
      }
       double& operator[] (int w) // sobrecarga como el mismo
      {
        return v[w];
      }
};
}


