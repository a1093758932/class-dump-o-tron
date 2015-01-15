//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKHostedViewController.h>

#import "GKAuthenticateViewController.h"

@class NSError, NSString;

@interface GKHostedAuthenticateViewController : GKHostedViewController <GKAuthenticateViewController>
{
    _Bool _disablesSignIn;
    _Bool _rotationLocked;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    long long _mode;
    CDUnknownBlockType _dismissCompletionHandler;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isRotationLocked) _Bool rotationLocked; // @synthesize rotationLocked=_rotationLocked;
@property(nonatomic) _Bool disablesSignIn; // @synthesize disablesSignIn=_disablesSignIn;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
