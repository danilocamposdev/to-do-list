#include "Task.hpp"
#include <cstdlib>

Task::Task(std::string newDescription) {
	id = rand() % 100 + 1;
	description = newDescription;
	completed = false;
}

int Task::getId() { return id; }

std::string Task::getDescription() { return description; }

bool Task::isCompleted() { return completed; }

void Task::setCompleted(bool newCompleted) { completed = newCompleted; }
