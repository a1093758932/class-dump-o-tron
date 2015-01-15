//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFTTrackBrush : NSObject
{
    BOOL _thumbScale;
}

@property BOOL thumbScale; // @synthesize thumbScale=_thumbScale;
- (BOOL)requiresBackground;
- (BOOL)cachingAllowed;
- (void)updateMarkersForTrackSegment:(id)arg1 forInstrument:(id)arg2 forRun:(id)arg3 startIndex:(unsigned long long)arg4 length:(unsigned long long)arg5 inRect:(struct CGRect)arg6 usingScale:(struct CGSize)arg7 recordingHeadLocation:(double)arg8 inspectionHead:(double)arg9;
- (void)drawAboveRun:(id)arg1 forInstrument:(id)arg2 inRect:(struct CGRect)arg3 visibleRect:(struct CGRect)arg4 usingScale:(struct CGSize)arg5 recordingHeadLocation:(double)arg6 inspectionHead:(double)arg7;
- (void)drawTrackSegment:(id)arg1 eventRange:(struct _NSRange)arg2 inRect:(struct CGRect)arg3;

@end
