#pragma once
#include <string>

using namespace std;

#define MAX_BUFF 256

#define CONFIG_FILE_PATH ".\\Profile\\"

#define DB_FILE "data.db"
#define CONFIG_DB_TABLE "config_table"
#define AWARDS_DB_TaBLE "Awards_table"

#define ITEM_H "item.h"
#define STAGE_H "stage.h"


#define TEMP_FILE_PATH ".\\Temp\\"
#define ITEM_DAT "item.dat"
#define STORE_DAT "store.dat"

#pragma pack(1)
struct ItemDef{
	string ID;
	string Name;
};
#pragma pack() 