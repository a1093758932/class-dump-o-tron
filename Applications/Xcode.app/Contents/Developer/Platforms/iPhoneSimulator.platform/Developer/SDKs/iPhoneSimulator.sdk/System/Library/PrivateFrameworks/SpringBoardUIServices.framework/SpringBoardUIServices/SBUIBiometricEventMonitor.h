//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BiometricKit, NSCountedSet, NSHashTable;

@interface SBUIBiometricEventMonitor : NSObject
{
    BiometricKit *_biometricKit;
    id <SBUIBiometricEventMonitorDelegate> _delegate;
    NSHashTable *_observers;
    unsigned long long _lastEvent;
    NSCountedSet *_matchingDisabledRequesters;
    NSCountedSet *_fingerDetectRequesters;
    NSCountedSet *_activePasscodeViews;
    _Bool _matchingEnabled;
    _Bool _fingerDetectionEnabled;
    _Bool _screenIsOff;
    _Bool _deviceLocked;
    _Bool _lockScreenTopmost;
    _Bool _shouldSendFingerOffNotification;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isMatchingEnabled) _Bool matchingEnabled; // @synthesize matchingEnabled=_matchingEnabled;
@property(nonatomic) id <SBUIBiometricEventMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_profileSettingsChanged:(id)arg1;
@property(readonly, nonatomic) unsigned long long lockoutState;
- (void)disableMatchingForPasscodeView:(id)arg1;
- (void)enableMatchingForPasscodeView:(id)arg1;
- (void)_updateHandlersForEvent:(unsigned long long)arg1;
- (void)noteScreenWillTurnOn;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOff;
- (void)_reevaluateMatching;
- (void)_setDeviceLocked:(_Bool)arg1;
- (void)setLockScreenTopmost:(_Bool)arg1;
- (void)_setMatchingEnabled:(_Bool)arg1;
- (void)_stopMatching;
- (void)_startMatching;
- (void)_stopFingerDetection;
- (void)_startFingerDetection;
- (void)setFingerDetectEnabled:(_Bool)arg1 requester:(id)arg2;
- (void)setMatchingDisabled:(_Bool)arg1 requester:(id)arg2;
- (id)stringForEvent:(unsigned long long)arg1;
- (_Bool)hasEnrolledIdentities;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
