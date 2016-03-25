# Documentation

## API functions that use the SA-MP client

```ahk
; SA-MP functions
GetServerName(ByRef servername)
GetServerIP(ByRef ipAddress)
CountOnlinePlayers()
GetPlayerName(ByRef name)
GetPlayerID()
GetPlayerScore()
GetPlayerPing()
IsPlayerConnected(playerid)
GetPlayerNameByID(playerid, ByRef name)
GetPlayerScoreByID(playerid)
GetPlayerPingByID(playerid)
UpdateServerData()
SendChat(text)
AddChatMessage(text)
ShowDialog(style, caption, info, button)
ShowGameText(text, time, style)
GetChatLine(line, ByRef content)
IsInChat()
```
-----

## API functions related to the base game (does not require SA-MP)
```ahk
GetPlayerMoney()
GetPlayerHealth()
GetPlayerArmour()
GetPlayerAngle()
GetPlayerAngleEx(ByRef var)
GetPlayerPos(ByRef x, ByRef y, ByRef z)
GetPlayerPosX(ByRef position)
GetPlayerPosY(ByRef position)
GetPlayerPosZ(ByRef position)
IsPlayerInAnyInterior()
GetPlayerInteriorID()
IsPlayerInRangeOfPoint(radius, x, y, z)
GetPlayerWeaponID()
GetPlayerWeaponSlot()
GetPlayerWeaponClipAmmo()
GetWeaponName(weaponid, ByRef weaponname)
IsPlayerInArea(x1, y1, x2, y2)
GetCityName(ByRef city)
GetZoneName(ByRef zone)
GetVehicleHealth()
IsPlayerInAnyVehicle()
VehicleSirenStateChange()
GetVehicleSirenState()
GetVehicleLockState()
GetVehicleEngineState()
GetVehicleLightState()
GetVehicleModelID()
GetVehicleType()
IsPlayerInACar()
IsPlayerInABoat()
IsPlayerInATrain()
IsPlayerInABike()
IsPlayerInAPlane()
IsPlayerInABicycle()

; Interface
SetInterfaceHealthColor(color)
SetInterfaceMoneyColor(color)
SetInterfaceWantedLevelColor(color)

; Utilities
GetTimestamp() 
GetAPIRuntime()
```