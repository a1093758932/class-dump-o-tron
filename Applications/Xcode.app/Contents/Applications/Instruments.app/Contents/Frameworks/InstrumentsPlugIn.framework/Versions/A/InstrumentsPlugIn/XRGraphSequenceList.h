//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, XRPathGroup;

@interface XRGraphSequenceList : NSObject
{
    NSMutableArray *_sequences;
    XRPathGroup *_pathGroup;
    double _peak;
}

+ (unsigned long long)pointCountInArray:(id)arg1;
@property(retain) XRPathGroup *cachedPathGroup; // @synthesize cachedPathGroup=_pathGroup;
- (unsigned long long)pointCount;
- (id)createMissingSequencesOfType:(Class)arg1 inTimeRange:(struct XRTimeRange)arg2;
- (id)sequencesAfterTime:(unsigned long long)arg1;
- (id)sequencesBeforeTime:(unsigned long long)arg1;
- (id)sequencesInTimeRange:(struct XRTimeRange)arg1;
- (BOOL)appendToRootSequence:(id)arg1 targetSequence:(id)arg2;
- (struct XRTimeRange)purgeSequencesIntersectingRange:(struct XRTimeRange)arg1;
- (void)consolidateSequence:(id)arg1;
- (void)removeSequence:(id)arg1;
- (void)addSequence:(id)arg1;
- (void)clearPathGroupCache;
- (void)dealloc;
- (id)init;

@end

