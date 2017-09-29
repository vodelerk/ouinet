#ifndef OUINET_CACHE_H
#define OUINET_CACHE_H

#include <vector>

#include "cache/implementation.h"
#include "cache/implementations.h"

namespace ouinet {

class Cache
{
	// HiddenService(name)
	
	// retrieve(url)
		// fetches from first successful implementation
	// store(url, data)
		// in all implementations
	// seed(url, signed-data)
		// in all implementations
	// unseed(url)
		// in all implementations
	// availability(url)
		// ???
	
	
	
	protected:
	std::vector<cache::CacheImplementation*> m_implementations;
};

} // namespace ouinet

#endif
