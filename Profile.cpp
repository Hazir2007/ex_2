#include <iostream>
#include <string>
#include "Profile.h"
#include "UserList.h"
#include "Page.h"
#include "User.h"

void Profile::init(User owner)
{
    _Owner_ = owner;
    _Page_.init();
}

void Profile::clear()
{
    _MyFriends_.clear();
}

User Profile::getOwner() const
{
    return _Owner_;
}

void Profile::setStatus(std::string new_status)
{
    _Page_.setStatus(new_status);
}

void Profile::addPostToProfilePage(std::string post)
{
    _Page_.addLineToPosts(post);
}

void Profile::addFriend(User friend_to_add)
{
    _MyFriends_.add(friend_to_add);
}

std::string Profile::getPage() const
{
    return "Status: " + _Page_.getStatus() + "\n*******\n*******\n" + _Page_.getPosts();
}

std::string Profile::getFriends() const
{
    UserNode* current = _MyFriends_.get_first();
    std::string friends;

    while (current != nullptr)
    {
        User userData = current->get_data();
        friends += userData.getUserName();
        current = current->get_next();

        if (current != nullptr)
        {
            friends += ",";
        }
    }

    return friends;
}



std::string Profile::getFriendsWithSameNameLength() const
{
    UserNode* current = _MyFriends_.get_first();
    std::string userName = _Owner_.getUserName();
    std::string friendsWithSameLen = "";

    while (current != nullptr)
    {
        User userData = current->get_data();
        std::string tempName = userData.getUserName();
        if (tempName.length() == userName.length())
        {
            if (!friendsWithSameLen.empty())
            {
                friendsWithSameLen += ",";
            }
            friendsWithSameLen += tempName;
        }
        current = current->get_next();
    }

    return friendsWithSameLen;
}