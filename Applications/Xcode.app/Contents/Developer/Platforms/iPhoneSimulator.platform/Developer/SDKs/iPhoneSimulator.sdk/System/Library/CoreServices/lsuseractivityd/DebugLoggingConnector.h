//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CornerActionItemConnectorProtocol.h"

@class CornerActionManager, NSDate, NSString, NSURL;

@interface DebugLoggingConnector : NSObject <CornerActionItemConnectorProtocol>
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *file;
    NSURL *loggingFileURL;
    _Bool paused;
    NSDate *lastLogEntryTime;
    CornerActionManager *_cornerActionManager;
}

@property(readonly, copy) CornerActionManager *cornerActionManager; // @synthesize cornerActionManager=_cornerActionManager;
- (void).cxx_destruct;
- (id)statusString;
- (void)flush;
- (void)terminate;
- (void)resume;
- (void)suspend;
- (id)items;
- (void)removeItem:(id)arg1;
- (void)itemChanged:(id)arg1;
- (void)updateItem:(id)arg1;
- (void)addItem:(id)arg1;
- (_Bool)acceptsItem:(id)arg1;
- (void)resumeLogging;
- (void)pauseLogging;
- (void)logTimeDelta;
- (void)logString:(id)arg1;
- (void)setLogFilePath:(id)arg1;
- (void)dealloc;
- (id)initWithManager:(id)arg1 path:(id)arg2;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

