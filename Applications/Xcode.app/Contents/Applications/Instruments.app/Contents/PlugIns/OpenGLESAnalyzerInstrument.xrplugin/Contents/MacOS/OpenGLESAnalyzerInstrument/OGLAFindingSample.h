//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OGLAFindingBaseSample.h"

@class OGLAFlag, OGLATraceSample;

@interface OGLAFindingSample : OGLAFindingBaseSample
{
    OGLAFlag *_flag;
    OGLATraceSample *_responsibleCommand;
}

@property(retain, nonatomic) OGLATraceSample *responsibleCommand; // @synthesize responsibleCommand=_responsibleCommand;
@property(nonatomic) OGLAFlag *flag; // @synthesize flag=_flag;
@property(readonly, nonatomic) unsigned long long traceLineCount; // @dynamic traceLineCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
