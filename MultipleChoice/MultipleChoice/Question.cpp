#include "Question.h"

void Question::DisplayQuestion()
{
	std::cout << _prompt << std::endl;
	for (int i = 0; i < 4; ++i) {
		std::cout << i+1 << ". " << _choices[i] << std::endl;
	}
}

void Question::SetChoices(std::string choice)
{
	_choices[_numchoices] = choice;
	++_numchoices;
}
