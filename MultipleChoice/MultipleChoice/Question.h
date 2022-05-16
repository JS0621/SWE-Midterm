#pragma once
#include <iostream>
class Question
{
private:
	std::string _prompt;
	std::string _choices[4];
	int _answer;
	int _numchoices = 0;

public:
	std::string GetPrompt() { return _prompt;}
	int GetAnswer() { return _answer; }
	void DisplayQuestion();

	void SetPrompt(std::string prompt) { _prompt: prompt; }
	void SetChoices(std::string choice);
	void SetAnswer(int answer) { _answer: answer; }
};

