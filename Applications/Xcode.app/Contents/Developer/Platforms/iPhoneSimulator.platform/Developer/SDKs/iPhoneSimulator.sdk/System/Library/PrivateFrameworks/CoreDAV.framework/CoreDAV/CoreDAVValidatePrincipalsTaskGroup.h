//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVTaskDelegate.h"

@class NSMutableSet, NSSet, NSString, NSURL;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSMutableSet *_urlsToExamine;
    NSMutableSet *_principalURLs;
    NSURL *_urlBeingExamined;
    _Bool _authError;
}

@property(readonly, nonatomic) _Bool didReceiveAuthenticationError; // @synthesize didReceiveAuthenticationError=_authError;
@property(retain, nonatomic) NSURL *urlBeingExamined; // @synthesize urlBeingExamined=_urlBeingExamined;
@property(retain, nonatomic) NSMutableSet *principalURLs; // @synthesize principalURLs=_principalURLs;
@property(retain, nonatomic) NSMutableSet *urlsToExamine; // @synthesize urlsToExamine=_urlsToExamine;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_fetchNextURL;
- (void)_finishWithError:(id)arg1;
@property(readonly, nonatomic) NSSet *resultPrincipalURLs;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

