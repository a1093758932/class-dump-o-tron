//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

@interface XBLaunchImageProviderClient : BSBaseXPCClient
{
}

- (void)_sendMessageType:(long long)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (void)killService;
- (void)launchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_connectionInstanceUUID;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

@end
