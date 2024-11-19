#include <iostream>
#include <string>

#include "Device.h"

void Device::init(unsigned int id,DeviceType type,std::string os)
{
	_Id_ = id;
	_Type_ = type;
	_Os_ = os;
	_State_ = true;
}
bool Device::isActive() const
{
	return _State_;
}

void Device::activate()
{
	_State_ = true;
}

void Device::deactivate()
{
	_State_ = false;
}

DeviceType Device::getType() const
{
	return _Type_;
}

std::string Device::getOS() const
{
	return _Os_;
}