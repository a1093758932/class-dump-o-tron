//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRKEventsInstrument.h"

@interface XRVMFaultsInstrument : XRKEventsInstrument
{
}

- (void)_setCellScaling:(id)arg1;
- (id)focusContextForSelectedRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)dataSourceForBrushWithName:(id)arg1;
- (void)setupEventsArrayFilterWithToken:(id)arg1;
- (id)defaultSortIdentifierForTable:(id)arg1 ascending:(char *)arg2;
- (void)addColumnsToEventListView;
- (void)addColumnsToThreadsView;
- (void)addColumnsToSummaryView;
- (void)_setupSummaryStyleView:(id)arg1 withActionColumnTitle:(id)arg2 keyPath:(id)arg3 controller:(id)arg4;
- (id)callsDisplayString;

@end
