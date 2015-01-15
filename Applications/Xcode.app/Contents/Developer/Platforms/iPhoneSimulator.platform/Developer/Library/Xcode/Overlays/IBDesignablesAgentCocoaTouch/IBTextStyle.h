//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface IBTextStyle : NSObject
{
    NSString *_name;
    NSString *_archiveName;
    NSArray *_alternateNames;
    NSString *_deprecatesInto;
}

+ (id)deprecatedTextStyleWithName:(id)arg1 deprecatesInto:(id)arg2;
+ (id)textStyleWithName:(id)arg1 archiveName:(id)arg2;
+ (id)textStyleWithName:(id)arg1;
@property(retain, nonatomic) NSString *deprecatesInto; // @synthesize deprecatesInto=_deprecatesInto;
@property(retain, nonatomic) NSArray *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(retain, nonatomic) NSString *archiveName; // @synthesize archiveName=_archiveName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
