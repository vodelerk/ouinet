#ifndef OUINET_HIDDENSERVICE_GNUNET_H
#define OUINET_HIDDENSERVICE_GNUNET_H

#include "implementation.h"

namespace ouinet {
namespace hiddenservice {

class GnunetConnection : public ConnectionImplementation
{
};

class GnunetAcceptor : public AcceptorImplementation
{
};

class GnunetService : public ServiceImplementation
{
};

class GnunetImplementation : public Implementation
{
};

} // namespace hiddenservice
} // namespace ouinet

#endif
