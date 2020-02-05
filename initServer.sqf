/*["uo_handleJIP", "onPlayerConnected", {
    _this call uo_common_fnc_handleJIP;
}] call BIS_fnc_addStackedEventHandler;*/

["Initialize", [true]] call BIS_fnc_dynamicGroups;


private _boats = nearestObjects [[worldSize/2,worldSize/2], ["Ship_F"], worldSize/2];
{
    _x addEventHandler ['HandleDamage', {
        _this execVM "USER\preventBoatDamage.sqf";
    }];
} forEach _boats;