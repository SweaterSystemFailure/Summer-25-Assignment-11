#include <iostream>
#include <memory>
#include "User.h"
#include "Employee.h"
#include "Manager.h"
#include "Utilities.h"

namespace access {
	void menu() {
		std::unique_ptr<User> user = std::make_unique<User>();
		bool exit = false;

		while (!exit) {
			std::cout << std::endl << "Select Access Level" << std::endl;
			std::cout << "1. User Access" << std::endl;
			std::cout << "2. Employee Access" << std::endl;
			std::cout << "3. Mananger Access" << std::endl;
			std::cout << "4. Exit" << std::endl;

			switch (numericValidator("Your selection: ", 1, 4)) {
			case 1:
				user = std::make_unique<User>();
				break;
			case 2:
				user = std::make_unique<Employee>();
				break;
			case 3:
				user = std::make_unique<Manager>();
				break;
			case 4:
				exit = true;
				break;
			default:
				std::cout << "Invalid selection." << std::endl;
			}
			user->accessLevel();
		}
	}
}