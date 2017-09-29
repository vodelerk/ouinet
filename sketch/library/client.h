#ifndef OUINET_CLIENT_H
#define OUINET_CLIENT_H

#include "hiddenservice.h"

namespace ouinet {

class Client
{
	// Client(ResolutionPolicy policy)
	
	// Request dispatch(HttpRequest request)
	
	
	protected:
	HiddenService m_proxyService;
	HiddenService m_seederService;
	// Each Cache object has a different public key. Do we use more than one?
	Cache m_cache;
};

} // namespace ouinet

#endif
