//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@interface DVTScopeBarButtonCell : NSButtonCell
{
    BOOL _rollover;
}

- (double)_roundedRectRadius;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)backgroundStyle;
- (long long)nextState;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_dvt_scopeBarButtonCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

