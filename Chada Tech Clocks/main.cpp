* Project One - Chada Tech Clocks
* By: Rebekah Cruz

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayMenu();
void displayClocks(int hour, int minute, int second);

string get12HourFormat(int hour, int minute, int second);
string get24HourFormat(int hour, int minute, int second);

void addOneHour(int& hour);
void addOneMinute(int& hour, int& minute);
void addOneSecond(int& hour, int& minute, int& second);

int main() {
	int hour = 0;
	int minute = 0;
	int second = 0;
	int userChoice = 0;

	cout << "Enter hour: ";
	cin >> hour;
	
	while (hour < 0 || hour > 23) {
		cout << "Invalid hour. Please enter a value between 0 and 23: ";
		cin >> hour;
	}

	cout << "Enter minute: ";
	cin >> minute;

	while (minute < 0 || minute > 59) {
		cout << "Invalid minute. Please enter a value between 0 and 59: ";
		cin >> minute;
	}

	cout << "Enter second: ";
	cin >> second;

	while (second < 0 || second > 59) {
		cout << "Invalid second. Please enter a value between 0 and 59: ";
		cin >> second;
	}

	while (userChoice != 4) {
		displayClocks(hour, minute, second);
		displayMenu();

		cin >> userChoice;

		if (userChoice == 1) {
			addOneHour(hour);
		}
		else if (userChoice == 2) {
			addOneMinute(hour, minute);
		}
		else if (userChoice == 3) {
			addOneSecond(hour, minute, second);
		}
		else if (userChoice == 4) {
			cout << "Program ended :)" << endl;
		}
		else {
			cout << "Invalid option. Please enter 1, 2, 3, or 4." << endl;
		}
	}
	return 0;
}
// Displays the menu options
void displayMenu() {

	cout << endl;
	cout << "+============================+" << endl;
	cout << "|        MENU OPTIONS        |" << endl;
	cout << "+============================+" << endl;
	cout << "|                            |" << endl;
	cout << "|     1. Add One Hour        |" << endl;
	cout << "|     2. Add One Minute      |" << endl;
	cout << "|     3. Add One Second      |" << endl;
	cout << "|     4. Exit Program        |" << endl;
	cout << "|                            |" << endl;
	cout << "+============================+" << endl;

	cout << "Please choose your selection: ";
}
// Formats the time into a 24-hour clock
string get24HourFormat(int hour, int minute, int second) {
	string formattedTime;
	
	formattedTime =
		(hour < 10 ? "0" : "") + to_string(hour) + ":" +
		(minute < 10 ? "0" : "") + to_string(minute) + ":" +
		(second < 10 ? "0" : "") + to_string(second);

	return formattedTime;
}
// Formats the time into a 12-hour clock
string get12HourFormat(int hour, int minute, int second) {
	string period = "AM";
	if (hour >= 12) {
		period = "PM";
	}

	int twelveHour = hour;
	if (twelveHour == 0) {
		twelveHour = 12;
	}
	else if (twelveHour > 12) {
		twelveHour = twelveHour - 12;
	}

	string formattedTime;

	formattedTime =
		(twelveHour < 10 ? "0" : "") + to_string(twelveHour) + ":" +
		(minute < 10 ? "0" : "") + to_string(minute) + ":" +
		(second < 10 ? "0" : "") + to_string(second) +
		" " + period;

	return formattedTime;
}
// Displays both clocks side-by-side
void displayClocks(int hour, int minute, int second) {

	string twelveHourClock = get12HourFormat(hour, minute, second);
	string twentyFourHourClock = get24HourFormat(hour, minute, second);

	cout << endl;

	cout << "+============================+   +============================+" << endl;
	cout << "|        12-Hour Clock       |   |        24-Hour Clock       |" << endl;
	cout << "+============================+   +============================+" << endl;

	cout << "|        " << twelveHourClock;

	if (twelveHourClock.length() < 11) {
		cout << " ";
	}

	cout << "         |";

	cout << "   |        " << twentyFourHourClock << "            |" << endl;

	cout << "+============================+   +============================+" << endl;
}
// Adds one hour to both clocks
void addOneHour(int& hour) {

	hour = hour + 1;

	if (hour > 23) {
		hour = 0;
	}
}
// Adds a minute to both clocks
void addOneMinute(int& hour, int& minute) {

	minute = minute + 1;

	if (minute > 59) {
		minute = 0;
		addOneHour(hour);
	}
}
// Adds a second to both clocks
void addOneSecond(int& hour, int& minute, int& second) {
	second = second + 1;

	if (second > 59) {
		second = 0;
		addOneMinute(hour, minute);
	}
}
