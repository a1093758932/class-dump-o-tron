//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADSCreativeContainerViewDelegate.h"

@class ADSActionViewController, ADSAdImpressionController, ADSAdSpace, ADSCreativeController, ADSSession, NSString, NSTimer, NSURL;

@interface ADSAdSpaceController : NSObject <ADSCreativeContainerViewDelegate>
{
    ADSSession *_session;
    ADSAdSpace *_adSpace;
    _Bool _actionInProgress;
    _Bool _isOpen;
    _Bool _holdingAssertion;
    _Bool _hasSentWillLoad;
    _Bool _devBackoffScheduled;
    int _adType;
    NSString *_section;
    ADSAdImpressionController *_adImpressionController;
    id _hostedWindowHandle;
    NSString *_controllerIdentifier;
    NSURL *_serverURL;
    ADSCreativeController *_currentCreativeController;
    ADSActionViewController *_currentActionViewController;
    double _actionViewControllerRequestTime;
    long long _adRequestToken;
    NSTimer *_processVisibilityTimer;
    ADSAdImpressionController *_loadingAdImpressionController;
    double _actionViewControllerAppearanceTime;
    double _createdAt;
    NSTimer *_loadActionViewControllerTimer;
    CDUnknownBlockType _beginActionCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType beginActionCompletionHandler; // @synthesize beginActionCompletionHandler=_beginActionCompletionHandler;
@property(retain, nonatomic) NSTimer *loadActionViewControllerTimer; // @synthesize loadActionViewControllerTimer=_loadActionViewControllerTimer;
@property(nonatomic) double createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) _Bool devBackoffScheduled; // @synthesize devBackoffScheduled=_devBackoffScheduled;
@property(nonatomic) _Bool hasSentWillLoad; // @synthesize hasSentWillLoad=_hasSentWillLoad;
@property(nonatomic) double actionViewControllerAppearanceTime; // @synthesize actionViewControllerAppearanceTime=_actionViewControllerAppearanceTime;
@property(nonatomic) _Bool holdingAssertion; // @synthesize holdingAssertion=_holdingAssertion;
@property(retain, nonatomic) ADSAdImpressionController *loadingAdImpressionController; // @synthesize loadingAdImpressionController=_loadingAdImpressionController;
@property(retain, nonatomic) NSTimer *processVisibilityTimer; // @synthesize processVisibilityTimer=_processVisibilityTimer;
@property(readonly, nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) long long adRequestToken; // @synthesize adRequestToken=_adRequestToken;
@property(nonatomic) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic) double actionViewControllerRequestTime; // @synthesize actionViewControllerRequestTime=_actionViewControllerRequestTime;
@property(retain, nonatomic) ADSActionViewController *currentActionViewController; // @synthesize currentActionViewController=_currentActionViewController;
@property(retain, nonatomic) ADSCreativeController *currentCreativeController; // @synthesize currentCreativeController=_currentCreativeController;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(nonatomic) int adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) NSString *controllerIdentifier; // @synthesize controllerIdentifier=_controllerIdentifier;
@property(readonly, nonatomic) id hostedWindowHandle; // @synthesize hostedWindowHandle=_hostedWindowHandle;
@property(retain, nonatomic) ADSAdImpressionController *adImpressionController; // @synthesize adImpressionController=_adImpressionController;
@property(readonly, copy) NSString *description;
- (void)storyboardRequestsOpenURL:(id)arg1;
- (void)storyboardFinishedFirstLoad;
- (void)actionCompletedWithSystemEvent:(int)arg1;
- (void)dismissPortraitOnlyModalViewControllerAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentPortraitOnlyModalViewControllerAnimated:(_Bool)arg1;
- (void)cancelAction;
- (void)refuseAction;
- (void)actionViewControllerReadyForPresentation;
- (void)requestForActionViewControllerTimedOut;
- (void)beginActionFromFrame:(struct CGRect)arg1 tapLocation:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preRollDidStop;
- (void)preRollDidStart;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStartedForImpressionSource:(int)arg1;
- (void)playbackFailedForURL:(id)arg1;
- (void)playbackFinishedForContentHash:(id)arg1;
- (void)creativeContainerViewLayoutDidBecomeInvalid:(id)arg1;
- (void)interstitialCreativeWasDismissed;
- (void)interstitialRemovedFromSuperview;
- (void)processAdSpaceVisibility:(long long)arg1;
- (void)_scheduledProcessAdSpaceVisibility:(id)arg1;
- (double)_cyclingInterval;
@property(readonly, nonatomic) _Bool hasAd;
- (void)_resetAdRequest;
- (void)_requestAd;
- (void)_cancelCurrentAdRequest;
- (void)_unloadCurrentAd;
- (void)willLoadAd;
- (void)_test_clearCurrentAd;
- (void)_handleAdError:(id)arg1 forAdData:(id)arg2;
- (void)_handleAdLoad;
- (void)loadAdData:(id)arg1 error:(id)arg2;
- (id)_sanitizeRequestFailure:(id)arg1;
- (void)clientApplicationWillEnterForeground;
- (void)clientApplicationDidEnterBackground;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
- (void)close;
@property(nonatomic) __weak ADSAdSpace *adSpace;
@property(nonatomic) ADSSession *session;
- (id)initForAdSpace:(id)arg1 session:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

