#include "GildedRose.h"


class ItemUpdater { 
public:
    void update(Item& item) final {
        updateQuality(item);
        
        if (item.name != "Sulfuras, Hand of Ragnaros") {
            item.sellIn--;
        }
    }
    
    
    virtual ~ItemUpdater() {}


protected:
    // muss von den abgeleiteten Klassen implementiert werden.
    virtual void updateQuality(Item& item) = 0;
};


class AgedBrieUpdater : public ItemUpdater {
public:
    void updateQuality(Item& item) override {
        
    }
};

class BackstagePassUpdater : public ItemUpdater {
public:
    void updateQuality(Item& item) override {
       if (item.sellIn < 0)
        {
           item.quality = 0;
           return;
        }

      
    }
};



