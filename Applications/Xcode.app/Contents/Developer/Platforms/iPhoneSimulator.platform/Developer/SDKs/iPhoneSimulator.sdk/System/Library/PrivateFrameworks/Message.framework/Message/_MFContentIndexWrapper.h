//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _MFContentIndexWrapper : NSObject
{
    struct __CXIndex *_contentIndex;
    int _transactionCount;
}

- (_Bool)performTransaction:(CDUnknownBlockType)arg1;
- (struct __CXIndex *)contentIndex;
- (void)dealloc;
- (id)initWithContentIndex:(struct __CXIndex *)arg1;

@end

