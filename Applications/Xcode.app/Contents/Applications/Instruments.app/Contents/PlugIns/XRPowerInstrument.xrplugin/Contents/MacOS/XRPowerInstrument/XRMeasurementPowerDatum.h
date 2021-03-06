//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRPowerDatum.h"

@class XRMeasurementStreamDefinition;

@interface XRMeasurementPowerDatum : XRPowerDatum
{
    XRMeasurementStreamDefinition *_definition;
    double *_values;
}

- (void).cxx_destruct;
- (id)streamDefinition;
- (double)valueForColumn:(long long)arg1;
@property(readonly, nonatomic) double *mutableValues;
@property(readonly, nonatomic) unsigned long long valueCount;
- (void)dealloc;
- (id)initWithTimeRange:(struct XRTimeRange)arg1 andMeasStreamDefinition:(id)arg2;

@end

