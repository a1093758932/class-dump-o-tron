//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface UILabel (RCAdditions)
+ (void)rc_transitionFromLabel:(id)arg1 toLabelWithText:(id)arg2 sizeNewLabelToFit:(_Bool)arg3 duration:(double)arg4 newLabelTransitionCompleteHandler:(CDUnknownBlockType)arg5;
- (double)rc_distanceFromBaselineToCoordinate:(double)arg1 inView:(id)arg2;
@property(readonly, nonatomic) double rc_capOffsetFromTop;
@property(readonly, nonatomic) double rc_baselineOffsetFromBottom;
@end

