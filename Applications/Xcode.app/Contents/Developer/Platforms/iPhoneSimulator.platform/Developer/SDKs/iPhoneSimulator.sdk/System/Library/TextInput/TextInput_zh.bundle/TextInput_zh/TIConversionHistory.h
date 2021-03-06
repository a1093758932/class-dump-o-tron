//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableString, NSString, TIConvertedCandidate;

@interface TIConversionHistory : NSObject
{
    _Bool _inputChangedSinceLastConversion;
    _Bool _invalid;
    NSMutableArray *_convertedCandidates;
    NSArray *_convertedCandidateRefs;
    NSMutableString *_mutableConvertedCandidateText;
    NSMutableArray *_mutableConvertedCandidateRefs;
}

@property(retain, nonatomic) NSMutableArray *mutableConvertedCandidateRefs; // @synthesize mutableConvertedCandidateRefs=_mutableConvertedCandidateRefs;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) NSMutableString *mutableConvertedCandidateText; // @synthesize mutableConvertedCandidateText=_mutableConvertedCandidateText;
@property(retain, nonatomic) NSMutableArray *convertedCandidates; // @synthesize convertedCandidates=_convertedCandidates;
@property(nonatomic) _Bool inputChangedSinceLastConversion; // @synthesize inputChangedSinceLastConversion=_inputChangedSinceLastConversion;
@property(readonly, nonatomic) NSArray *convertedCandidateRefs; // @synthesize convertedCandidateRefs=_convertedCandidateRefs;
@property(readonly, nonatomic) TIConvertedCandidate *lastConvertedCandidate;
- (_Bool)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)arg1;
- (void)didRevertLastConvertedCandidate;
- (void)addCandidate:(id)arg1 candidateRef:(id)arg2 replacedAmbiguousPinyinSyllable:(id)arg3 replacementUnambiguousPinyinSyllable:(id)arg4 convertedInput:(id)arg5;
- (_Bool)isValid;
- (void)invalidate;
@property(readonly, nonatomic) NSString *convertedCandidateText;
@property(readonly, nonatomic) unsigned long long convertedLength;
- (void)clear;
- (void)dealloc;
- (id)init;

@end

