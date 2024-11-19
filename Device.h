#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
														 //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////


class Device
{
private:
	DeviceType _Type_;
	unsigned int _Id_;
	std::string _Os_;
	bool _State_ = false;

public:
	void init(unsigned int id, DeviceType type, std::string os);
	bool isActive() const;
	void activate();
	void deactivate();
	unsigned int getID() const;
	DeviceType getType() const;
	std::string getOS() const;

	

	

	
};