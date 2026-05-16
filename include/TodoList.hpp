#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include "Task.hpp"
#include <list>

class TodoList {
  private:
	std::list<Task> todoList;

  public:
	TodoList();
	void print();
	void addTask(const Task &task);
	Task *findTask(int id);
	bool removeTask(int id);
};

#endif
