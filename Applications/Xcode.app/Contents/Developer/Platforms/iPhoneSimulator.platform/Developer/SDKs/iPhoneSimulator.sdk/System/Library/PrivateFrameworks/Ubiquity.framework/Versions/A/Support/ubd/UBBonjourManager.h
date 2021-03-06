//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"
#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class APSConnection, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString;

@interface UBBonjourManager : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate, APSConnectionDelegate>
{
    _Bool _suspended;
    _Bool _invalidated;
    _Bool _setupComplete;
    _Bool _use_ssl;
    _Bool _previously_suspended;
    _Bool _bonjourDisabled;
    _Bool _srvBonjourDisabled;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    struct __CFRunLoop *_runloop;
    unsigned char _uuid[16];
    unsigned int _sessionId;
    int _port;
    CDUnknownFunctionPointerType _network_change_cb;
    CDUnknownFunctionPointerType _http_timeout_change_cb;
    CDUnknownFunctionPointerType _notify_cb;
    CDUnknownFunctionPointerType _mme_set_token_cb;
    CDUnknownFunctionPointerType _mme_push_cb;
    void *_notify_ctx;
    NSString *_domain;
    NSString *_mmeUUID;
    NSString *_pushEnvironment;
    NSSet *_vlans;
    NSString *_identity;
    int _periodicPushInterval;
    unsigned long long _refetchMMeConfigTime;
    NSObject<OS_dispatch_source> *_periodicPushTimer;
    APSConnection *_pushConnection;
    APSConnection *_persistentPushConnection;
    struct {
        NSMutableDictionary *_browsers;
        NSMutableSet *_resolvingNetServices;
        NSMutableDictionary *_monitoredNetServices;
    } _browserState;
    struct {
        NSMutableArray *_netServices;
    } _publishedState;
    struct {
        struct {
            NSMutableDictionary *_byFQDN;
            NSMutableDictionary *_byEndPoint;
            NSMutableDictionary *_byUUID;
        } _foundServices;
        NSMutableDictionary *_preferredFQDN;
    } _serviceState;
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (void)ignorePushNotifications:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)_processNetService:(id)arg1 type:(int)arg2;
- (void)invalidate;
- (void)pushResume;
- (void)pushSuspend;
- (void)resumeWithPort:(unsigned short)arg1;
- (void)suspend;
- (_Bool)_havePreferredFQDN:(id)arg1;
- (void)setPreferredFQDN:(id)arg1 forUUID:(unsigned char [16])arg2;
- (void)setMMeUUID:(unsigned char [16])arg1;
- (void)setupMMeEnvironment:(id)arg1 mme_set_token_cb:(CDUnknownFunctionPointerType)arg2 mme_push_cb:(CDUnknownFunctionPointerType)arg3 network_change_cb:(CDUnknownFunctionPointerType)arg4 http_timeout_change_cb:(CDUnknownFunctionPointerType)arg5 ctx:(void *)arg6;
- (void)setIdentity:(id)arg1;
- (void)setupClient:(unsigned char [16])arg1 sessionId:(unsigned int)arg2 port:(int)arg3 use_ssl:(_Bool)arg4 notify_cb:(CDUnknownFunctionPointerType)arg5 notify_ctx:(void *)arg6 domain:(id)arg7 vlans:(id)arg8 unit_test_mode:(_Bool)arg9;
- (void)_rearmPeriodicPushTimer;
- (void)sendMMePush:(id)arg1;
- (void)_refetchMMeConfig;
- (void)_parseHTTPTimeoutFromMMeConfig:(id)arg1;
- (void)_setNetworkReachable:(_Bool)arg1;
- (void)_updateServicesForIdentity:(id)arg1;
- (id)_serviceDataForIdentity:(id)arg1 prependedID:(id)arg2;
- (id)_getIdentityForNetService:(id)arg1 rnd:(unsigned int *)arg2;
- (_Bool)_splitNetServiceName:(id)arg1 rnd:(unsigned int *)arg2 hashedID:(id *)arg3;
- (id)_fqdnForNetService:(id)arg1;
- (id)_fqdnForServiceDict:(id)arg1;
- (id)_endPointForServiceDict:(id)arg1;
- (void)_runBlockOnRL:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;
- (void)_initNetworkState;
- (void)_deallocNetworkState;
- (void)_initReachability;
- (void)_deallocReachability;
- (void)_initPushState:(int)arg1;
- (void)_deallocPushState:(int)arg1;
- (void)_initServiceState;
- (void)_deallocServiceState;
- (void)_initPublishedState;
- (void)_deallocPublishedState;
- (void)_restartBrowsers;
- (void)_initBrowserState;
- (id)anonymousSubtype;
- (void)_deallocBrowserState;
- (_Bool)_isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

