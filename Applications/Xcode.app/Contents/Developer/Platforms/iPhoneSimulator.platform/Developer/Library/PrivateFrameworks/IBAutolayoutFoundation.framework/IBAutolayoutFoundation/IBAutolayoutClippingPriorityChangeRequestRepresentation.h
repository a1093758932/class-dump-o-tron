//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutOperationRequestRepresentation.h>

@interface IBAutolayoutClippingPriorityChangeRequestRepresentation : IBAutolayoutOperationRequestRepresentation
{
    id _constraintRepresentation;
    double _priority;
    id _viewRepresentation;
}

@property(retain, nonatomic) id viewRepresentation; // @synthesize viewRepresentation=_viewRepresentation;
@property(nonatomic) double priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id constraintRepresentation; // @synthesize constraintRepresentation=_constraintRepresentation;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
