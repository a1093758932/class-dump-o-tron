//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFAttachmentDataProvider.h"

@class MFMailMessage, MFMimePart, NSData, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProvider>
{
    NSData *_messageData;
    MFMimePart *_parentPart;
    MFMailMessage *_message;
}

- (id)messageForAttachment:(id)arg1;
- (_Bool)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id *)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (void)dealloc;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
