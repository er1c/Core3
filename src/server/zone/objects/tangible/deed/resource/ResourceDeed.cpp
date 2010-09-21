/*
 *	server/zone/objects/tangible/deed/resource/ResourceDeed.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceDeed.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	ResourceDeedStub
 */

ResourceDeed::ResourceDeed() : Deed(DummyConstructorParameter::instance()) {
	_impl = new ResourceDeedImplementation();
	_impl->_setStub(this);
}

ResourceDeed::ResourceDeed(DummyConstructorParameter* param) : Deed(param) {
}

ResourceDeed::~ResourceDeed() {
}


void ResourceDeed::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ResourceDeedImplementation*) _impl)->initializeTransientMembers();
}

void ResourceDeed::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ResourceDeedImplementation*) _impl)->fillObjectMenuResponse(menuResponse, player);
}

int ResourceDeed::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceDeedImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

int ResourceDeed::useObject(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceDeedImplementation*) _impl)->useObject(player);
}

void ResourceDeed::destroyDeed() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((ResourceDeedImplementation*) _impl)->destroyDeed();
}

/*
 *	ResourceDeedImplementation
 */

ResourceDeedImplementation::ResourceDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


ResourceDeedImplementation::~ResourceDeedImplementation() {
}


void ResourceDeedImplementation::finalize() {
}

void ResourceDeedImplementation::_initializeImplementation() {
	_setClassHelper(ResourceDeedHelper::instance());

	_serializationHelperMethod();
}

void ResourceDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceDeed*) stub;
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceDeedImplementation::_getStub() {
	return _this;
}

ResourceDeedImplementation::operator const ResourceDeed*() {
	return _this;
}

void ResourceDeedImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceDeedImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceDeedImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceDeedImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceDeedImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceDeedImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceDeedImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("ResourceDeed");

}

ResourceDeedImplementation::ResourceDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/resource/ResourceDeed.idl(58):  		Logger.setLoggingName("ResourceDeed");
	Logger::setLoggingName("ResourceDeed");
}

/*
 *	ResourceDeedAdapter
 */

ResourceDeedAdapter::ResourceDeedAdapter(ResourceDeedImplementation* obj) : DeedAdapter(obj) {
}

Packet* ResourceDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		resp->insertSignedInt(useObject((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 9:
		destroyDeed();
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceDeedAdapter::initializeTransientMembers() {
	((ResourceDeedImplementation*) impl)->initializeTransientMembers();
}

int ResourceDeedAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((ResourceDeedImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

int ResourceDeedAdapter::useObject(PlayerCreature* player) {
	return ((ResourceDeedImplementation*) impl)->useObject(player);
}

void ResourceDeedAdapter::destroyDeed() {
	((ResourceDeedImplementation*) impl)->destroyDeed();
}

/*
 *	ResourceDeedHelper
 */

ResourceDeedHelper* ResourceDeedHelper::staticInitializer = ResourceDeedHelper::instance();

ResourceDeedHelper::ResourceDeedHelper() {
	className = "ResourceDeed";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceDeedHelper::finalizeHelper() {
	ResourceDeedHelper::finalize();
}

DistributedObject* ResourceDeedHelper::instantiateObject() {
	return new ResourceDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceDeedHelper::instantiateServant() {
	return new ResourceDeedImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceDeedAdapter((ResourceDeedImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

