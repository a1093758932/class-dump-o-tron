//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface PLChangeNode : NSObject
{
    NSObject<OS_xpc_object> *_hubConnection;
    Class _changeHubClass;
    unsigned char _nodeUUID[16];
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned long long _lastKnownChangeHubEventIndex;
}

+ (id)localChangeEventFromChangeHubEvent:(id)arg1;
+ (id)_descriptionForEvent:(id)arg1;
+ (id)sharedNode;
- (void)_processDelayedAssetsForFileSystemPersistencyFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumOrderUpdatesAndCountUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumOrderUpdates:(id)arg1 countUpdates:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)processDelayedAssetsForFileSystemPersistency:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedDupeAnalysisFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)_processCloudFeedUpdateDataFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)_processDeletionsFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)forceUserInterfaceReload;
- (_Bool)isEventOriginatingFromHere:(id)arg1;
- (void)processRemoteEvents:(id)arg1;
- (void)fetchNewEventsFromChangeHub;
- (void)handleRemoteChangeHubRequest:(id)arg1;
- (void)setupHubConnection;
- (id)sendEventToChangeHub:(id)arg1 transaction:(id)arg2;
- (void)sendChangeHubEventForDidSaveNotification:(id)arg1;
- (void)printChangeStore;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)connectManagedObjectContext:(id)arg1;
- (void)distributeRemoteChangeHubEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (id)createXPCObjectFromDidSaveNotification:(id)arg1 updatedAttributesByObjectID:(id)arg2 updatedRelationshipsByObjectID:(id)arg3;
- (void)dealloc;
- (id)init;

@end
