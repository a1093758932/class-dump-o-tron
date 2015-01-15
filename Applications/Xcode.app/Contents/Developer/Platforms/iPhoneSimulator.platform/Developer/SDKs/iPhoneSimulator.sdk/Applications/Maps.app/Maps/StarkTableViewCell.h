//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class StarkSearchCompletionGlyphViewLayout, StarkTableViewCellContentView;

__attribute__((visibility("hidden")))
@interface StarkTableViewCell : UITableViewCell
{
    StarkSearchCompletionGlyphViewLayout *_layout;
    StarkTableViewCellContentView *_actualContentView;
}

+ (Class)layoutClass;
+ (id)cellForTable:(id)arg1 reuseIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateLayoutState;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNeedsLayoutForChanges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) StarkSearchCompletionGlyphViewLayout *layout; // @synthesize layout=_layout;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end
