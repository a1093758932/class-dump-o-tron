//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString;

@interface PFTTrackMarker : NSView
{
    NSString *_name;
    NSString *_label;
    struct CGPoint _location;
    struct CGSize _scale;
    BOOL _pointToCenter;
    BOOL _pointDown;
    BOOL _goLeft;
    BOOL _markerIsHidden;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)goLeft;
- (void)setGoLeft:(BOOL)arg1;
- (BOOL)pointDown;
- (void)setPointDown:(BOOL)arg1;
- (BOOL)pointToCenter;
- (void)setPointToCenter:(BOOL)arg1;
- (struct CGSize)size;
- (struct CGSize)scale;
- (void)setScale:(struct CGSize)arg1;
- (struct CGPoint)location;
- (void)setLocation:(struct CGPoint)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)markerIsHidden;
- (void)setMarkerIsHidden:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

@end

