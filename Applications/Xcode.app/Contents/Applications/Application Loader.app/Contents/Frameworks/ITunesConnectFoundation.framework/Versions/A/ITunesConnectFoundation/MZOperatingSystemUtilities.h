//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MZOperatingSystemUtilities : NSObject
{
}

+ (BOOL)isVersion:(id)arg1 greaterThanOrEqualToVersion:(id)arg2 error:(id *)arg3;
+ (BOOL)isVersion:(id)arg1 greaterThanVersion:(id)arg2 error:(id *)arg3;
+ (BOOL)isVersion:(id)arg1 lessThanOrEqualToVersion:(id)arg2 error:(id *)arg3;
+ (BOOL)isVersion:(id)arg1 lessThanVersion:(id)arg2 error:(id *)arg3;
+ (long long)compareVersion:(id)arg1 toVersion:(id)arg2 error:(id *)arg3;
+ (id)operatingSystemDescription;
+ (id)cpuArchitecture;
+ (int)operatingSystemArchitecture;
+ (id)systemVersionToString:(unsigned long long)arg1;
+ (id)systemVersionAsString;
+ (unsigned long long)systemVersion;

@end

