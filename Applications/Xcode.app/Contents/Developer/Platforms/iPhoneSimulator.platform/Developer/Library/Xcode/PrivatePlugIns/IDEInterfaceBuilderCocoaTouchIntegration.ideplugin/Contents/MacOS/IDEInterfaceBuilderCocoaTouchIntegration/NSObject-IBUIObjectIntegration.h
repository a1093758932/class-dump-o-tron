//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (IBUIObjectIntegration)
+ (id)ibSwizzledCocoaTouchNSObjectInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void)ibCocoaTouchToolFontsDidChange;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)ibPrepareToBackwardsDeployToIOS7InDocument:(id)arg1;
- (void)ibPopulateAdditionalKeyValuePairs:(id)arg1 forCompilationWithMarshallingContext:(id)arg2;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (BOOL)ibPresentsSimulatedMetricsInDocument:(id)arg1;
- (BOOL)ibInspectedSupportsOrientationMetrics;
- (BOOL)ibInspectedSupportsBottomBarMetrics;
- (BOOL)ibInspectedSupportsTopBarMetrics;
- (BOOL)ibSupportsSimulatedMetrics;
- (BOOL)ibCanBePushedOnNavigationController;
- (id)ibSwizzledSearchableStringValueForPrimitiveValue:(id)arg1 atLocation:(id)arg2 inDocument:(id)arg3;
- (BOOL)ibWantsAddContentToExistCollectionForOriginatedOutletCollection:(id)arg1;
- (id)ibDescriptionWithOID;
- (void)ibSwizzledCocoaTouchNSObjectWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibSwizzledCocoaTouchNSObjectWarnings:(id)arg1 forUserDefinedRuntimeAttributes:(id)arg2 forDocument:(id)arg3 withComputationContext:(id)arg4;
- (BOOL)ibSwizzledCocoaTouchNSObjectCouldIssueWarningsForUserDefinedRuntimeAttributesForDocument:(id)arg1;
- (BOOL)ibRequiresLayoutInfoInCocoaTouchToolDuringCompilationOfDocument:(id)arg1;
- (void)ibPopulateCompilationMarshallingContext:(id)arg1 forDocument:(id)arg2;
- (unsigned long long)ibPreferredActionEventType;
@end

