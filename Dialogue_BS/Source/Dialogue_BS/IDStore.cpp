
#include "IDStore.h"

std::unique_ptr<IDStore> IDStore::storeInstance = nullptr;

IDStore::IDStore()
{
	key = "00000000";
	//Instantiates ID HashTable 
	IDTable = nullptr;
	counter = 0;
	iterator = 0;
	
}



//Resets and Creates a new IDStore 
void IDStore::ConstructStore(int size_)
{
	key = "00000000";
	//Instantiates ID HashTable 
	if (IDTable == nullptr)
		IDTable = new IDHashTable<UPersonalityFrameWork*>(size_);
	else
	{
		delete IDTable;
		IDTable = new IDHashTable<UPersonalityFrameWork*>(size_);
	}
	counter = 0;
	iterator = 0;
}

IDStore * IDStore::getInstance()
{
	if (storeInstance.get() == nullptr)
	{
		storeInstance.reset(new IDStore);
		storeInstance->ConstructStore();
	}
	return storeInstance.get();
}

//Handles up to 99,999,999 ID's
void IDStore::assignID(UPersonalityFrameWork &toBehaviour)
{
	//If a floating ID has been released, reuse those ID's
	if (floatingIDs.size() > 0)
	{
		IDTable->insert(floatingIDs.back(), &toBehaviour);
		floatingIDs.pop_back();
	}
	else
	{
		IDTable->insert(key, &toBehaviour);
		toBehaviour.ID = &key;
		iterator++;

		std::string temp = std::to_string(iterator);
		//temp.size() starts at 1
		for (size_t i = temp.size(); i < 9; i++)
		{
			//Makes Sure that the key is 8 digits long
			temp = "0" + temp;
		}
		key = temp;
	}


}

//Should Only Be Used if Removing Person From World
void IDStore::releaseID(const std::string IDToBeReleased)
{
	if (IDTable->find(IDToBeReleased) != NULL)
		floatingIDs.push_back(IDToBeReleased);

	IDTable->find(IDToBeReleased)->ID->clear();
	IDTable->remove(IDToBeReleased);
}
//Debugging
void IDStore::Print()
{
	IDTable->print();
}

IDStore::~IDStore()
{
	delete IDTable;
	IDTable = nullptr;
}


