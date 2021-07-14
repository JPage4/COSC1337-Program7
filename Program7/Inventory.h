#ifndef INVENTORY_H
#define INVENTORY_H
class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

public:
	Inventory();
	Inventory(int, double, int);
	void setItemNumber(int);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost();
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();

};

Inventory::Inventory()
	{
		itemNumber = 0;
		quantity = 0;
		cost = 0.0;
		totalCost = 0.0;
	}

Inventory::Inventory(int itemNum, double theCost, int theQuantity)
	{
		if (itemNum >= 0)
		{
			itemNumber = itemNum;	
		}
		
		
		if(theCost >= 0)
		{
			cost = theCost;	
		}
		
		if(theQuantity >= 0)
		{
			quantity = theQuantity;	
		}
	}

void Inventory::setItemNumber(int itemNum)
{
	if (itemNum >= 0)
		{
			itemNumber = itemNum;	
		}
}

void Inventory::setQuantity(int theQuantity)
{
	if(theQuantity >= 0)
		{
			quantity = theQuantity;	
		}
}

void Inventory::setCost(double theCost)
{
	if(theCost >= 0)
		{
			cost = theCost;	
		}
}

void Inventory::setTotalCost()
{
	totalCost = cost * quantity;
}

int Inventory::getItemNumber()
{
	return itemNumber;
}

int Inventory::getQuantity()
{
	return quantity;
}

double Inventory::getCost()
{
	return cost;
}

double Inventory::getTotalCost()
{
	return totalCost;
}

#endif
