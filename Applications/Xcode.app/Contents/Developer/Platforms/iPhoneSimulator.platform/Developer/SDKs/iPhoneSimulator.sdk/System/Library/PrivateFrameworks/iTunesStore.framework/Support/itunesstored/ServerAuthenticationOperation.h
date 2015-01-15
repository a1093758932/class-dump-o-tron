//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class ISDialog, ISDialogButton, NSNumber, NSURL, SSAuthenticationContext;

@interface ServerAuthenticationOperation : ISOperation
{
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    _Bool _performsButtonAction;
    ISDialogButton *_performedButton;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
}

- (_Bool)_shouldSkipInitialDialog:(id)arg1;
- (_Bool)_shouldAuthenticateForButton:(id)arg1;
- (void)_handleSelectedButton:(id)arg1;
- (_Bool)_copySelectedButton:(id *)arg1 returningError:(id *)arg2;
- (id)_copyButtonToSkipDialog:(id)arg1;
- (id)_copyAuthenticationContext;
- (_Bool)_copyAccountIdentifier:(id *)arg1 returningError:(id *)arg2;
- (void)run;
@property _Bool performsButtonAction; // @synthesize performsButtonAction=_performsButtonAction;
@property(copy) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(readonly) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(readonly) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly) ISDialogButton *performedButton; // @synthesize performedButton=_performedButton;
@property(readonly) ISDialog *dialog; // @synthesize dialog=_dialog;
@property(readonly) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;
- (id)init;

@end
