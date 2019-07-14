
#include <iostream>
using namespace std;
void main ()
{
	int Score ;
	cout << "Enter Your Score : " << endl;
	cin >> Score ;

	if ((Score >= 0) && (Score <= 100))
	{
		if ((Score >= 0) && (Score <= 59))
		{
			cout << "Grade F" << endl;
			cout << "Oh No!!!" << endl;
		}
	
		else if ((Score >= 60) && (Score <= 69))
		{
			cout << "Grade D" << endl;
			cout << "That's Ok but not enough" << endl;
		}

		else if ((Score >= 70) && (Score <= 79))
		{
			cout << "Grade C" << endl;
			cout << "You're pretty good!!" << endl;
		}

		else if ((Score >= 80) && (Score <= 89))
		{
			cout << "Grade B" << endl;
			cout << "You're Very Good!!!" << endl;
		}

		else if ((Score >= 90) && (Score <= 100))
		{
			cout << "Grade A" << endl;
			cout << "You're really Excellent" << endl;
		}
	}

}