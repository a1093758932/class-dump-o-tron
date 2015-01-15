//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DADaemonCardDAV/CardDAVDaemonAccount.h>

#import "NSURLConnectionDelegate.h"

@class NSError, NSMutableData, NSString;

@interface CardDAViCloudDaemonAccount : CardDAVDaemonAccount <NSURLConnectionDelegate>
{
    _Bool _fetchingImageData;
    int _useSSLOverride;
    NSMutableData *_fetchedImageData;
    NSError *_fetchImageError;
    NSString *_hostOverride;
    long long _portOverride;
}

@property(nonatomic) long long portOverride; // @synthesize portOverride=_portOverride;
@property(nonatomic) int useSSLOverride; // @synthesize useSSLOverride=_useSSLOverride;
@property(retain, nonatomic) NSString *hostOverride; // @synthesize hostOverride=_hostOverride;
@property(retain, nonatomic) NSError *fetchImageError; // @synthesize fetchImageError=_fetchImageError;
@property(retain, nonatomic) NSMutableData *fetchedImageData; // @synthesize fetchedImageData=_fetchedImageData;
@property(nonatomic) _Bool fetchingImageData; // @synthesize fetchingImageData=_fetchingImageData;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)setBestMeCard;
- (_Bool)updateMeCardWithWithConsumer:(id)arg1;
- (void)_reallySyncAddressBookURLsWithConsumer:(id)arg1;
- (id)copyImageContentsAtURL:(id)arg1 outError:(id *)arg2;
- (void)resetAccountID;
- (_Bool)_shouldWipeDataOnUpgradeFromAccountVersion:(int)arg1;
- (void *)newABSourceForContainer:(id)arg1;
- (_Bool)_handleOrphanarium:(struct __CFArray *)arg1 toBeCreatedContainersByURL:(id)arg2;
- (_Bool)shouldCompressRequests;
- (_Bool)shouldSendClientInfoHeaderForURL:(id)arg1;
- (_Bool)shouldHandleHTTPCookiesForURL:(id)arg1;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (long long)port;
- (void)setPort:(long long)arg1;
- (_Bool)useSSL;
- (void)setUseSSL:(_Bool)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (id)initWithBackingAccountInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
