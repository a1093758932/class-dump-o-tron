//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class NSString;

@interface FBSContext : NSObject <BSXPCCoding>
{
    unsigned int _identifier;
    double _level;
}

+ (id)contextWithSceneContext:(id)arg1;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

