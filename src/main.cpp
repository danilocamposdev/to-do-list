#include "Task.hpp"
#include "TodoList.hpp"
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

	TodoList todoList;
	srand(time(NULL));

	int option = -1;
	while (option != 0) {

		todoList.print();

		std::cout << "Select an option:" << std::endl;
		std::cout << "0 - Close the program" << std::endl;
		std::cout << "1 - Add new task" << std::endl;
		std::cout << "2 - Complete a task" << std::endl;
		std::cout << "3 - Delete a task" << std::endl;

		std::cin >> option;
		std::cout << std::endl;

		switch (option) {
		case 0: {
			break;
			break;
		}
		case 1: {
			std::string title;
			std::cout << "Description title:" << std::endl;
			try {
				std::cin >> std::ws;
				getline(std::cin, title);
			} catch (...) {
				std::cin >> title;
			}
			todoList.addTask(Task(title));
			break;
		}
		case 2: {
			std::cout << "Enter an task id to mark completed" << std::endl;
			int id;
			std::cin >> id;
			Task *task = todoList.findTask((int)id);
			if (task == nullptr) {
				std::cout << "The id '" << id << "' is invalid!" << std::endl;
				break;
			}
			task->setCompleted(true);
			break;
		}
		case 3: {
			std::cout << "Enter an task id to delete" << std::endl;
			int id;
			std::cin >> id;
			bool removed = todoList.removeTask((int)id);
			if (removed == false) {
				std::cout << "The id '" << id << "' is invalid!" << std::endl;
				break;
			};
			break;
		}
		default:
			std::cout << "Invalid Option!" << std::endl;
		}

		std::cout << std::endl;
	}

	return 0;
}
