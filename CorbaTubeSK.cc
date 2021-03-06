// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include "CorbaTube.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_1;



CorbaTube::TubeService_ptr CorbaTube::TubeService_Helper::_nil() {
  return ::CorbaTube::TubeService::_nil();
}

::CORBA::Boolean CorbaTube::TubeService_Helper::is_nil(::CorbaTube::TubeService_ptr p) {
  return ::CORBA::is_nil(p);

}

void CorbaTube::TubeService_Helper::release(::CorbaTube::TubeService_ptr p) {
  ::CORBA::release(p);
}

void CorbaTube::TubeService_Helper::marshalObjRef(::CorbaTube::TubeService_ptr obj, cdrStream& s) {
  ::CorbaTube::TubeService::_marshalObjRef(obj, s);
}

CorbaTube::TubeService_ptr CorbaTube::TubeService_Helper::unmarshalObjRef(cdrStream& s) {
  return ::CorbaTube::TubeService::_unmarshalObjRef(s);
}

void CorbaTube::TubeService_Helper::duplicate(::CorbaTube::TubeService_ptr obj) {
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
}

CorbaTube::TubeService_ptr
CorbaTube::TubeService::_duplicate(::CorbaTube::TubeService_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
  return obj;
}

CorbaTube::TubeService_ptr
CorbaTube::TubeService::_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


CorbaTube::TubeService_ptr
CorbaTube::TubeService::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

CorbaTube::TubeService_ptr
CorbaTube::TubeService::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_TubeService _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_TubeService* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_TubeService;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* CorbaTube::TubeService::_PD_repoId = "IDL:CorbaTube/TubeService:1.0";


CorbaTube::_objref_TubeService::~_objref_TubeService() {
  
}


CorbaTube::_objref_TubeService::_objref_TubeService(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::CorbaTube::TubeService::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
CorbaTube::_objref_TubeService::_ptrToObjRef(const char* id)
{
  if( id == ::CorbaTube::TubeService::_PD_repoId )
    return (::CorbaTube::TubeService_ptr) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::CorbaTube::TubeService::_PD_repoId) )
    return (::CorbaTube::TubeService_ptr) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  _cstring
class _0RL_cd_dbeb43a620354b5b_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_dbeb43a620354b5b_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var result;
};

void _0RL_cd_dbeb43a620354b5b_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_dbeb43a620354b5b_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

const char* const _0RL_cd_dbeb43a620354b5b_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_dbeb43a620354b5b_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_dbeb43a620354b5b_00000000* tcd = (_0RL_cd_dbeb43a620354b5b_00000000*)cd;
  CorbaTube::_impl_TubeService* impl = (CorbaTube::_impl_TubeService*) svnt->_ptrToInterface(CorbaTube::TubeService::_PD_repoId);
  tcd->result = impl->new_key();


}

char* CorbaTube::_objref_TubeService::new_key()
{
  _0RL_cd_dbeb43a620354b5b_00000000 _call_desc(_0RL_lcfn_dbeb43a620354b5b_10000000, "new_key", 8);


  _invoke(_call_desc);
  return _call_desc.result._retn();


}
CorbaTube::_pof_TubeService::~_pof_TubeService() {}


omniObjRef*
CorbaTube::_pof_TubeService::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::CorbaTube::_objref_TubeService(ior, id);
}


::CORBA::Boolean
CorbaTube::_pof_TubeService::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::CorbaTube::TubeService::_PD_repoId) )
    return 1;
  
  return 0;
}

const CorbaTube::_pof_TubeService _the_pof_CorbaTube_mTubeService;

CorbaTube::_impl_TubeService::~_impl_TubeService() {}


::CORBA::Boolean
CorbaTube::_impl_TubeService::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "new_key") ) {

    _0RL_cd_dbeb43a620354b5b_00000000 _call_desc(_0RL_lcfn_dbeb43a620354b5b_10000000, "new_key", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
CorbaTube::_impl_TubeService::_ptrToInterface(const char* id)
{
  if( id == ::CorbaTube::TubeService::_PD_repoId )
    return (::CorbaTube::_impl_TubeService*) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::CorbaTube::TubeService::_PD_repoId) )
    return (::CorbaTube::_impl_TubeService*) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
CorbaTube::_impl_TubeService::_mostDerivedRepoId()
{
  return ::CorbaTube::TubeService::_PD_repoId;
}

POA_CorbaTube::TubeService::~TubeService() {}

