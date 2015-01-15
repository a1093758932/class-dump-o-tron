//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class DVTFilePathField, DVTStepperTextField;

@interface SKEMaterialPropertyDetailsCellView : NSTableCellView
{
    DVTFilePathField *_fullPath;
    DVTFilePathField *_relativePath;
    DVTStepperTextField *_scrubber;
}

@property __weak DVTStepperTextField *scrubber; // @synthesize scrubber=_scrubber;
@property __weak DVTFilePathField *relativePath; // @synthesize relativePath=_relativePath;
@property __weak DVTFilePathField *fullPath; // @synthesize fullPath=_fullPath;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end
