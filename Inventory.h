

Class Inventory{

    private:
        Item * items;


    public:
        bool addItem(Item item);
        bool removeItem( string id);
        bool hasItem(string id);
        Inventory();
        ~Inventory();



}