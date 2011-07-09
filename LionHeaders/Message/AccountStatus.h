/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSTimer;

@interface AccountStatus : NSObject
{
    NSMutableDictionary *_states;
    NSMutableDictionary *_stateDetails;
    struct __CFNetDiagnostic *_netDiagnostics;
    NSMapTable *_clients;
    NSMutableSet *_allRegisteredAccounts;
    unsigned long long _allRegisteredTypes;
    NSMutableArray *_accountRefreshQueue;
    NSTimer *_refreshTimer;
    BOOL _isRefreshingInternet;
}

+ (id)sharedStatus;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (void)invalidate;
- (void)registerAccountTypes:(unsigned long long)arg1 accounts:(id)arg2 forClient:(id)arg3;
- (void)registerAccountTypes:(unsigned long long)arg1 forClient:(id)arg2;
- (void)registerAccounts:(id)arg1 forClient:(id)arg2;
- (void)unregisterClient:(id)arg1;
- (id)registeredAccountsForClient:(id)arg1;
- (id)_registeredAccountsForClient:(id)arg1 onlyWithUnknownStatus:(BOOL)arg2;
- (id)_allRegisteredAccounts;
- (id)_accountsForTypes:(unsigned long long)arg1;
- (long long)internetStatus;
- (void)_setInternetStatus:(long long)arg1;
- (void)diagnoseInternetConnection;
- (long long)accountStatus:(id)arg1;
- (long long)knownAccountStatus:(id)arg1;
- (void)_setStatus:(long long)arg1 forAccount:(id)arg2;
- (id)accountStatusDetails:(id)arg1;
- (void)_setStatusDetails:(id)arg1 forAccount:(id)arg2;
- (void)_timedRefresh:(id)arg1;
- (void)_networkChanged:(id)arg1;
- (void)_accountInfoChanged:(id)arg1;
- (void)refreshAndClearStatus:(BOOL)arg1;
- (void)refreshStatusForClient:(id)arg1 forceRefresh:(BOOL)arg2;
- (void)_refreshAccounts:(id)arg1 andInternet:(BOOL)arg2 clearingStatus:(BOOL)arg3;
- (void)_refreshInternetStatus;
- (void)_refreshAccountStatus:(id)arg1;
- (void)_accountStatusUpdatedWithInfo:(id)arg1;

@end
