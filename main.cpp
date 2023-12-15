#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
    string itemName;
    int itemPrice;

    Item(string n, int p) : itemName(n), itemPrice(p)
    {
    }
};

class Store
{
public:
    vector<Item> storeItems;
    int storeBalance;

    Store() : storeBalance(500)
    {
        storeItems.push_back(Item("joey potion", 420));
        storeItems.push_back(Item("stella sword", 69));
        storeItems.push_back(Item("monkey chalice", 9001));
    }

    void selectPurchase()
    {
        cout << "what would you like to buy?" << endl;

        showItems();
        purchaseItem();
    }

    void showItems()
    {
        for (int i=0; i<storeItems.size(); i++)
        {
            cout << i+1 << " " << storeItems[i].itemName << ": $" << storeItems[i].itemPrice << endl;
        }
    }

    void purchaseItem()
    {
        int purchaseChoice;
        cin >> purchaseChoice;

        // TODO: store selected item before erasing it
        cout << "you bought a " << storeItems[purchaseChoice-1].itemName << endl;
        storeItems.erase(storeItems.begin()+(purchaseChoice-1));

        showItems();
    }
};

class Inventory
{
public:
    vector<Item> playerItems;
    Inventory()
    {
        playerItems.push_back(Item("bug", 3));
        playerItems.push_back(Item("crumb", 1));
    }
};

int main()  
{
    int userInput;

    Store joeyStore;

    cout << "welcome to da store, we have many warez" << endl;
    cout << "what would you like to do?\n" << endl;

    cout << "1 Purchase" << endl;
    cout << "2 Sell" << endl;
    cout << "3 Chat" << endl;
    cout << "4 Leave" << endl;

    cin >> userInput;

    if (userInput == 1)
    {
        joeyStore.selectPurchase();
        //selectPurchase();
    }

    return 0;
}
