//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, XRKEventsThread;

@protocol XRKEventsThread
@property(readonly) unsigned long long tid;
@property(readonly) NSString *threadDisplayName;
@property(retain) XRKEventsThread *parentThread;
- (BOOL)isAliveInTimeRange:(struct XRTimeRange)arg1;
@end
