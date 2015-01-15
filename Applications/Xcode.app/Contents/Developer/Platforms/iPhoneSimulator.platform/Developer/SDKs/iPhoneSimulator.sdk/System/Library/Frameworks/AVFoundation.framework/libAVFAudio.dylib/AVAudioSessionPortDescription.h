//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSessionDataSourceDescription, NSArray, NSString;

@interface AVAudioSessionPortDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2;
+ (_Bool)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)initWithRawPortDescription:(id)arg1;
- (_Bool)privateMatchesRawDescription:(id)arg1;
- (id)privateGetID;
- (struct PortDescriptionImpl *)privateGetImplementation;
- (_Bool)setPreferredDataSource:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly) NSString *UID;
@property(readonly) AVAudioSessionDataSourceDescription *preferredDataSource;
@property(readonly) AVAudioSessionDataSourceDescription *selectedDataSource;
- (_Bool)isHeadphones;
@property(readonly) NSArray *dataSources;
@property(readonly) NSArray *channels;
@property(readonly) NSString *portName;
@property(readonly) NSString *portType;
- (unsigned long long)hash;
- (_Bool)isEqualToPort:(id)arg1 compareStrict:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
