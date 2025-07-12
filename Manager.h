#pragma once
#include "Employee.h"

namespace access {
	class Manager : public Employee
	{
	public:
		void accessLevel() override;
	};
}
