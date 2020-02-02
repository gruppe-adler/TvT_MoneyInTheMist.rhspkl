#include "component.hpp"

params ["_center", ["_radii", [0,15]], ["_angles", [0,360]], ["_vehicleType", "B_Soldier_F"], ["_findWaterPos",false], ["_findRoadPos",false]];
private ["_pos"];

_radii params ["_minRad", "_maxRad"];
_angles params ["_minAngle", "_maxAngle"];

if (_center isEqualType objNull) then {_center = getPos _center};

for [{private _i=0}, {_i<50}, {_i=_i+1}] do {
    _searchDist = (random (_maxRad - _minRad)) + _minRad;
    _searchAngle = (random (_maxAngle - _minAngle)) + _minAngle;
    _searchPos = _center getPos [_searchDist, _searchAngle];

    if (_findRoadPos) then {
        _nearestRoad = [_searchPos,50,[]] call BIS_fnc_nearestRoad;
        _searchPos = if (!isNull _nearestRoad) then {getPos _nearestRoad} else {[]};
    };

    _pos = if (_vehicleType != "" && {count _searchPos > 0}) then {_searchPos findEmptyPosition [0,10,_vehicleType]} else {_searchPos};
    if (count _pos > 0 && {(surfaceIsWater _pos) isEqualTo _findWaterPos}) exitWith {};
};

_pos
