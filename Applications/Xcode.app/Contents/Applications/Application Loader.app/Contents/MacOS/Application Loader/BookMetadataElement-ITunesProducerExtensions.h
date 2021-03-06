//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BookMetadataElement.h"

@interface BookMetadataElement (ITunesProducerExtensions)
+ (id)publicationTextbookTypeCode;
+ (id)defaultPublicationBookTypeCode;
+ (id)keyPathsForValuesAffectingLongExplicitContent;
+ (id)keyPathsForValuesAffectingExplicitContent;
+ (id)keyPathsForValuesAffectingWhatsNewAppliesToVersion;
+ (id)keyPathsForValuesAffectingVersionWhatsNewText;
+ (id)keyPathsForValuesAffectingCanAddFreeAudienceScheme;
+ (id)keyPathsForValuesAffectingCanAddAudienceScheme;
+ (id)keyPathsForValuesAffectingSubjectIdentifier;
- (void)setLongExplicitContent:(id)arg1;
- (id)longExplicitContent;
- (id)allowedExplicitContent;
- (id)subjectIdentifier;
- (id)primarySubjectForScheme:(id)arg1;
- (BOOL)schemeHasNoPrimarySubject:(id)arg1;
- (id)allowedSubjectSchemeNames;
- (void)setLongPublicationBookType:(id)arg1;
- (id)longPublicationBookType;
- (id)localizedAllowedRelatedProductCodeNames;
- (void)setPrintIsbn:(id)arg1;
- (id)printIsbn;
- (id)allowedRelatedProductCodeNames;
- (void)setLanguages:(id)arg1;
- (void)setDefaultLanguage:(id)arg1;
- (id)defaultLanguage;
- (id)publicationAppliesToVersionNames;
- (void)setWhatsNewAppliesToVersion:(id)arg1;
- (id)whatsNewAppliesToVersion;
- (void)setVersionWhatsNewText:(id)arg1;
- (id)versionWhatsNewText;
- (void)setBookDescriptionAttributedString:(id)arg1;
- (id)bookDescriptionAttributedString;
- (id)bookDescriptionInsertingIfNeeded;
- (id)bookDescription;
- (id)allowedPublicationBookTypes;
- (BOOL)canAddFreeAudienceScheme;
- (id)freeTargetAudienceSchemeNames;
- (BOOL)canAddAudienceScheme;
- (id)allowedPublicationPublisherCodeTypes;
- (id)allowedPublicationPublisherRoles;
- (id)allowedPublicationFreeContributorRoles;
- (id)allowedPublicationContributorRoles;
- (id)allowedPublicationAdditionalSubjectTypes;
- (id)allowedPublicationSubjectTypes;
- (id)allowedPublicationTitleTypes;
- (id)allowedPublicationLanguageNames;
- (id)allowedPublicationProductIdentifiers;
@end

