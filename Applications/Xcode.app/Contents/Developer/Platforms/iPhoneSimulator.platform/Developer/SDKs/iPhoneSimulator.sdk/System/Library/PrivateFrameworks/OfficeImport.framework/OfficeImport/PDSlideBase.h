//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, OADBackground, OADShape, OADTableStyle, PDAnimation, PDTransition;

__attribute__((visibility("hidden")))
@interface PDSlideBase : NSObject
{
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    OADTableStyle *mDefaultTableStyle;
    unsigned int mIsHidden:1;
    unsigned int mIsDoneWithContent:1;
    _Bool mCachedSlideNumberShape;
    OADShape *mSlideNumberShape;
    _Bool mCachedSlideNumberPlaceholder;
    OADShape *mSlideNumberPlaceholder;
}

+ (int)inheritedPlaceholderType:(int)arg1;
- (void)generatePpt9Animations:(id)arg1;
- (_Bool)hasPpt9Animations;
- (_Bool)hasPpt10Animations;
- (id)drawingTheme;
- (void)doneWithContent;
- (void)setDefaultTableStyle:(id)arg1;
- (id)defaultTableStyle;
- (void)setIsHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (id)styleMatrix;
- (id)colorMap;
- (id)fontScheme;
- (id)colorScheme;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
@property(readonly, nonatomic) _Bool hasMappableSlideNumberShape;
@property(readonly, nonatomic) OADShape *slideNumberPlaceholder;
@property(readonly, nonatomic) OADShape *slideNumberShape;
- (id)placeholders;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(_Bool)arg3 overrideIndex:(_Bool)arg4;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)defaultTheme;
- (void)setTransition:(id)arg1;
- (id)transition;
- (id)animation;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)drawables;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3;
- (void)addSlideNumberPlaceholder:(id)arg1;

@end
