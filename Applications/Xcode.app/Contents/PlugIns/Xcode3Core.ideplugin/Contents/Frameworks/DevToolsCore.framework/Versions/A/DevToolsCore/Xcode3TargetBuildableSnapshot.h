//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEBuildableSnapshot.h"

@class DVTMapTable, NSCountedSet, NSMutableArray, NSMutableSet, Xcode3BuildOperationManager, Xcode3Target;

@interface Xcode3TargetBuildableSnapshot : IDEBuildableSnapshot
{
    NSMutableArray *_remainingBuildTasks;
    DVTMapTable *_shadowCommandsToBuildTasks;
    NSMutableSet *_buildTasksOwnedByOtherBuilders;
    NSCountedSet *_numberOfTasksToRunByCommandType;
    NSCountedSet *_numberOfTasksStartedByCommandType;
    unsigned long long _numberOfTasksToRun;
    unsigned long long _numberOfTasksStarted;
    Xcode3BuildOperationManager *_operationManager;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)cleanupForBuilder:(id)arg1;
- (void)builderWasCancelled:(id)arg1;
- (void)buildDidFinishForBuilder:(id)arg1 buildPlan:(id)arg2;
- (id)buildTaskForBuildCommand:(id)arg1 builder:(id)arg2;
- (BOOL)prepareForBuildingWithBuildPlan:(id)arg1;
- (id)buildPlanForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (id)_computeDerivedPrebuildBuildPlan;
- (id)_buildPlanForBuilder:(id)arg1 buildCommand:(int)arg2 inputFiles:(id)arg3 outputFileExtensionBlock:(CDUnknownBlockType)arg4 subprocessCommandLineGenerationBlock:(CDUnknownBlockType)arg5;
- (id)_outputFileCommandForInputNode:(id)arg1 buildCommand:(int)arg2 inBuildContext:(id)arg3;
- (id)_buildTaskForWorkQueueCommand:(id)arg1 builder:(id)arg2;
- (BOOL)buildForBuilderWillStart:(id)arg1;
- (void)_createActivityLogSection;
- (BOOL)prepareForBuildingForBuilder:(id)arg1;
- (void)_buildCommandDidRestoreCachedOutputs:(id)arg1;
- (void)_updateBuildOperationStatusForBuilder:(id)arg1 buildTask:(id)arg2;
- (void)_buildTaskDidStartForBuilder:(id)arg1 buildTask:(id)arg2;
@property(readonly) Xcode3Target *target;
- (id)initFromBuildable:(id)arg1 withManager:(id)arg2 withBuildParameters:(id)arg3;

@end

