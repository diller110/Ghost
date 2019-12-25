#if defined _redie_included_
  #endinput
#endif
#define _redie_included_
 
/**
 * Returns if player is currently a Ghost
 *
 * @param client 		The client index
 * @return 		True if player is a Ghost, false otherwise.
 */
native bool Redie_IsGhost(int client);