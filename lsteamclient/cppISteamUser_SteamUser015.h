#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser015_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser015_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser015_GetSteamID(void *);
extern int cppISteamUser_SteamUser015_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser015_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser015_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser015_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser015_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser015_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser015_GetAvailableVoice(void *, uint32 *, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser015_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser015_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *, uint32);
extern uint32 cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate(void *);
extern HAuthTicket cppISteamUser_SteamUser015_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser015_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser015_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser015_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser015_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser015_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser015_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser015_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser015_GetEncryptedAppTicket(void *, void *, int, uint32 *);
#ifdef __cplusplus
}
#endif
