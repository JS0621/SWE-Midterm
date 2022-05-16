
#include <iostream>
#include "Helper.h"
#include "Question.h"

int main()
{

	Question questions[4];
	Question q1;
	q1.SetPrompt("Who was the first president?");
	q1.SetChoices("George Washington");
	q1.SetChoices("Abraham Lincoln");
	q1.SetChoices("George W. Bush");
	q1.SetChoices("Barack Obama");
	q1.SetAnswer(1);
	questions[0] = q1;

	Question q2;
	q2.SetPrompt("What class are you in currently?");
	q2.SetChoices("Systems Programming");
	q2.SetChoices("Linear Algebra");
	q2.SetChoices("Software Engineering");
	q2.SetChoices("Psychology of Play");
	q2.SetAnswer(3);
	questions[0] = q2;

	Question q3;
	q3.SetPrompt("What laptop did Full Sail give Comp Sci students?");
	q3.SetChoices("HP");
	q3.SetChoices("Alienware");
	q3.SetChoices("Razer");
	q3.SetChoices("MSI");
	q3.SetAnswer(4);
	questions[0] = q3;

	Question q4;
	q4.SetPrompt("Who is the instructor for Software Engineering?");
	q4.SetChoices("Stephen VanZandt");
	q4.SetChoices("John Fecko");
	q4.SetChoices("Jason Hinders");
	q4.SetChoices("Justin Tackett");
	q4.SetAnswer(2);
	questions[0] = q4;

	int rng = Helper::GetRandomNumber(0, 3);
	questions[rng].DisplayQuestion();
	int answer = Helper::GetValidatedInt("", 1, 4);
	if (answer == questions[rng].GetAnswer()) {
		std::cout << "You are correct!";
	}
	else {
		std::cout << "You are wrong.";
	}

}