#include "GroceryItem.h"

// Start with a blank item with a quantity of 0
GroceryItem::GroceryItem() {
	itemName = "";
	quantity = 0;
}

// Create an item with a name and quantity
GroceryItem::GroceryItem(string itemName, int quantity) {
	this->itemName = itemName;
	this->quantity = quantity;
}

// Return the item name
string GroceryItem::GetItemName() const {
	return itemName;
}

// Return the quantity
int GroceryItem::GetQuantity() const {
	return quantity;
}

// Update the item name
void GroceryItem::SetItemName(string itemName) {
	this->itemName = itemName;
}

// Update the quantity
void GroceryItem::SetQuantity(int quantity) {
	this->quantity = quantity;
}

// Add 1 when another matching item is found
void GroceryItem::IncrementQuantity() {
	quantity++;
}