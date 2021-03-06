//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HMDPowerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _ethernetActive;
    _Bool _networkAccessRequired;
    unsigned int _powerAssertion;
    struct __SCDynamicStore *_scStore;
    void *_scContext;
    _Bool _started;
}

@property(nonatomic, getter=isNetworkAccessRequired) _Bool networkAccessRequired; // @synthesize networkAccessRequired=_networkAccessRequired;
- (void).cxx_destruct;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_update;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

