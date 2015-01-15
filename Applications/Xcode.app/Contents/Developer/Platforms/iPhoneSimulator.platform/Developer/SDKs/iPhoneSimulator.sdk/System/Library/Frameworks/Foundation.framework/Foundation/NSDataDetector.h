//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSRegularExpression.h>

@interface NSDataDetector : NSRegularExpression
{
    unsigned long long _types;
}

+ (id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id *)arg2;
+ (void)initialize;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)numberOfCaptureGroups;
- (unsigned long long)options;
- (id)pattern;
@property(readonly) unsigned long long checkingTypes;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithTypes:(unsigned long long)arg1 error:(id *)arg2;

@end
