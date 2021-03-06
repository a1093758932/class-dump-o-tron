//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _fileBytes;
    unsigned long long _timestamp;
    unsigned int _audioOnly;
    unsigned int _authMs;
    unsigned int _bitrate;
    unsigned int _bonjourMs;
    unsigned int _connectMs;
    unsigned int _duration;
    unsigned int _infoMs;
    unsigned int _postAuthMs;
    unsigned int _secureConnectionMs;
    NSString *_serverModel;
    NSString *_serverVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    unsigned int _type;
    struct {
        unsigned int fileBytes:1;
        unsigned int timestamp:1;
        unsigned int audioOnly:1;
        unsigned int authMs:1;
        unsigned int bitrate:1;
        unsigned int bonjourMs:1;
        unsigned int connectMs:1;
        unsigned int duration:1;
        unsigned int infoMs:1;
        unsigned int postAuthMs:1;
        unsigned int secureConnectionMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned int postAuthMs; // @synthesize postAuthMs=_postAuthMs;
@property(nonatomic) unsigned int authMs; // @synthesize authMs=_authMs;
@property(nonatomic) unsigned int secureConnectionMs; // @synthesize secureConnectionMs=_secureConnectionMs;
@property(nonatomic) unsigned int infoMs; // @synthesize infoMs=_infoMs;
@property(nonatomic) unsigned int connectMs; // @synthesize connectMs=_connectMs;
@property(nonatomic) unsigned int bonjourMs; // @synthesize bonjourMs=_bonjourMs;
@property(nonatomic) unsigned int audioOnly; // @synthesize audioOnly=_audioOnly;
@property(nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long fileBytes; // @synthesize fileBytes=_fileBytes;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *serverVersion; // @synthesize serverVersion=_serverVersion;
@property(retain, nonatomic) NSString *serverModel; // @synthesize serverModel=_serverModel;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPostAuthMs;
@property(nonatomic) _Bool hasAuthMs;
@property(nonatomic) _Bool hasSecureConnectionMs;
@property(nonatomic) _Bool hasInfoMs;
@property(nonatomic) _Bool hasConnectMs;
@property(nonatomic) _Bool hasBonjourMs;
@property(nonatomic) _Bool hasAudioOnly;
@property(nonatomic) _Bool hasBitrate;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasFileBytes;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasServerVersion;
@property(readonly, nonatomic) _Bool hasServerModel;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

