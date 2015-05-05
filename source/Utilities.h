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

#pragma once

#define API_VERSION "0.3.7 RC2 -pre"
#define UPDATE_SERVER_ADDR "fk.you"
#define NEXT_UPDATE_CHECK 99999999

class Utilities {
public:
	int lastUpdateCheck = 0;
	int updateAvailable = 0;

	int API_IsAPIUpdateAvailable();
	int API_GetAPIVersion(char *&version);
	int API_GetTimestamp();
	int API_GetAPIRuntime();
};