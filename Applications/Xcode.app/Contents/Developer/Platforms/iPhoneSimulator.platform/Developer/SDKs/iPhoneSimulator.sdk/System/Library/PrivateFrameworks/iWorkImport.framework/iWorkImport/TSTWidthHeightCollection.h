//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTWidthHeightCollection : NSObject
{
    struct vector<std::__1::pair<TSUColumnRowCoordinate, double>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, double>>> mFittingHeights;
    vector_40b16ab8 mResetHeights;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateResetHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addResetHeightForCellID:(CDStruct_0441cfb5)arg1;
- (void)enumerateFittingHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addFittingHeight:(double)arg1 forCellID:(CDStruct_0441cfb5)arg2;

@end
