//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHUnretainedParent.h"

@class TSCH3DChartAnimation, TSCH3DChartRep, TSCH3DScene;

__attribute__((visibility("hidden")))
@interface TSCH3DChartAnimationEngine : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartRep *mRep;
    long long mStage;
    TSCH3DChartAnimation *mAnimation;
}

+ (id)animationEngineWithRep:(id)arg1;
@property(nonatomic) long long stage; // @synthesize stage=mStage;
@property(readonly, nonatomic) TSCH3DChartAnimation *animation; // @synthesize animation=mAnimation;
- (void)updateTimings;
@property(readonly, nonatomic) TSCH3DScene *layoutScene;
@property(readonly, nonatomic) TSCH3DScene *scene;
- (void)update:(float)arg1;
@property(retain, nonatomic) Class animationClass;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end

