//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestQueue.h"

@interface NetworkRequestQueue : RequestQueue
{
}

+ (void)serverAuthenticateWithMessage:(id)arg1 connection:(id)arg2;
+ (void)requestURLWithMessage:(id)arg1 connection:(id)arg2;
+ (void)lookupWithMessage:(id)arg1 connection:(id)arg2;
+ (void)lookupItemsWithMessage:(id)arg1 connection:(id)arg2;
+ (void)loadURLBagWithMessage:(id)arg1 connection:(id)arg2;
+ (void)keybagSyncWithMessage:(id)arg1 connection:(id)arg2;
+ (void)getMatchStatusWithMessage:(id)arg1 connection:(id)arg2;
+ (void)claimAppsWithMessage:(id)arg1 connection:(id)arg2;
+ (void)authenticateWithMessage:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (id)sharedNetworkRequestQueue;
- (void)_sendUnentitledMessageToClient:(id)arg1;
- (id)_newClientWithMessage:(id)arg1 connection:(id)arg2;
- (void)_enqueueOperationsForStoreServicesURL:(id)arg1;
- (id)_copyAuthenticationContextWithContext:(id)arg1 client:(id)arg2;
- (id)init;

@end
