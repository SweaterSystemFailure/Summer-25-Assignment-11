#pragma once
#include "User.h"

namespace access {
	class Employee: public User
	{
	public:
		void accessLevel() override;
	};
}