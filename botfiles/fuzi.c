/*
===========================================================================
Copyright (C) 2012-2014 Marcus Collins (mecwerks@gmail.com).

This file is part of Mecwerks Source Code and is based upon Mr. Elusive's 
fuzzy logic system found in Quake 3 Arena and original re-write by Dmn_clown
(aka: Bob Isaac (rjisaac@gmail.com)).

Mecwerks Source Code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 3 of the License,
or (at your option) any later version.

Mecwerks Source Code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Mecwerks Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, Mecwerks Source Code is also subject to certain additional terms.
You should have received a copy of these additional terms immediately following
the terms and conditions of the GNU General Public License.  If not, please
request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional
terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc.,
Suite 120, Rockville, Maryland 20850 USA.
===========================================================================
*/

#define ARMOR		20
#define AMMO		20
#define HEALTH		20
#define POWERUP		20
#define WEAPON		20

#define FP(x)   (x < 0 ? 1 : x)
#define ARS(x)  balance($evalfloat(FP(FPA/x)), $evalfloat(FP(FPA/x-ARMOR)), $evalfloat(FP(FPA/x+ARMOR)))
#define AS(x)   balance($evalfloat(FP(x)), $evalfloat(FP(x/AMMO)), $evalfloat(FP(x*AMMO)))
#define HS(x)   balance($evalfloat(FP(FPH/x)), $evalfloat(FP(FPH/x-HEALTH)), $evalfloat(FP(FPH/x+HEALTH)))
#define PS(x)   balance($evalfloat(FP(x)), $evalfloat(FP(x/POWERUP)), $evalfloat(FP(x*POWERUP)))
#define WS(x)   balance($evalfloat(FP(x)), $evalfloat(FP(x/WEAPON)), $evalfloat(FP(x*WEAPON)))

weight "weapon_shotgun"
{
		return WS(W_SG);
}

weight "weapon_machinegun"
{
	return WS(W_MG);
}

weight "weapon_grenadelauncher"
{
	return WS(W_GL);
}

weight "weapon_rocketlauncher"
{
	return WS(W_RL);
}

weight "weapon_lightning"
{
	return WS(W_LG);
}

weight "weapon_railgun"
{
	return WS(W_RG);
}

weight "weapon_plasmagun"
{
	return WS(W_PG);
}

weight "weapon_bfg"
{
	return WS(W_BFG);
}

//=============================================
// This is only used to pickup dropped CTF
// flags now. The logic in here makes no
// sense since the bot has specific CTF AI.
// yet without it the bots barely move towards 
// the opposing flags due to low flag weights.
//=============================================

weight "team_CTF_redflag"
{
		return FGW;
}

weight "team_CTF_blueflag"
{
		return FGW;
}


weight "team_CTF_neutralflag"
{
        return FGW;
}

weight "item_botroam"
{
        return 1;
}

