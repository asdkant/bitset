#include "double_bitset.h"

double_bitset::double_bitset(int num_elems){
 _iteradores.resize(num_elems);
 _presencia.resize(num_elems);
 
 for(uint num = 0 ; num < num_elems ; num++){
  list<uint>::iterator it = _falsos.insert(_falsos.end(),num);
  _iteradores[num] = it;
 }
 
 
}
