#include <iostream>
#include <string>

using namespace std;

int countWords(string str) {
	int wordCount = 0;
	bool inWord = false;

	for (char c : str) {
		if (c == ' ') {
			if (inWord) {
				wordCount++;
				inWord = false;
			}
		}
		else {
			inWord = true;
		}
	}

	if (inWord) {
		wordCount++;
	}
	return wordCount;
}

int main(){
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q");
		int numWords = countWords(input);
		cout << "Word count: " << numWords << endl;
	}
	return 0;
}