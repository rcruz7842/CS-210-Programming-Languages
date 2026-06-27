#pragma once
#include <string>
using namespace std;

class GroceryItem {
public:
	GroceryItem();
	GroceryItem(string itemName, int quantity);

	string GetItemName() const;
	int GetQuantity() const;

	void SetItemName(string itemName);
	void SetQuantity(int quantity);

	void IncrementQuantity();

private:
	string itemName;
	int quantity;	
};
