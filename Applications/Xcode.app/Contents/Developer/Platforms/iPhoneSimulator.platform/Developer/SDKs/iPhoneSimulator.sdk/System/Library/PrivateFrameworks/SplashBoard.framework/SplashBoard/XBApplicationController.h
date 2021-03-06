//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationLibraryPreInstallClient.h"

@class FBApplicationLibrary, NSString;

@interface XBApplicationController : NSObject <FBApplicationLibraryPreInstallClient>
{
    FBApplicationLibrary *_applicationLibrary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBApplicationLibrary *applicationLibrary; // @synthesize applicationLibrary=_applicationLibrary;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgetApp:(_Bool)arg2;
- (void)_removeAllCachedLaunchImages;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationLibrary:(id)arg1 _willNotify_didReplaceApplications:(id)arg2 withApplications:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applicationLibrary:(id)arg1 _willNotify_didAddApplications:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

