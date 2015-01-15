//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DASettingsDataclassConfigurationViewController.h"

#import "DAOofResponseDelegate.h"

@class DAOofParams, DAOofSettingsInfo, PSSpecifier, UIView;

@interface ASSettingsDataclassConfigurationViewController : DASettingsDataclassConfigurationViewController <DAOofResponseDelegate>
{
    _Bool _outOfOfficeEnabled;
    UIView *_originalAccessoryView;
    PSSpecifier *_outOfOfficeSpecifier;
    DAOofSettingsInfo *_DASettingsInfo;
    DAOofParams *_serverOutOfOfficeInformation;
    unsigned long long _numberOfRetriedFetchingOutOfOfficeCounter;
}

+ (_Bool)isHotmailAccount;
@property(nonatomic) unsigned long long numberOfRetriedFetchingOutOfOfficeCounter; // @synthesize numberOfRetriedFetchingOutOfOfficeCounter=_numberOfRetriedFetchingOutOfOfficeCounter;
@property(nonatomic) _Bool outOfOfficeEnabled; // @synthesize outOfOfficeEnabled=_outOfOfficeEnabled;
@property(retain, nonatomic) DAOofParams *serverOutOfOfficeInformation; // @synthesize serverOutOfOfficeInformation=_serverOutOfOfficeInformation;
@property(retain, nonatomic) DAOofSettingsInfo *DASettingsInfo; // @synthesize DASettingsInfo=_DASettingsInfo;
@property(retain, nonatomic) PSSpecifier *outOfOfficeSpecifier; // @synthesize outOfOfficeSpecifier=_outOfOfficeSpecifier;
@property(retain, nonatomic) UIView *originalAccessoryView; // @synthesize originalAccessoryView=_originalAccessoryView;
- (void).cxx_destruct;
- (void)_purgeDownloadedMailForAccount;
- (id)outOfOfficeEnabled:(id)arg1;
- (void)setAccountIntegerProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountIntegerPropertyWithSpecifier:(id)arg1;
- (id)numFoldersToPushString:(id)arg1;
- (void)saveOutOfOfficeData:(id)arg1;
- (void)fetchingOutOfOfficeState;
- (void)oofRequestInfo:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateOutOfOfficeSpecifier;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)otherSpecifiers;
- (id)specifiers;
- (id)accountDescriptionForFirstTimeSetup;
- (Class)accountInfoControllerClass;

@end
