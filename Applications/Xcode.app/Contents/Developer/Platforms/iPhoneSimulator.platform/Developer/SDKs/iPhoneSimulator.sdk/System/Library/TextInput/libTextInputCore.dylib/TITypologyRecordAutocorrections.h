//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TITypologyRecord.h>

@class TIAutocorrectionList;

@interface TITypologyRecordAutocorrections : TITypologyRecord
{
    _Bool _listUIDisplayed;
    TIAutocorrectionList *_autocorrections;
}

@property(nonatomic) _Bool listUIDisplayed; // @synthesize listUIDisplayed=_listUIDisplayed;
@property(retain, nonatomic) TIAutocorrectionList *autocorrections; // @synthesize autocorrections=_autocorrections;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)applyToStatistic:(id)arg1;

@end

