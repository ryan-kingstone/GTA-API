# Documentation

## API functions that use the SA-MP client

```cpp
// SA:MP
int GetServerName(char *&servername)
int GetServerIP(char *&serverip)
int CountOnlinePlayers()

int GetPlayerName(char *&playername)
int GetPlayerID()
int GetPlayerScore()
int GetPlayerPing()
int IsPlayerConnected(int playerid)
int GetPlayerIDByName(char *playername)
int GetPlayerNameByID(int playerid, char *&playername)
int GetPlayerScoreByID(int playerid)
int GetPlayerPingByID(int playerid)
int UpdateServerData()
int SendChat(char *text)
int AddChatMessage(char *text)
int ShowDialog(int style, const char *caption, const char *info, const char *button)
int ShowGameText(const char *text, int time, int style)
int GetChatLine(int line, char *&content)
int IsInChat()
```
-----

## API functions related to the base game (does not require SA-MP)
```cpp
int GetPlayerMoney()
int GetPlayerHealth()
int GetPlayerArmour()
int GetPlayerAngle()
int GetPlayerPos(float &x, float &y, float &z)
int GetPlayerPosX(float &x)
int GetPlayerPosY(float &y)
int GetPlayerPosZ(float &z)
int GetPlayerPosA(float &a)
int IsPlayerInAnyInterior()
int GetPlayerInteriorID()
int IsPlayerInRangeOfPoint(float radius, float x, float y, float z)
int GetPlayerWeaponID()
int GetPlayerWeaponSlot()
int GetPlayerWeaponClipAmmo()
int IsPlayerInArea(float minx, float miny, float maxx, float maxy)
int GetCityName(char *&cityname)
int GetZoneName(char *&zonename)
int GetVehicleHealth()
int IsPlayerInAnyVehicle()
int VehicleSirenStateChange()
int GetVehicleSirenState()
int GetVehicleLockState()
int GetVehicleEngineState()
int GetVehicleLightState()
int GetVehicleModelID()
int GetVehicleType()
int IsPlayerInACar()
int IsPlayerInABoat()
int IsPlayerInATrain()
int IsPlayerInABike()
int IsPlayerInAPlane()
int IsPlayerInABicycle()

// Interface
int SetInterfaceHealthColor(int color)
int SetInterfaceMoneyColor(int color)
int SetInterfaceWantedLevelColor(int color)
// Other stuff
int GetAPIVersion(char *&version)
int GetTimestamp()
int GetAPIRuntime()
```