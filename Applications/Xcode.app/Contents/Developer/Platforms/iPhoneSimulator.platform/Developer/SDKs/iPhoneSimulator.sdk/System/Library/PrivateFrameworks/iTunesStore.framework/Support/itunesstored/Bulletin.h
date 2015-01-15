//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface Bulletin : NSObject
{
    NSDate *_date;
    unsigned long long _destinations;
    NSURL *_launchURL;
    NSString *_message;
    NSString *_recordID;
    NSString *_title;
}

+ (id)bulletinWithTitle:(id)arg1 message:(id)arg2;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) unsigned long long destinations; // @synthesize destinations=_destinations;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_date;
- (id)newBulletinRequest;
- (id)copyBulletinDictionary;
- (void)dealloc;
- (id)initWithBulletinDictionary:(id)arg1;
- (id)init;

@end
