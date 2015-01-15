//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput_zh/TIKeyboardInputManagerShapeBased.h>

#import "TIKeyboardInputManagerChineseCompletion.h"

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>
{
    TIKeyboardCandidate *_autoConfirmationCandidate;
}

+ (id)ASCIIToWubi:(id)arg1;
+ (id)wubiToASCIIMap;
+ (Class)wordSearchClass;
@property(retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate; // @synthesize autoConfirmationCandidate=_autoConfirmationCandidate;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)arg1;
- (_Bool)supportsPairedPunctutationInput;
- (_Bool)isWubi:(id)arg1;
- (id)wubiToAscii:(id)arg1;
- (id)inputsToReject;
- (_Bool)acceptInputString:(id)arg1;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (void)closeCandidateGenerationContextWithResults:(id)arg1;
- (void)openCandidateGenerationContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (id)keyEventMap;
- (id)formattedSearchString;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)checkAutocorrectionDictionaries;
- (void)setInSplitKeyboardMode:(_Bool)arg1;
- (void)dealloc;

@end
