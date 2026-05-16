#include "TodoList.hpp"
#include "Task.hpp"
#include <iostream>
#include <list>

TodoList::TodoList() { todoList.clear(); }
void TodoList::print() {
	std::cout << "------ TO DO LIST ------" << std::endl;

	if (todoList.empty()) {
		std::cout << "Add your first task!" << std::endl;
	} else {
		for (Task &t : todoList) {
			std::string completed = t.isCompleted() ? "done" : "not done";
			std::cout << "Id: " << t.getId() << " | "
					  << "Description: " << t.getDescription() << " | "
					  << "Status: " << completed << std::endl;
		}
	}
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;
}
void TodoList::addTask(const Task &task) { todoList.push_back(task); }
Task *TodoList::findTask(int id) {
	for (Task &t : todoList) {
		if (t.getId() == id)
			return &t;
	}
	return nullptr;
}
bool TodoList::removeTask(int id) {
	size_t totalBefore = todoList.size();
	todoList.remove_if([id](Task &t) { return t.getId() == id; });
	return todoList.size() < totalBefore;
}
