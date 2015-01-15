//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IBDocumentMetadataSchema : NSObject
{
    NSDictionary *_keysToPersistenceValues;
    NSDictionary *_keysToArchiveKeys;
    NSDictionary *_archiveKeysToKeys;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)shouldIncludeKey:(id)arg1 format:(long long)arg2;
- (BOOL)isDeclaredKey:(id)arg1;
- (id)keyForArchiveKey:(id)arg1;
- (id)archiveKeyForKey:(id)arg1;
- (id)persistenceValueForKey:(id)arg1;
- (id)init;

@end
