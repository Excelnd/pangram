// pangrams.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string isPangram(string &sentence) {
	transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
	bool c[26];
	for (int i = 0; i < sentence.size(); i++) {
		if (isalpha(sentence[i])) {
			c[sentence[i] - 'a'] = true;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (!c[i]) return "not pangram";
	}
	return "pangram";
}

int main()
{
	string sentence;
	getline(cin, sentence);
	cout << isPangram(sentence);

    return 0;
}

