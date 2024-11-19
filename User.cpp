#include <iostream>
#include <string>

#include "User.h"
#include "DeviceList.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
	_Id_ = id;
	_UserName_ = username;
	_Age_ = age;
}

void User::addDevice(Device newDevice)
{
	_MyDevices_.add(newDevice);
	_UserDevices_ += 1;
}

void User::clear()
{
	_MyDevices_.clear();
}

unsigned int User::getAge() const
{
	return _Age_;
}

unsigned int User::getID() const
{
	return _Id_;
}

std::string User::getUserName() const
{
	return _UserName_;
}

DevicesList& User::getDevices()
{
    return _MyDevices_;
}

bool User::checkIfDevicesAreOn()
{
    DeviceNode* current = _MyDevices_.get_first();

    while (current != nullptr)
    {
        Device& deviceData = current->get_data(); 
        bool isActive = deviceData.isActive();
        if (isActive == false)
        {
            return false;  
        }
        current = current->get_next(); 
    }

    return true;  
}