//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/__UIMovieScrubberAccessibility_super.h>

@interface UIMovieScrubberAccessibility : __UIMovieScrubberAccessibility_super
{
}

+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)arg1;
- (void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)arg1;
- (void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(int)arg1;
- (void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(int)arg1;
- (void)_accessibilityNotifyDelegateWillBeginEditing;
- (void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(_Bool)arg2;
- (void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(_Bool)arg2;
- (double)_accessibilitySliderDeltaForFrame:(struct CGRect)arg1;
- (id)accessibilityElements;
- (void)_accessibilityClearChildren;
- (_Bool)isAccessibilityElement;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_updateThumbLocation;
- (void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_initSubviews;
- (void)dealloc;
- (void)_setValue:(double)arg1 andSendAction:(_Bool)arg2;
- (void)setTrimEndValue:(double)arg1;
- (void)setTrimStartValue:(double)arg1;
- (void)setThumbIsVisible:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

@end

