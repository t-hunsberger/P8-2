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
	string testString1 = "Hello, World";
	string testString2 = "This is a test string.";
	string testString3 = "    Spaces before and after    ";

	cout << "Number of words in testString1: " << countWords(testString1) << endl;
	cout << "Number of words in testString2: " << countWords(testString2) << endl;
	cout << "Number of words in testString3: " << countWords(testString3) << endl;
}