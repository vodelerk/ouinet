#ifndef OUINET_HIDDENSERVICE_IMPLEMENTATION_H
#define OUINET_HIDDENSERVICE_IMPLEMENTATION_H

namespace ouinet {
namespace hiddenservice {

class ConnectionImplementation
{
	// abstract class
	// connect()
	// read()
	// write()
	// close()
};

class AcceptorImplementation
{
	// abstract class
	// ConnectionImplementation accept()
};

class ServiceImplementation
{
	// abstract class
	// start()
	// stop()
	// AcceptorImplementation listen()
	// ConnectionImplementation connect()
};

class Implementation
{
	// abstract class
	//
	// ServiceImplementation join(name)
};

} // namespace hiddenservice
} // namespace ouinet

#endif
