/*
===========================================================================
Copyright (C) 2012-2013 Marcus Collins (mecwerks@gmail.com).

This file is part of Mecwerks Source Code.

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

#include "chars.h"

skill 1
{
	BOT_NAME		"Marcus"
	BOT_CHAT_NAME	"marcus"
	BOT_GENDER		"male"
	
	BOT_CHAT_FILE       "bots/marcus_t.c"
	
	BOT_CHAT_CPM			400
	BOT_CHAT_INSULT			0.50
	BOT_CHAT_MISC			0.50
	BOT_CHAT_STARTENDLEVEL	1.00
	BOT_CHAT_ENTEREXITGAME	1.00
	BOT_CHAT_KILL			1.00
	BOT_CHAT_DEATH			1.00
	BOT_CHAT_ENEMYSUICIDE	0.60
	BOT_CHAT_HITTALKING		1.00
	BOT_CHAT_HITNODEATH		1.00
	BOT_CHAT_HITNOKILL		0.80
	BOT_CHAT_RANDOM			0.70
	BOT_CHAT_REPLY			0.80
	
	BOT_CROUCHER			0.15
	BOT_WALKER				0.03
	BOT_JUMPER				0.46
	BOT_CAMPER				0.15
	BOT_WEAPONJUMPING		0.65
	BOT_GRAPPLE_USER		0.00
	BOT_AGGRESSION			0.65
	BOT_SELFPRESERVATION	0.50
	BOT_VENGEFULNESS		0.80
	BOT_EASY_KILLER			0.80
	BOT_FIRETHROTTLE        0.85
	
	BOT_VIEW_FACTOR		0.50
	BOT_VIEW_MAXCHANGE	180
	BOT_REACTIONTIME	1.50
	BOT_ALERTNESS		0.50
	
	BOT_AIM_ACCURACY					0.50
	BOT_AIM_ACCURACY_MACHINEGUN			0.50
	BOT_AIM_ACCURACY_SHOTGUN			0.50
	BOT_AIM_ACCURACY_ROCKETLAUNCHER		0.50
	BOT_AIM_ACCURACY_GRENADELAUNCHER	0.50
	BOT_AIM_ACCURACY_LIGHTNING			0.50
	BOT_AIM_ACCURACY_PLASMAGUN			0.50
	BOT_AIM_ACCURACY_RAILGUN			0.50
	BOT_AIM_ACCURACY_BFG10K				0.50
	
	BOT_ATTACK_SKILL	0.50
	
	BOT_AIM_SKILL					0.50
	BOT_AIM_SKILL_ROCKETLAUNCHER	0.50
	BOT_AIM_SKILL_GRENADELAUNCHER	0.50
	BOT_AIM_SKILL_PLASMAGUN			0.50
	BOT_AIM_SKILL_BFG10K			0.50
}

skill 4
{
}

skill 5
{
}
