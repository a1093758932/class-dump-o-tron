//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/XRBrushTrackView.h>

@class NSMapTable, PFTTraceDocument, XRThreadConnectionSurface, XRThreadListController, XRTrackingAreaControl;

@interface XRThreadTrackView : XRBrushTrackView
{
    PFTTraceDocument *_unretainedTraceDocument;
    XRThreadListController *_threadListController;
    NSMapTable *_threadSurfaceMap;
    XRThreadConnectionSurface *_connectionSurface;
    XRTrackingAreaControl *_activeTrackingArea;
}

+ (void)initialize;
- (BOOL)enableCopyOnScroll;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)refreshTrackingAreas;
- (void)_coreLayoutNotification:(id)arg1;
- (void)_threadHighlightNotification:(id)arg1;
- (id)threadForSurface:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)connectionSurface;
- (void)drawThreadNumber:(unsigned long long)arg1 withMarkerLines:(BOOL)arg2 displaySelection:(BOOL)arg3 displayBackground:(BOOL)arg4 enforceSingleDeck:(BOOL)arg5 trimBubble:(BOOL)arg6 inRect:(struct CGRect)arg7;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateThreadList;
- (void)reloadData:(BOOL)arg1;
- (void)scaleUnitSquareToSize:(struct CGSize)arg1;
- (void)updateSurfaceForThread:(id)arg1 frame:(struct CGRect)arg2;
- (void)startNow:(double)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)_removeSurfaces;
- (void)validateForWatermark;
- (id)watermarkMessageString;
- (unsigned int)gridIncrement;
- (BOOL)canZoomVertical;
- (id)verticalMeasurement;
- (id)horizontalMeasurement;
- (void)dealloc;

@end
