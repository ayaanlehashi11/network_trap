//============================================================================
// Name        : network_trap.cpp
// Author      : Ayanle
// Version     :
// Copyright   : Your copyright notice
// Description : Hthis project is intended as a conjuction with other project called ProjectX
//============================================================================


#include <iostream>
#include <boost/asio.hpp>
#include <boost/filesystem.hpp>
#include <map>

namespace Connections{
  template <typename IPV4 , typename IPV6> struct Net{
  public:
	  Net(IPV4);//normal constructor
	  Net(IPV4 &); //copy constructor
	  ~Net();
  public:
	  double _Bandwidth;
	  volatile double _Signal_Strength;

  };

}
int main() {
	std::cout << "this project is about to start" << std::endl; // prints !!!Hello World!!!
	return 0;
}

