//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CADOperationGroup.h"

#import "CADCalendarInterface.h"

@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseDeleteCalendar:(CDStruct_1ef3fb1f)arg1 forEntityType:(int)arg2 error:(CDUnknownBlockType)arg3;
- (void)CADCalendar:(CDStruct_1ef3fb1f)arg1 hasReminders:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(CDStruct_1ef3fb1f)arg1 hasEvents:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
