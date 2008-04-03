/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/tangible/TangibleObject.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../../Zone.h"

#include "TangibleObject.h"

#include "TangibleObjectImplementation.h"

/*
 *	TangibleObjectStub
 */

TangibleObject::TangibleObject() : SceneObject(NULL) {
}

TangibleObject::TangibleObject(ORBObjectServant* obj) : SceneObject(obj) {
}

TangibleObject::TangibleObject(TangibleObject& ref) : SceneObject(ref) {
}

TangibleObject::~TangibleObject() {
}

TangibleObject* TangibleObject::clone() {
	return new TangibleObject(*this);
}


void TangibleObject::insertToZone(Zone* zone) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(zone);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->insertToZone(zone);
}

void TangibleObject::removeFromZone() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->removeFromZone();
}

void TangibleObject::close(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->close(player);
}

void TangibleObject::setEquipped(bool eqp) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addBooleanParameter(eqp);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setEquipped(eqp);
}

void TangibleObject::setContainer(SceneObject* cont, unsigned int type) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addObjectParameter(cont);
		invocation.addUnsignedIntParameter(type);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setContainer(cont, type);
}

void TangibleObject::sendTo(Player* player, bool doClose) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addObjectParameter(player);
		invocation.addBooleanParameter(doClose);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->sendTo(player, doClose);
}

void TangibleObject::repairItem(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->repairItem(player);
}

void TangibleObject::decay(int decayRate) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);
		invocation.addSignedIntParameter(decayRate);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->decay(decayRate);
}

bool TangibleObject::isPersistent() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isPersistent();
}

bool TangibleObject::isUpdated() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isUpdated();
}

bool TangibleObject::isEquipped() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isEquipped();
}

bool TangibleObject::isWeapon() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isWeapon();
}

bool TangibleObject::isArmor() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isArmor();
}

bool TangibleObject::isClothing() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isClothing();
}

bool TangibleObject::isInstrument() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isInstrument();
}

bool TangibleObject::isAttachment() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isAttachment();
}

bool TangibleObject::isResource() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isResource();
}

bool TangibleObject::isTicket() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 23);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isTicket();
}

bool TangibleObject::isTicketCollector() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 24);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isTicketCollector();
}

bool TangibleObject::isSurveyTool() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 25);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isSurveyTool();
}

bool TangibleObject::isLair() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 26);

		return invocation.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isLair();
}

void TangibleObject::setName(const string& n) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 27);
		invocation.addAsciiParameter(n);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setName(n);
}

void TangibleObject::setTemplateName(const string& tempName) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 28);
		invocation.addAsciiParameter(tempName);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setTemplateName(tempName);
}

void TangibleObject::setTemplateTypeName(const string& tempTypeName) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 29);
		invocation.addAsciiParameter(tempTypeName);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setTemplateTypeName(tempTypeName);
}

void TangibleObject::setPersistent(bool pers) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 30);
		invocation.addBooleanParameter(pers);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setPersistent(pers);
}

void TangibleObject::setUpdated(bool upd) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 31);
		invocation.addBooleanParameter(upd);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setUpdated(upd);
}

void TangibleObject::setConditionDamage(int damage) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 32);
		invocation.addSignedIntParameter(damage);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setConditionDamage(damage);
}

void TangibleObject::setCustomizationString(string& cust) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 33);
		invocation.addAsciiParameter(cust);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCustomizationString(cust);
}

void TangibleObject::setCustomizationVariable(unsigned char type, unsigned int value) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 34);
		invocation.addUnsignedCharParameter(type);
		invocation.addUnsignedIntParameter(value);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCustomizationVariable(type, value);
}

SceneObject* TangibleObject::getContainer() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 35);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getContainer();
}

unicode& TangibleObject::getName() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 36);

		invocation.executeWithUnicodeReturn(_return_getName);
		return _return_getName;
	} else
		return ((TangibleObjectImplementation*) _impl)->getName();
}

string& TangibleObject::getTemplateName() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 37);

		invocation.executeWithAsciiReturn(_return_getTemplateName);
		return _return_getTemplateName;
	} else
		return ((TangibleObjectImplementation*) _impl)->getTemplateName();
}

string& TangibleObject::getTemplateTypeName() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 38);

		invocation.executeWithAsciiReturn(_return_getTemplateTypeName);
		return _return_getTemplateTypeName;
	} else
		return ((TangibleObjectImplementation*) _impl)->getTemplateTypeName();
}

void TangibleObject::getCustomizationString(string& appearance) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 39);
		invocation.addAsciiParameter(appearance);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->getCustomizationString(appearance);
}

int TangibleObject::getObjectSubType() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 40);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getObjectSubType();
}

unsigned int TangibleObject::getTemplateID() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 41);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getTemplateID();
}

int TangibleObject::getObjectCount() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 42);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getObjectCount();
}

int TangibleObject::getConditionDamage() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 43);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getConditionDamage();
}

int TangibleObject::getMaxCondition() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 44);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getMaxCondition();
}

int TangibleObject::getCondition() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 45);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getCondition();
}

void TangibleObject::setAttributes(string& attributestring) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 46);
		invocation.addAsciiParameter(attributestring);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setAttributes(attributestring);
}

string& TangibleObject::getAttributes() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 47);

		invocation.executeWithAsciiReturn(_return_getAttributes);
		return _return_getAttributes;
	} else
		return ((TangibleObjectImplementation*) _impl)->getAttributes();
}

void TangibleObject::addAttributes(AttributeListMessage* alm) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 48);
		invocation.addObjectParameter(alm);

		invocation.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->addAttributes(alm);
}

/*
 *	TangibleObjectAdapter
 */

TangibleObjectAdapter::TangibleObjectAdapter(TangibleObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* TangibleObjectAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 7:
		removeFromZone();
		break;
	case 8:
		close((Player*) inv->getObjectParameter());
		break;
	case 9:
		setEquipped(inv->getBooleanParameter());
		break;
	case 10:
		setContainer((SceneObject*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 11:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 12:
		repairItem((Player*) inv->getObjectParameter());
		break;
	case 13:
		decay(inv->getSignedIntParameter());
		break;
	case 14:
		resp->insertBoolean(isPersistent());
		break;
	case 15:
		resp->insertBoolean(isUpdated());
		break;
	case 16:
		resp->insertBoolean(isEquipped());
		break;
	case 17:
		resp->insertBoolean(isWeapon());
		break;
	case 18:
		resp->insertBoolean(isArmor());
		break;
	case 19:
		resp->insertBoolean(isClothing());
		break;
	case 20:
		resp->insertBoolean(isInstrument());
		break;
	case 21:
		resp->insertBoolean(isAttachment());
		break;
	case 22:
		resp->insertBoolean(isResource());
		break;
	case 23:
		resp->insertBoolean(isTicket());
		break;
	case 24:
		resp->insertBoolean(isTicketCollector());
		break;
	case 25:
		resp->insertBoolean(isSurveyTool());
		break;
	case 26:
		resp->insertBoolean(isLair());
		break;
	case 27:
		setName(inv->getAsciiParameter(_param0_setName__string_));
		break;
	case 28:
		setTemplateName(inv->getAsciiParameter(_param0_setTemplateName__string_));
		break;
	case 29:
		setTemplateTypeName(inv->getAsciiParameter(_param0_setTemplateTypeName__string_));
		break;
	case 30:
		setPersistent(inv->getBooleanParameter());
		break;
	case 31:
		setUpdated(inv->getBooleanParameter());
		break;
	case 32:
		setConditionDamage(inv->getSignedIntParameter());
		break;
	case 33:
		setCustomizationString(inv->getAsciiParameter(_param0_setCustomizationString__string_));
		break;
	case 34:
		setCustomizationVariable(inv->getUnsignedCharParameter(), inv->getUnsignedIntParameter());
		break;
	case 35:
		resp->insertLong(getContainer()->_getORBObjectID());
		break;
	case 36:
		resp->insertUnicode(getName());
		break;
	case 37:
		resp->insertAscii(getTemplateName());
		break;
	case 38:
		resp->insertAscii(getTemplateTypeName());
		break;
	case 39:
		getCustomizationString(inv->getAsciiParameter(_param0_getCustomizationString__string_));
		break;
	case 40:
		resp->insertSignedInt(getObjectSubType());
		break;
	case 41:
		resp->insertInt(getTemplateID());
		break;
	case 42:
		resp->insertSignedInt(getObjectCount());
		break;
	case 43:
		resp->insertSignedInt(getConditionDamage());
		break;
	case 44:
		resp->insertSignedInt(getMaxCondition());
		break;
	case 45:
		resp->insertSignedInt(getCondition());
		break;
	case 46:
		setAttributes(inv->getAsciiParameter(_param0_setAttributes__string_));
		break;
	case 47:
		resp->insertAscii(getAttributes());
		break;
	case 48:
		addAttributes((AttributeListMessage*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TangibleObjectAdapter::insertToZone(Zone* zone) {
	return ((TangibleObjectImplementation*) impl)->insertToZone(zone);
}

void TangibleObjectAdapter::removeFromZone() {
	return ((TangibleObjectImplementation*) impl)->removeFromZone();
}

void TangibleObjectAdapter::close(Player* player) {
	return ((TangibleObjectImplementation*) impl)->close(player);
}

void TangibleObjectAdapter::setEquipped(bool eqp) {
	return ((TangibleObjectImplementation*) impl)->setEquipped(eqp);
}

void TangibleObjectAdapter::setContainer(SceneObject* cont, unsigned int type) {
	return ((TangibleObjectImplementation*) impl)->setContainer(cont, type);
}

void TangibleObjectAdapter::sendTo(Player* player, bool doClose) {
	return ((TangibleObjectImplementation*) impl)->sendTo(player, doClose);
}

void TangibleObjectAdapter::repairItem(Player* player) {
	return ((TangibleObjectImplementation*) impl)->repairItem(player);
}

void TangibleObjectAdapter::decay(int decayRate) {
	return ((TangibleObjectImplementation*) impl)->decay(decayRate);
}

bool TangibleObjectAdapter::isPersistent() {
	return ((TangibleObjectImplementation*) impl)->isPersistent();
}

bool TangibleObjectAdapter::isUpdated() {
	return ((TangibleObjectImplementation*) impl)->isUpdated();
}

bool TangibleObjectAdapter::isEquipped() {
	return ((TangibleObjectImplementation*) impl)->isEquipped();
}

bool TangibleObjectAdapter::isWeapon() {
	return ((TangibleObjectImplementation*) impl)->isWeapon();
}

bool TangibleObjectAdapter::isArmor() {
	return ((TangibleObjectImplementation*) impl)->isArmor();
}

bool TangibleObjectAdapter::isClothing() {
	return ((TangibleObjectImplementation*) impl)->isClothing();
}

bool TangibleObjectAdapter::isInstrument() {
	return ((TangibleObjectImplementation*) impl)->isInstrument();
}

bool TangibleObjectAdapter::isAttachment() {
	return ((TangibleObjectImplementation*) impl)->isAttachment();
}

bool TangibleObjectAdapter::isResource() {
	return ((TangibleObjectImplementation*) impl)->isResource();
}

bool TangibleObjectAdapter::isTicket() {
	return ((TangibleObjectImplementation*) impl)->isTicket();
}

bool TangibleObjectAdapter::isTicketCollector() {
	return ((TangibleObjectImplementation*) impl)->isTicketCollector();
}

bool TangibleObjectAdapter::isSurveyTool() {
	return ((TangibleObjectImplementation*) impl)->isSurveyTool();
}

bool TangibleObjectAdapter::isLair() {
	return ((TangibleObjectImplementation*) impl)->isLair();
}

void TangibleObjectAdapter::setName(const string& n) {
	return ((TangibleObjectImplementation*) impl)->setName(n);
}

void TangibleObjectAdapter::setTemplateName(const string& tempName) {
	return ((TangibleObjectImplementation*) impl)->setTemplateName(tempName);
}

void TangibleObjectAdapter::setTemplateTypeName(const string& tempTypeName) {
	return ((TangibleObjectImplementation*) impl)->setTemplateTypeName(tempTypeName);
}

void TangibleObjectAdapter::setPersistent(bool pers) {
	return ((TangibleObjectImplementation*) impl)->setPersistent(pers);
}

void TangibleObjectAdapter::setUpdated(bool upd) {
	return ((TangibleObjectImplementation*) impl)->setUpdated(upd);
}

void TangibleObjectAdapter::setConditionDamage(int damage) {
	return ((TangibleObjectImplementation*) impl)->setConditionDamage(damage);
}

void TangibleObjectAdapter::setCustomizationString(string& cust) {
	return ((TangibleObjectImplementation*) impl)->setCustomizationString(cust);
}

void TangibleObjectAdapter::setCustomizationVariable(unsigned char type, unsigned int value) {
	return ((TangibleObjectImplementation*) impl)->setCustomizationVariable(type, value);
}

SceneObject* TangibleObjectAdapter::getContainer() {
	return ((TangibleObjectImplementation*) impl)->getContainer();
}

unicode& TangibleObjectAdapter::getName() {
	return ((TangibleObjectImplementation*) impl)->getName();
}

string& TangibleObjectAdapter::getTemplateName() {
	return ((TangibleObjectImplementation*) impl)->getTemplateName();
}

string& TangibleObjectAdapter::getTemplateTypeName() {
	return ((TangibleObjectImplementation*) impl)->getTemplateTypeName();
}

void TangibleObjectAdapter::getCustomizationString(string& appearance) {
	return ((TangibleObjectImplementation*) impl)->getCustomizationString(appearance);
}

int TangibleObjectAdapter::getObjectSubType() {
	return ((TangibleObjectImplementation*) impl)->getObjectSubType();
}

unsigned int TangibleObjectAdapter::getTemplateID() {
	return ((TangibleObjectImplementation*) impl)->getTemplateID();
}

int TangibleObjectAdapter::getObjectCount() {
	return ((TangibleObjectImplementation*) impl)->getObjectCount();
}

int TangibleObjectAdapter::getConditionDamage() {
	return ((TangibleObjectImplementation*) impl)->getConditionDamage();
}

int TangibleObjectAdapter::getMaxCondition() {
	return ((TangibleObjectImplementation*) impl)->getMaxCondition();
}

int TangibleObjectAdapter::getCondition() {
	return ((TangibleObjectImplementation*) impl)->getCondition();
}

void TangibleObjectAdapter::setAttributes(string& attributestring) {
	return ((TangibleObjectImplementation*) impl)->setAttributes(attributestring);
}

string& TangibleObjectAdapter::getAttributes() {
	return ((TangibleObjectImplementation*) impl)->getAttributes();
}

void TangibleObjectAdapter::addAttributes(AttributeListMessage* alm) {
	return ((TangibleObjectImplementation*) impl)->addAttributes(alm);
}

/*
 *	TangibleObjectHelper
 */

TangibleObjectHelper::TangibleObjectHelper() {
	className = "TangibleObject";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void TangibleObjectHelper::finalizeHelper() {
	TangibleObjectHelper::finalize();
}

ORBObject* TangibleObjectHelper::instantiateObject() {
	return new TangibleObject();
}

ORBObjectAdapter* TangibleObjectHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new TangibleObjectAdapter((TangibleObjectImplementation*) obj);

	ORBObjectStub* stub = new TangibleObject(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	TangibleObjectServant
 */

TangibleObjectServant::TangibleObjectServant() : SceneObjectImplementation() {
	_classHelper = TangibleObjectHelper::instance();
}

TangibleObjectServant::TangibleObjectServant(unsigned long long oid) : SceneObjectImplementation(oid) {
	_classHelper = TangibleObjectHelper::instance();
}

TangibleObjectServant::~TangibleObjectServant() {
}

void TangibleObjectServant::_setStub(ORBObjectStub* stub) {
	_this = (TangibleObject*) stub;
	SceneObjectServant::_setStub(stub);
}

ORBObjectStub* TangibleObjectServant::_getStub() {
	return _this;
}

