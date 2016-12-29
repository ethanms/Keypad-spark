/*
||
|| @file MyKey.h
|| @version 1.0
|| @author Mark Stanley
|| @contact mstanley@technologist.com
||
|| @description
|| | MyKey class provides an abstract definition of a key or button
|| | and was initially designed to be used in conjunction with a
|| | state-machine.
|| #
||
|| @license
|| | This library is free software; you can redistribute it and/or
|| | modify it under the terms of the GNU Lesser General Public
|| | License as published by the Free Software Foundation; version
|| | 2.1 of the License.
|| |
|| | This library is distributed in the hope that it will be useful,
|| | but WITHOUT ANY WARRANTY; without even the implied warranty of
|| | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
|| | Lesser General Public License for more details.
|| |
|| | You should have received a copy of the GNU Lesser General Public
|| | License along with this library; if not, write to the Free Software
|| | Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
|| #
||
*/

#ifndef MYKEY_H
#define MYKEY_H

#include "application.h"	// for digitalRead, digitalWrite, etc

#define OPEN LOW
#define CLOSED HIGH

typedef unsigned int uint;
typedef enum{ IDLE, PRESSED, HOLD, RELEASED } MyKeyState;

const char NO_KEY = '\0';

class MyKey {
public:
	// members
	char kchar;
	int kcode;
	MyKeyState kstate;
	boolean stateChanged;

	// methods
	MyKey();
	MyKey(char userMyKeyChar);
	void key_update(char userMyKeyChar, MyKeyState userState, boolean userStatus);

private:

};

#endif

/*
|| @changelog
|| | 1.0 2012-06-04 - Mark Stanley : Initial Release
|| | 1.1 2016-12-29 - Ethan Schwartz : Modify Key to MyKey to prevent conflicts
|| #
*/
