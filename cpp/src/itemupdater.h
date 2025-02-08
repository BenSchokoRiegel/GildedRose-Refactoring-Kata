class ItemUpdater { 
public:
    virtual void update(Item& item) final {
        if (item.sellIn < 0) {
            update_overdue(item);
        } else {
            updateQuality(item);
        }
        if (item.name != "Sulfuras, Hand of Ragnaros") {
            item.sellIn--;
        }
    }
    
    
    virtual ~ItemUpdater() {}


protected:
    // muss von den abgeleiteten Klassen implementiert werden.
    virtual void updateQuality(Item& item) = 0;
    virtual void update_overdue(Item& item) = 0; 
};

class SulfurasUpdater : public ItemUpdater {
    public:
        void updateQuality(Item& item) override {
            if (item.quality != 80) {
                item.quality = 80;
            }
        }
        void update_overdue(Item& item) override {
            
        }   

};

class ConjuredUpdater : public ItemUpdater {
    public:
        void updateQuality(Item& item) override {
            
        }
        void update_overdue(Item& item) override {
        }
};


class AgedBrieUpdater : public ItemUpdater {
public:
    void updateQuality(Item& item) override {
        max(item.quality += 1, 50);
    }

    void update_overdue(Item& item) override {
        max(item.quality += 2, 50);
    }
};

class BackstagePassUpdater : public ItemUpdater {
public:
    void updateQuality(Item& item) override {
        if (item.sellIn < 5) {
            max(item.quality += 3, 50);
        } else if (item.sellIn < 10) {
            max(item.quality += 2, 50);
        } else {
            max(item.quality += 1, 50);
        }
    }

    void update_overdue(Item& item) override {
        item.quality = 0;
    }
};



