//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString, NSURL;

@protocol SGReverseTemplateJS
- (void)setAssetPath:(NSURL *)arg1 locale:(NSString *)arg2;
- (void)emailToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *))arg2;
- (void)shouldDownloadFull:(NSDictionary *)arg1 reply:(void (^)(_Bool))arg2;
@end
