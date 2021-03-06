//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractCopyrightableElementBase.h>

#import "ArtistableElement.h"

@interface AbstractCopyrightableElement : AbstractCopyrightableElementBase <ArtistableElement>
{
}

+ (void)initialize;
- (id)findExistingGenreWithName:(id)arg1 code:(id)arg2;
- (void)removeGenre:(id)arg1;
- (void)removeGenreAtPosition:(int)arg1;
- (void)removeGenreWithName:(id)arg1 code:(id)arg2;
- (id)addGenreAtPosition:(int)arg1 withCode:(id)arg2;
- (id)addGenreAtIndex:(unsigned long long)arg1 withCode:(id)arg2;
- (id)init;

@end

