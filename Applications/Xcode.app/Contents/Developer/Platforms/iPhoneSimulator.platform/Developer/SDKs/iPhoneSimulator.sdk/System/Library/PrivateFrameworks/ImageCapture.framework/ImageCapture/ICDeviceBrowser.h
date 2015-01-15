//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
}

- (id)internalDevices;
@property(readonly) NSArray *devices;
- (void)stop;
- (int)start;
@property(readonly, getter=isBrowsing) _Bool browsing;
@property id <ICDeviceBrowserDelegate> delegate;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
