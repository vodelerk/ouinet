#ifndef OUINET_HIDDENSERVICE_H
#define OUINET_HIDDENSERVICE_H

#include <vector>

#include "hiddenservice/implementation.h"
#include "hiddenservice/implementations.h"

namespace ouinet {

class HiddenServiceConnection
{
	// read
	// write
	// close
};

class HiddenServiceAcceptor
{
	// HiddenServiceConnection accept()
};

class HiddenService
{
	// HiddenService(name)
	
	// start()
	// stop()
	
	// HiddenServiceConnection connect()
		// connects via the first successful implementation
	// HiddenServiceAcceptor listen()
		// listens on all implementations simultaneously
	
	
	
	protected:
	std::vector<hiddenservice::ServiceImplementation*> m_implementations;
};

} // namespace ouinet

#endif
