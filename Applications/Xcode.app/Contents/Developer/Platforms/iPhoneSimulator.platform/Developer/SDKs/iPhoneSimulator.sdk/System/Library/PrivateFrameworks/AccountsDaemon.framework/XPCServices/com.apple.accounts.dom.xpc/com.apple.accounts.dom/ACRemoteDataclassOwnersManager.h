//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDDataclassOwnersManagerProtocol.h"

@class ACAccountStore, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface ACRemoteDataclassOwnersManager : NSObject <ACDDataclassOwnersManagerProtocol>
{
    NSSet *_dataclassOwners;
    NSMutableDictionary *_dataclassToOwnerMap;
    NSObject<OS_dispatch_queue> *_dataclassActionQueue;
    NSMutableDictionary *_pendingActionBatches;
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (id)_dataclassToOwnerMap;
- (void)_setOwner:(id)arg1 forDataclass:(id)arg2;
- (id)_ownerForDataclass:(id)arg1;
- (void)_decrementBusyCounterForAccount:(id)arg1;
- (void)_incrementBusyCounterForAccount:(id)arg1;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_accountStore;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
