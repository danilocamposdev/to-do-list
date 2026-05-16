#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class Task {
  private:
	int id;
	std::string description;
	bool completed;

  public:
	Task(std::string newDescription); // Só o protótipo do construtor
	~Task() = default;

	int getId();
	std::string getDescription();
	bool isCompleted();
	void setCompleted(bool newCompleted);
};

#endif
