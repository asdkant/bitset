#ifndef DOUBLE_BITSET_H
#define DOUBLE_BITSET_H

// #include <sstream>  // for istringstream
// #include <iostream>  // for cin
// #include <string>
#include <vector>
#include <list>
#include <boost/dynamic_bitset.hpp>

class double_bitset
{
public:
 double_bitset(uint num_elems);
 void set(uint valor);
 void unset (uint valor);
 bool ask(uint valor);
 
private:
 std::list<uint> _falsos;
 std::list<uint> _verdaderos;
 boost::dynamic_bitset<> _presencia;
 std::vector<std::list<uint>::iterator> _iteradores;
 
};

#endif // DOUBLE_BITSET_H
