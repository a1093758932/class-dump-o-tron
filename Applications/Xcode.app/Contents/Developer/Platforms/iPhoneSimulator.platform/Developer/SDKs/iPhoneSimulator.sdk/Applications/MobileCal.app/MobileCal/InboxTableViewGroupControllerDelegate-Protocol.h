//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEvent, NSIndexSet, UITableViewController;

@protocol InboxTableViewGroupControllerDelegate <NSObject>
- (void)inboxTableViewGroupController:(id <InboxTableViewGroupController>)arg1 viewCommentsForEvent:(EKEvent *)arg2;
- (void)inboxTableViewGroupController:(id <InboxTableViewGroupController>)arg1 inspectEvent:(EKEvent *)arg2;
- (void)inboxTableViewGroupController:(id <InboxTableViewGroupController>)arg1 addedRows:(NSIndexSet *)arg2 removedRows:(NSIndexSet *)arg3 updatedRows:(NSIndexSet *)arg4;
- (UITableViewController *)parentTableViewControllerForGroupController:(id <InboxTableViewGroupController>)arg1;
@end
