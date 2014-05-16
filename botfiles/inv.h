/*
===========================================================================
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of Spearmint Source Code.

Spearmint Source Code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 3 of the License,
or (at your option) any later version.

Spearmint Source Code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Spearmint Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, Spearmint Source Code is also subject to certain additional terms.
You should have received a copy of these additional terms immediately following
the terms and conditions of the GNU General Public License.  If not, please
request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional
terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc.,
Suite 120, Rockville, Maryland 20850 USA.
===========================================================================
*/

#define INVENTORY_NONE				0
//weapons
#define INVENTORY_WEAPONS			1
#define INVENTORY_WP(x)             (x+INVENTORY_WEAPONS)
//ammo
#define INVENTORY_AMMO              17
#define INVENTORY_AM(x)             (x+INVENTORY_AMMO)
//powerups
#define INVENTORY_HEALTH			33
#define INVENTORY_TELEPORTER		34
#define INVENTORY_MEDKIT			35
#define INVENTORY_KAMIKAZE			36
#define INVENTORY_PORTAL			37
#define INVENTORY_INVULNERABILITY	38
#define INVENTORY_QUAD				39
#define INVENTORY_ENVIRONMENTSUIT	40
#define INVENTORY_HASTE				41
#define INVENTORY_INVISIBILITY		42
#define INVENTORY_REGEN				43
#define INVENTORY_FLIGHT			44
#define INVENTORY_SCOUT				45
#define INVENTORY_GUARD				46
#define INVENTORY_DOUBLER			47
#define INVENTORY_AMMOREGEN			48

#define INVENTORY_REDFLAG			49
#define INVENTORY_BLUEFLAG			50
#define INVENTORY_NEUTRALFLAG		51
#define INVENTORY_REDCUBE			52
#define INVENTORY_BLUECUBE			53
//enemy stuff
#define ENEMY_HORIZONTAL_DIST		200
#define ENEMY_HEIGHT				201
#define NUM_VISIBLE_ENEMIES			202
#define NUM_VISIBLE_TEAMMATES		203

// if running the mission pack
#ifdef MISSIONPACK

//#error "running mission pack"

#endif

//item numbers (make sure they are in sync with bg_itemlist in bg_misc.c)
#define MODELINDEX_ARMORSHARD		1
#define MODELINDEX_ARMORCOMBAT		2
#define MODELINDEX_ARMORBODY		3
#define MODELINDEX_HEALTHSMALL		4
#define MODELINDEX_HEALTH			5
#define MODELINDEX_HEALTHLARGE		6
#define MODELINDEX_HEALTHMEGA		7

#define MODELINDEX_WEAPONS			8
#define MODELINDEX_WP(x)            (x+MODELINDEX_WEAPONS)

#define MODELINDEX_TELEPORTER		41
#define MODELINDEX_MEDKIT			42
#define MODELINDEX_QUAD				43
#define MODELINDEX_ENVIRONMENTSUIT	44
#define MODELINDEX_HASTE			45
#define MODELINDEX_INVISIBILITY		46
#define MODELINDEX_REGEN			47
#define MODELINDEX_FLIGHT			48

#define MODELINDEX_REDFLAG			49
#define MODELINDEX_BLUEFLAG			50

// mission pack only defines

#define MODELINDEX_KAMIKAZE			51
#define MODELINDEX_PORTAL			52
#define MODELINDEX_INVULNERABILITY	53

#define MODELINDEX_NAILS			54
#define MODELINDEX_MINES			55
#define MODELINDEX_BELT				56

#define MODELINDEX_SCOUT			57
#define MODELINDEX_GUARD			58
#define MODELINDEX_DOUBLER			59
#define MODELINDEX_AMMOREGEN		60

#define MODELINDEX_NEUTRALFLAG		61
#define MODELINDEX_REDCUBE			62
#define MODELINDEX_BLUECUBE			63

#define MODELINDEX_NAILGUN			64
#define MODELINDEX_PROXLAUNCHER		65
#define MODELINDEX_CHAINGUN			66


//
#define WEAPONINDEX_NUM             1
#define WEAPONINDEX(x)              (x+WEAPONINDEX_NUM)
