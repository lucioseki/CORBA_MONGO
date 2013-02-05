#include <iostream>
#include <string>

#include "CTubeService.h"
using namespace CorbaTube;

CTubeService_i::CTubeService_i(){}
CTubeService_i::~CTubeService_i(){}
CORBA::Boolean CTubeService_i::has_key(char *key){
	return true;
}
void CTubeService_i::new_key(char *key){
	strcpy(key, "aeel");
}
