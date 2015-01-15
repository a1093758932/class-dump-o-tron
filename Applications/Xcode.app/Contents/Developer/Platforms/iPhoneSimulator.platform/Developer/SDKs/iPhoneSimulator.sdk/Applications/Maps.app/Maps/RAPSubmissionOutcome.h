//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString;

__attribute__((visibility("hidden")))
@interface RAPSubmissionOutcome : NSObject
{
    CDUnknownBlockType _retry;
    NSString *_submissionID;
    NSData *_pushToken;
    NSString *_emailAddress;
    _Bool _contactBackIsInitiallySelected;
    NSError *_error;
}

@property(readonly, nonatomic) _Bool contactBackIsInitiallySelected; // @synthesize contactBackIsInitiallySelected=_contactBackIsInitiallySelected;
@property(readonly, nonatomic) NSData *pushNotificationsToken; // @synthesize pushNotificationsToken=_pushToken;
@property(readonly, nonatomic) NSString *contactBackEmailAddress; // @synthesize contactBackEmailAddress=_emailAddress;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)submitOptInForNotifications:(_Bool)arg1 contactBack:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)localizedNotificationExplanation;
- (id)localizedNotificationsSelectionLabel;
- (_Bool)shouldShowNotifications;
@property(readonly, nonatomic) NSString *localizedContactBackExplanation;
@property(readonly, nonatomic) NSString *localizedContactBackSelectionLabel;
@property(readonly, nonatomic) _Bool shouldShowContactBack;
- (id)localizedAcknowledgementMessageWithDefaultAttributes:(id)arg1 thankYouAttributes:(id)arg2 notificationAttributes:(id)arg3;
@property(readonly, nonatomic) NSString *localizedAcknowledgementMessage;
@property(readonly, nonatomic) _Bool shouldAccomodateForNotificationAcknowledgmentMessage;
@property(readonly, nonatomic) NSString *localizedAcknowledgementTitle;
@property(readonly, nonatomic) NSString *localizedRetryPromptTryAgainCommand;
@property(readonly, nonatomic) NSString *localizedRetryPromptCancelCommand;
@property(readonly, nonatomic) NSString *localizedRetryPromptMessage;
@property(readonly, nonatomic) NSString *localizedRetryPromptTitle;
- (void)retry;
@property(readonly, nonatomic) _Bool canRetry;
- (void)_commonInit;
- (id)_initWithSubmissionID:(id)arg1 allowsNotifications:(_Bool)arg2;
- (id)_initWithError:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;

@end
