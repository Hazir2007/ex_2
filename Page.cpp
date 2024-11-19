#include <iostream>
#include <string>
#include "Page.h"

void Page::init()
{
	_Status_ = "";
	_Posts_ = "";
}

void Page::clearPage()
{
	_Posts_ = "";
}

void Page::setStatus(std::string status)
{
	_Status_ = status;
}

void Page::addLineToPosts(std::string new_line)
{
	std::string newPost = new_line;
	_Posts_ = _Posts_ + newPost + "\n";
}

std::string Page::getPosts() const
{
	return _Posts_;
}

std::string Page::getStatus() const
{
	return _Status_;
}

