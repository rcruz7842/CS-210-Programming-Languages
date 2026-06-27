#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>
#include <limits>
#include "GroceryItem.h"

using namespace std;

vector<GroceryItem> LoadItemsFromFile();
GroceryItem* FindItem(vector<GroceryItem>& groceryItems, string itemName);
void CreateBackupFile(vector<GroceryItem>& groceryItems);
void DisplayMenu();

int main() {
	vector<GroceryItem> groceryItems;
	int userChoice = 0;

	cout << "Corner Grocer Item Tracker" << endl;

	try {
		groceryItems = LoadItemsFromFile();
		CreateBackupFile(groceryItems);
		
		while (userChoice != 4) {
			DisplayMenu();
			if (!(cin >> userChoice)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Please enter a number from 1 to 4." << endl;
				userChoice = 0;
				continue;
			}

			if (userChoice == 1) {
				string itemName;

				groceryItems = LoadItemsFromFile();

				cout << "Enter item name: ";
				cin >> itemName;

				GroceryItem* foundItem = FindItem(groceryItems, itemName);

				if (foundItem != nullptr) {
					cout << itemName << " purchased: "
						<< foundItem->GetQuantity() << " times." << endl;
				}
				else {
					cout << itemName << " was not found." << endl;
				}
			}
			else if (userChoice == 2) {
				groceryItems = LoadItemsFromFile();

				cout << endl;

				for (int i = 0; i < groceryItems.size(); ++i) {
					cout << groceryItems.at(i).GetItemName() << " "
						<< groceryItems.at(i).GetQuantity() << endl;
				}
			}
			else if (userChoice == 3) {
				groceryItems = LoadItemsFromFile();

				cout << endl;

				for (int i = 0; i < groceryItems.size(); ++i) {
					cout << groceryItems.at(i).GetItemName() << " ";

					for (int j = 0; j < groceryItems.at(i).GetQuantity(); ++j) {
						cout << "*";
					}

					cout << endl;
				}
			}
			else if (userChoice == 4) {
				cout << "Exiting program." << endl;
			}
			else {
				cout << "Please enter a number from 1 to 4." << endl;
			}
		}
	}
	catch (runtime_error& excpt) {
		cout << excpt.what() << endl;
	}

	return 0;
}

// Read the file and count each item
vector<GroceryItem> LoadItemsFromFile() {
	vector<GroceryItem> groceryItems;
	ifstream inputFile("CS210_Project_Three_Input_File.txt");
	string itemName;

	if (!inputFile.is_open()) {
		throw runtime_error("Input file could not be opened.");
	}

	while (inputFile >> itemName) {
		GroceryItem* foundItem = FindItem(groceryItems, itemName);

		if (foundItem == nullptr) {
			groceryItems.push_back(GroceryItem(itemName, 1));
		}
		else {
			foundItem->IncrementQuantity();
		}
	}

	inputFile.close();

	return groceryItems;
} // End of LoadItemsFromFile()

// Look through the vector and return a pointer if the item is already there
GroceryItem* FindItem(vector<GroceryItem>& groceryItems, string itemName) {
	for (int i = 0; i < groceryItems.size(); ++i) {
		if (groceryItems.at(i).GetItemName() == itemName) {
			return &groceryItems.at(i);
		}
	}
	
	return nullptr;
}

// Save the current item counts to the backup file
void CreateBackupFile(vector<GroceryItem>& groceryItems) {
	ofstream outputFile("frequency.dat");

	if (!outputFile.is_open()) {
		throw runtime_error("Backup file could not be created.");
	}

	for (int i = 0; i < groceryItems.size(); ++i) {
		outputFile << groceryItems.at(i).GetItemName() << " "
			<< groceryItems.at(i).GetQuantity() << endl;
	}

	outputFile.close();
}
// Show the menu options for the user
void DisplayMenu() {
	cout << endl;
	cout << "1. Search for an item" << endl;
	cout << "2. Print all item frequencies" << endl;
	cout << "3. Print item historgram" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter your choice: ";
}