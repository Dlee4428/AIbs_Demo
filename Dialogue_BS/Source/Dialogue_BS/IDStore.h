// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PersonalityFrameWork.h"
#include "IDHashTable.h"

/**
 *
 */
class DIALOGUE_BS_API  IDStore
{
private:
	std::string key;
	unsigned int iterator, counter;

	IDHashTable<UPersonalityFrameWork*>* IDTable;
	std::vector<string> floatingIDs;

	static std::unique_ptr<IDStore> storeInstance;
	friend std::default_delete<IDStore>;
public:

	IDStore(const IDStore&) = delete;
	IDStore(IDStore&&) = delete;
	IDStore& operator =(const IDStore&) = delete;
	IDStore& operator=(IDStore&&) = delete;
	//Resets and Creates a new IDStore 
	void ConstructStore(int size_ = 20);
	static IDStore* getInstance();

	//Assigns unique ID to UPersonalityFrameWork
	void assignID(UPersonalityFrameWork&toBehaviour);
	void addfloatingID(const std::string);
	//Detaches Unique ID/Person from the corresponding Person/ID
	void releaseID(const std::string);
	//Debugging Print
	void Print();

private:
	IDStore();
	~IDStore();
};
