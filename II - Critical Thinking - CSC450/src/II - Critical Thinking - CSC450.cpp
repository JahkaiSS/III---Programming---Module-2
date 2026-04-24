#include <iostream>
using namespace std;

int main() {
	int count = 0;
	string firstHalf;
	string secondHalf;
	while (count < 3) {
		for (int i = 0; i < 2; i++) {

			if (i == 0) {
				cout << "Please type something and hit enter: " << endl;
				getline(cin, firstHalf);
			}
			if (i == 1) {
				cout << "Cool, now type something again and hit enter: " << endl;
				getline(cin, secondHalf);

				cout << "Here are the two combined: " << firstHalf + secondHalf << endl;
			}


		}
		count += 1;
	}

	cout << "Thanks for playing" << endl;
	return 0;
}
