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

//========================================================
//========================================================
//name
#define BOT_NAME						0	//string
//gender of the bot
#define BOT_GENDER						1	//string ("male", "female", "it")
//attack skill
// >  0.0 && <  0.2 = don't move
// >  0.3 && <  1.0 = aim at enemy during retreat
// >  0.0 && <  0.4 = only move forward/backward
// >= 0.4 && <  1.0 = circle strafing
// >  0.7 && <  1.0 = random strafe direction change
#define BOT_ATTACK_SKILL				2	//float [0, 1]
//view angle difference to angle change factor
#define BOT_VIEW_FACTOR					3	//float <0, 1]
//maximum view angle change
#define BOT_VIEW_MAXCHANGE				4	//float [1, 360]
//reaction time in seconds
#define BOT_REACTIONTIME				5	//float [0, 5]
//accuracy when aiming
#define BOT_AIM_ACCURACY				6	//float [0, 1]
//skill when aiming
// >  0.0 && <  0.9 = aim is affected by enemy movement
// >  0.4 && <= 0.8 = enemy linear leading
// >  0.8 && <= 1.0 = enemy exact movement leading
// >  0.5 && <= 1.0 = prediction shots when enemy is not visible
// >  0.6 && <= 1.0 = splash damage by shooting nearby geometry
#define BOT_AIM_SKILL					7	//float [0, 1]
//========================================================
//chat
//========================================================
//file with chats
#define BOT_CHAT_FILE					8	//string
//name of the chat character
#define BOT_CHAT_NAME					9	//string
//characters per minute type speed
#define BOT_CHAT_CPM					10	//integer [1, 4000]
//tendency to insult/praise
#define BOT_CHAT_INSULT					11	//float [0, 1]
//tendency to chat misc
#define BOT_CHAT_MISC					12	//float [0, 1]
//tendency to chat at start or end of level
#define BOT_CHAT_STARTENDLEVEL			13	//float [0, 1]
//tendency to chat entering or exiting the game
#define BOT_CHAT_ENTEREXITGAME			14	//float [0, 1]
//tendency to chat when killed someone
#define BOT_CHAT_KILL					15	//float [0, 1]
//tendency to chat when died
#define BOT_CHAT_DEATH					16	//float [0, 1]
//tendency to chat when enemy suicides
#define BOT_CHAT_ENEMYSUICIDE			17	//float [0, 1]
//tendency to chat when hit while talking
#define BOT_CHAT_HITTALKING				18	//float [0, 1]
//tendency to chat when bot was hit but didn't dye
#define BOT_CHAT_HITNODEATH				19	//float [0, 1]
//tendency to chat when bot hit the enemy but enemy didn't dye
#define BOT_CHAT_HITNOKILL				20	//float [0, 1]
//tendency to randomly chat
#define BOT_CHAT_RANDOM					21	//float [0, 1]
//tendency to reply
#define BOT_CHAT_REPLY					22	//float [0, 1]
//========================================================
//movement
//========================================================
//tendency to crouch
#define BOT_CROUCHER					23	//float [0, 1]
//tendency to jump
#define BOT_JUMPER						24	//float [0, 1]
//tendency to walk
#define BOT_WALKER						25	//float [0, 1]
//tendency to jump using a weapon
#define BOT_WEAPONJUMPING				26	//float [0, 1]
//========================================================
//goal
//========================================================
//the aggression of the bot
#define BOT_AGGRESSION					27	//float [0, 1]
//the self preservation of the bot (rockets near walls etc.)
#define BOT_SELFPRESERVATION			28	//float [0, 1]
//how likely the bot is to take revenge
#define BOT_VENGEFULNESS				29	//float [0, 1]
//tendency to camp
#define BOT_CAMPER						30	//float [0, 1]
//========================================================
//========================================================
//tendency to get easy kills
#define BOT_EASY_KILLER					31	//float [0, 1]
//how alert the bot is (view distance)
#define BOT_ALERTNESS					32	//float [0, 1]
//how much the bot fires its weapon
#define BOT_FIRETHROTTLE				33	//float [0, 1]
