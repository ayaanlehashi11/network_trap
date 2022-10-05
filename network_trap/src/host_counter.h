/*
 * host_counter.h
 *
 *  Created on: Oct 5, 2022
 *      Author: ayaanle
 */

#ifndef HOST_COUNTER_H_
#define HOST_COUNTER_H_
#include <vector>
#include <memory>
template <class GateWay_ID , class Listing> class Host_Counter{
public:
	Host_Counter(GateWay_ID);
	~Host_Counter(GateWay_ID);
	Host_Counter(GateWay_ID , int , std::string);
	virtual ~Host_Counter(GateWay_ID , int , std::string);
	constexpr int getSomeHosts()noexcept;
	Host_Counter& operator[](Host_Counter);
	Host_Counter& operator++(Host_Counter &);
};



#endif /* HOST_COUNTER_H_ */
