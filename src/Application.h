#pragma once

#include "SortedLL.h"
#include "Client.h"

class Application
{
public:

	void run();

private:

	SortedLL<Client> userList;
	Client* curUser;
};