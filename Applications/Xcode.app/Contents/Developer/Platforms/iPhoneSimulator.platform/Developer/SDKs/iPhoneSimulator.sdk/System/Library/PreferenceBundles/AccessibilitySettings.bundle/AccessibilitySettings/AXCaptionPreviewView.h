//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class AXCaptionSubtitlePreviewView, AXThreadTimer, NSTimer, UIButton, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface AXCaptionPreviewView : UIControl
{
    UIView *_whiteBottomBorder;
    AXCaptionSubtitlePreviewView *_subtitle;
    UIButton *_expandCollapseButton;
    _Bool _isExpanded;
    UIView *_cloudContainer;
    UIImageView *_cloudView1;
    UIImageView *_cloudView2;
    NSTimer *_cloudTimer;
    long long _cloudIndex;
    long long _viewIndex;
    double _movementEndTime;
    _Bool _animationsRunning;
    _Bool _fadeInProgress;
    _Bool _cloud1MoveInProgress;
    _Bool _cloud2MoveInProgress;
    AXThreadTimer *_updateSettingsTimer;
    _Bool transitioningToSmallerView;
    _Bool transitioningToBiggerView;
    id <AXCaptionPreviewDelegate> previewDelegate;
    struct CGPoint originalCenter;
    struct CGRect visibleFrame;
    struct CGRect originalFrame;
}

@property(nonatomic) _Bool transitioningToBiggerView; // @synthesize transitioningToBiggerView;
@property(nonatomic) _Bool transitioningToSmallerView; // @synthesize transitioningToSmallerView;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame;
@property(nonatomic) id <AXCaptionPreviewDelegate> previewDelegate; // @synthesize previewDelegate;
- (void)showNextImage;
- (id)currentSlide;
- (id)nextSlide;
- (void)_updateButtonStyle;
- (void)stopBackgroundAnimation;
- (void)_expandPressed:(id)arg1;
- (void)layoutSubviews;
- (void)updateExpandButtonPosition;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)_xOffset;
- (id)cloudImages;
- (void)_updateSubtitle:(id)arg1;
- (void)_previewTapped:(id)arg1;
@property(readonly, nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame;
- (_Bool)inTable;
- (id)captionCell;

@end
