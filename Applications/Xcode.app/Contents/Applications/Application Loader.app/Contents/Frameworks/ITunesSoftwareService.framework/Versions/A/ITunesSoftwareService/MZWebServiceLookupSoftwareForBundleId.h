//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesSoftwareService/MZWebServiceLookupSoftwareVersions.h>

@class NSString;

@interface MZWebServiceLookupSoftwareForBundleId : MZWebServiceLookupSoftwareVersions
{
    NSString *_bundleId;
}

@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (id)processUncancelledSuccessfulResult:(id)arg1;
- (id)generateArgumentsWithError:(id *)arg1;
- (id)completedMessage;
- (id)runningMessage;
- (id)initialMessage;
- (id)operationMethod;
- (void)dealloc;

@end
