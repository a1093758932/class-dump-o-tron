//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSNumber, NSString, NSThread, NSTimer;

@interface SGRTCLogging : NSObject <NSCoding>
{
    NSString *_path;
    NSMutableArray *_loggedEvents;
    struct _opaque_pthread_mutex_t _lock;
    NSTimer *_persistenceTimer;
    NSThread *_persistenceTimerThread;
    double _storeCreationDate;
    NSNumber *_version;
}

+ (id)inMemoryLogger;
+ (_Bool)createEmptyFileAtPath:(id)arg1;
+ (id)defaultLogger;
+ (id)defaultPath;
- (void).cxx_destruct;
- (id)metricNameForShortName:(id)arg1;
- (id)shortNameForMetricNamed:(id)arg1;
- (id)getLoggingString;
- (int)version;
- (void)enumerateLoggedEvents:(CDUnknownBlockType)arg1;
- (double)storeAge;
- (_Bool)storeToDisk;
- (_Bool)resetLogs;
- (_Bool)sendLogsUsingRTC;
- (void)logExceptionFromTemplate:(id)arg1;
- (void)logEventResponseWithTemplateShortName:(id)arg1 latencyInMs:(unsigned long long)arg2;
- (void)persistLogs;
- (void)updateAndScheduleDiskWrite;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggedEvents;
- (void)dealloc;
- (id)initWithFilename:(id)arg1;
- (id)initWithInMemoryStore;
- (id)init;

@end

