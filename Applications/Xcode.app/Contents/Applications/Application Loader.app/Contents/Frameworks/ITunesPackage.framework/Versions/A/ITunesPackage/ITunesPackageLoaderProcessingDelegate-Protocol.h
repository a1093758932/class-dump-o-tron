//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXMLDocument;

@protocol ITunesPackageLoaderProcessingDelegate <NSObject>
- (id)postprocessObjectAfterUnmarshalling:(id)arg1 document:(NSXMLDocument *)arg2;
- (NSXMLDocument *)preprocessDocumentPriorToUnmarshalling:(NSXMLDocument *)arg1;

@optional
- (id)preprocessObjectPriorToMarshalling:(id)arg1;
- (NSXMLDocument *)postprocessDocumentAfterMarshalling:(NSXMLDocument *)arg1 object:(id)arg2;
@end

