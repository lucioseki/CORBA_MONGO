#include "CorbaTube.hh"

class CTubeService_i : public POA_CorbaTube::TubeService,
public PortableServer::RefCountServantBase
{
	public:
		CTubeService_i();
		virtual ~CTubeService_i();
		virtual CORBA::Boolean has_key(char *key);
		virtual void new_key(char *key);
};
