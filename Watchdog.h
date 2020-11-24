/*******************************************************************************
Please pay attention - the signal SIGUSER1 is in use of this programm.

                            Watchdog - API
                          Written by Anat Wax
                       May 10th - May 16th, 2020
*******************************************************************************/

#ifndef WATCHDOG_H
#define WATCHDOG_H

/*
 * In case the user's program is un-responsive / has crashed, the WD will restart it.
 * return: status - 0 - watchdog process launched successfully.
 *                  1 - an error has occured while running the WD process.
 * Arguments: program_name - pointer to string literal of your program name.
 * Compexity: O(1)
 */
int WatchdogStart(char *program_name);

/*
 * Function to stop the watchdog. Thie function doesn't stop your process, just 
 * the watchdog itself.
 * Compexity: O(1)
 */
void WatchdogStop();

#endif /* WATCHDOG_H */
