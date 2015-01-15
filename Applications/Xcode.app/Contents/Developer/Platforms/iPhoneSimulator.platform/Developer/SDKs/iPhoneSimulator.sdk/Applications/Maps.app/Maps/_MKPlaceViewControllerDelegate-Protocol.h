//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, CNLabeledValue, MKActivityViewController, NSString, _MKPlaceViewController;

@protocol _MKPlaceViewControllerDelegate <NSObject>

@optional
- (void)placeViewControllerDidDismiss:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didBecomeContact:(CNContact *)arg2;
- (void)placeViewControllerDidSelectDisplayedAddress:(_MKPlaceViewController *)arg1;
- (_Bool)placeViewController:(_MKPlaceViewController *)arg1 shouldOpenHomePage:(CNLabeledValue *)arg2;
- (void)placeViewControllerDidSelectShareLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectReportAProblem:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRemovePin:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectFlyoverTour:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectDirectionsFromAddressWithIdentifier:(int)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectDirectionsToAddressWithIdentifier:(int)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRerouteFromAddressWithIdentifier:(int)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectAddressWithIdentifier:(int)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
- (MKActivityViewController *)activityViewControllerForPlaceViewController:(_MKPlaceViewController *)arg1;
@end
