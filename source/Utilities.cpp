/**
 * GTA API by Slider (c) www.gta-api.de
 *
 * @author				Slider
 * @date				2014-08-26
 * @copyright			(c) by Slider - www.gta-api.de
 * @license				General Public License <https://www.gnu.org/licenses/gpl>
 *
 * This is a class with some useful functions
*/

#include <iostream>
#include <Windows.h>
#include <WinInet.h>
#include <ctime>
#include "Utilities.h"

using namespace std;

/**
 * int API_GetVersion()
 *
 * @author			Slider
 * @date			2014-08-04
 * @category		Utilities
 * @license			General Public License <https://www.gnu.org/licenses/gpl>
 */
int Utilities::API_GetAPIVersion(char *&version) {
	memcpy(version, API_VERSION, sizeof(API_VERSION));
	return 1;
}

/**
 * int API_GetTimestamp()
 *
 * @author			Slider
 * @date			2014-05-29
 * @category		Utilities
 * @license			General Public License <https://www.gnu.org/licenses/gpl>
 */
int Utilities::API_GetTimestamp() {
	return (int)time(0);
}

/**
 * int API_GetAPIRuntime()
 *
 * @author			Slider
 * @date			2014-08-26
 * @category		Utilities
 * @license			General Public License <https://www.gnu.org/licenses/gpl>
 */
int Utilities::API_GetAPIRuntime() {
	return GetTickCount();
}