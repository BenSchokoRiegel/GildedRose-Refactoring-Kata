#include "GildedRose.h"
#include <unordered_map>
#include "itemupdater.h"
#include <memory>

GildedRose::GildedRose(vector<Item> & items) : items(items)
{}

 

void GildedRose::updateQuality() 
{
    //SulfurasUpdater sulfurasUpdater;
    //std::unordered_map<std::string, std::unique_ptr<ItemUpdater>> updaterMap{
    //    {"Aged Brie", std::make_unique<AgedBrieUpdater>()},
    //   {"Backstage passes to a TAFKAL80ETC concert", std::make_unique<BackstagePassUpdater>()},
    //    {"Sulfuras, Hand of Ragnaros", std::make_unique<SulfurasUpdater>()},
    //    {"Conjured", std::make_unique<ConjuredUpdater>()}
    //};

    //for (auto& item : items){
    //    continue;
        //updaterMap[item.name]->update(item);
    //}
}