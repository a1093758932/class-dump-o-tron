//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalPreferences;

@interface EKPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
@property(nonatomic) _Bool enableTravelAdvisoriesForAutomaticBehavior;
@property(nonatomic) double travelEngineThrottlePeriod;
- (id)init;

@end
