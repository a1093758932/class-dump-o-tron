//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITunesActivity, ITunesPackage, MZLiveSearchField, MZWorkItem, NSButton, NSDictionary, NSMutableArray, NSTextField, NSTimer, NSWindow;

@interface LookupMetadataActivity : NSObject
{
    NSWindow *window;
    NSButton *lookupButton;
    NSButton *abortButton;
    MZLiveSearchField *vendorIdField;
    NSTextField *statusField;
    ITunesActivity *_activity;
    ITunesPackage *_package;
    MZWorkItem *_lookupWorker;
    NSMutableArray *_lookupWorkers;
    NSTimer *_lookupTimer;
    NSWindow *_nonretainedWindow;
    NSButton *_nonRetainedLookupButton;
    NSDictionary *_userInfo;
}

+ (id)displayEditorForActivity:(id)arg1 package:(id)arg2 bypassStatusLookup:(BOOL)arg3 switchToImportTab:(BOOL)arg4;
- (SEL)action;
- (id)content;
- (void)lookupCompleted:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)lookupCompleted:(id)arg1;
- (void)processLookupResults:(id)arg1;
- (id)buildAndTestPackage:(id)arg1 identifier:(id)arg2;
- (BOOL)openAlternativePackage:(id)arg1 identifier:(id)arg2;
- (BOOL)openFilmOrTVPackage:(id)arg1 element:(id)arg2 identifier:(id)arg3;
- (void)openFullOrAssetOnly:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)openAlternativePackageWithActivityChooser:(id)arg1;
- (id)convertFullPackageToAssetOnlyPackage:(id)arg1;
- (id)convertFullPackageElementToAssetOnlyPackageElement:(id)arg1;
- (void)displayAlert:(id)arg1;
- (id)fixUpCovertArt:(id)arg1 package:(id)arg2;
- (BOOL)willAssetRequireRedelivery:(id)arg1;
- (void)processLookedUpMetadata:(id)arg1 forIdentifier:(id)arg2 activityWindow:(id)arg3 remainingLookUpsForProcessing:(id)arg4;
- (void)updateUI:(id)arg1;
- (id)operationResults;
- (BOOL)windowShouldClose:(id)arg1;
- (void)willInvokePrevious:(id)arg1;
- (void)_cleanup;
- (void)abort:(id)arg1;
- (void)next:(id)arg1;
- (void)metadataLookupForIdentifiers:(id)arg1;
- (void)startLookupTimer;
- (void)shutdownLookupTimer;
- (void)display;
- (void)loadInterface;
- (void)resetUI;
- (void)setActivity:(id)arg1;
- (void)dealloc;
- (id)initWithActivity:(id)arg1;

@end

