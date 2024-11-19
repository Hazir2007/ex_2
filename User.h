#pragma once
#include "DeviceList.h"

class User
{
private:
	unsigned int _Id_;
	unsigned int _Age_;
	unsigned int _DevicesOn_;
	unsigned int _UserDevices_;

	std::string _UserName_;

	DevicesList _MyDevices_;



public:
	void init(unsigned int id, std::string username, unsigned int age);
	void addDevice(Device newDevice);
	void clear();

	unsigned int getAge() const;
	unsigned int getID() const;

	std::string getUserName() const;
	DevicesList& getDevices();
	
	bool checkIfDevicesAreOn();
};