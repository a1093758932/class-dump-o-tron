//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CKAudioSessionController : NSObject
{
    _Bool _active;
    _Bool _shouldUseSpeaker;
    _Bool _dirty;
}

+ (id)queue;
+ (id)shareInstance;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property _Bool shouldUseSpeaker; // @synthesize shouldUseSpeaker=_shouldUseSpeaker;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)configureAudioSession:(_Bool)arg1;
- (void)setActive:(_Bool)arg1 shouldUseSpeaker:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deactivate;
- (void)activateUsingSpeaker:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

@end
